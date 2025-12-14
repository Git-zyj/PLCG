/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145029
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_10 *= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)192))));
        arr_2 [i_0] [i_0] &= ((/* implicit */int) ((signed char) arr_1 [i_0 + 1]));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(arr_1 [i_0 + 1])));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (short)31632);
            arr_8 [2] [(signed char)2] [i_1] |= ((/* implicit */int) (signed char)-6);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_11 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_1 [7U]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42)))))) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0] [i_1] [i_2] [i_1] [i_4])) : (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1])))));
                            var_12 = ((/* implicit */signed char) ((((unsigned long long int) var_3)) | (((/* implicit */unsigned long long int) var_3))));
                        }
                    } 
                } 
            }
            var_13 = ((/* implicit */unsigned char) ((int) var_7));
        }
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (signed char i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    {
                        var_14 |= ((/* implicit */unsigned int) arr_23 [i_0] [i_5] [(signed char)0]);
                        var_15 = ((/* implicit */signed char) ((short) (signed char)31));
                        arr_26 [i_7 - 1] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_5] [i_0] [5] [i_7])) ? (arr_22 [i_5] [i_6] [i_7] [i_7]) : (arr_22 [i_5] [i_7] [(short)2] [i_7])));
                        var_16 = ((/* implicit */int) ((arr_24 [i_0] [i_5] [i_5] [i_7] [i_7] [i_5]) > (arr_9 [i_5])));
                    }
                } 
            } 
            var_17 *= ((/* implicit */_Bool) ((unsigned char) var_3));
        }
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0]);
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_8])) + (((/* implicit */int) arr_19 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_28 [i_8]))))) : (arr_1 [i_0 + 1])));
        }
        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) 10349349286142971737ULL);
                arr_35 [i_0 - 1] [(unsigned char)11] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_9] [i_0]))));
                var_21 = ((/* implicit */int) arr_12 [i_10] [i_9 - 1] [i_10] [i_9] [i_9]);
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (signed char)8);
                            var_23 = ((/* implicit */signed char) (+(arr_9 [i_0 - 1])));
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 4; i_13 < 11; i_13 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-17010)) : (((/* implicit */int) var_4)))));
                arr_45 [i_9] [i_9] [i_13] [i_13] = ((/* implicit */unsigned int) arr_28 [i_9]);
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((short) ((unsigned long long int) arr_41 [(short)6] [i_0] [i_13])));
                            var_26 = ((/* implicit */unsigned long long int) ((arr_46 [i_0 + 1] [i_9] [i_9 + 1] [i_9 - 1]) < (arr_46 [i_0 + 1] [i_9] [i_9 - 1] [i_9 - 1])));
                        }
                    } 
                } 
            }
            for (short i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                var_27 = ((/* implicit */_Bool) var_0);
                var_28 = ((/* implicit */signed char) (-(((/* implicit */int) arr_33 [i_0]))));
            }
            var_29 = ((/* implicit */unsigned short) arr_20 [(unsigned char)4] [i_9]);
            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (short)0))));
            /* LoopSeq 1 */
            for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((+(0ULL)))));
                arr_55 [i_0 + 1] [i_9] [i_9] = ((arr_18 [i_0] [i_9] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
            }
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_34 [i_0 - 1] [i_9 + 1])))))));
        }
        arr_56 [i_0] [1LL] = ((/* implicit */unsigned long long int) ((_Bool) (~(8097394787566579878ULL))));
    }
    for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 3) 
    {
        var_33 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_16 [0] [i_18] [i_18] [i_18] [(short)10] [i_18]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [(unsigned char)4] [i_18] [0]) != (((((/* implicit */_Bool) arr_51 [(unsigned short)8] [7ULL] [7ULL])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_18] [i_18] [(_Bool)1] [(unsigned char)8] [10LL]))))))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) * (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
        /* LoopSeq 2 */
        for (int i_19 = 0; i_19 < 11; i_19 += 2) 
        {
            arr_62 [i_18] [i_18] = ((/* implicit */_Bool) min((arr_25 [i_19] [i_19] [i_18] [i_18]), (((arr_19 [i_18] [i_18]) ? (arr_25 [i_18] [i_18] [i_18] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_18] [i_19])))))));
            var_34 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6101)) ? (8097394787566579899ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27)))))) ? (((((/* implicit */_Bool) 15538591963021293569ULL)) ? (var_3) : (var_3))) : (((/* implicit */unsigned int) -732449142)))));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_14 [i_18] [i_18] [i_19] [(_Bool)1] [i_19]), (((/* implicit */short) (signed char)-59)))))))) + (((((/* implicit */_Bool) arr_58 [i_18])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
            var_36 |= ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
        }
        for (short i_20 = 0; i_20 < 11; i_20 += 4) 
        {
            var_37 = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_54 [i_18] [i_18] [i_20])))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-3293)) & (((/* implicit */int) arr_41 [i_18] [i_20] [i_20]))))) ? (((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) arr_34 [3] [i_20])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) min((arr_54 [i_18] [i_18] [i_20]), (((/* implicit */signed char) arr_34 [i_20] [3U])))))))));
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21147)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (signed char)120))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [(unsigned char)6] [i_18] [i_18] [i_18]))))) : (((int) ((unsigned char) arr_48 [i_18] [i_18] [i_18] [(_Bool)1] [i_18])))));
            arr_66 [i_18] [i_20] [i_18] = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((signed char) arr_28 [i_18]))), (((unsigned char) (!(((/* implicit */_Bool) var_3)))))));
            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((((/* implicit */_Bool) arr_64 [i_18])) ? (arr_64 [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 258706373554231058ULL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_18] [i_20] [i_20]))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24019))) : (var_0))))))))));
            var_40 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) arr_17 [i_20])), (((((/* implicit */_Bool) arr_5 [i_18] [i_20] [0])) ? (arr_40 [i_20] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))))))));
        }
    }
    var_41 = ((/* implicit */short) var_8);
}
