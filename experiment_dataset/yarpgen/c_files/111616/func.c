/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111616
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = var_15;
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) * (((/* implicit */int) var_9)))), ((+(((/* implicit */int) arr_0 [i_4]))))))), (max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_3] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_4])) : (((/* implicit */int) var_18)))))))));
                                arr_17 [i_0] [i_1] [i_1] [i_2] [i_1] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0 - 2] [i_3 - 1]))) & (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) arr_6 [7LL]))))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_10 [i_0] [(short)6] [i_3 - 1] [i_4])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_2])))))))));
                            }
                        } 
                    } 
                } 
                var_23 |= ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0 - 2])), (((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) arr_6 [i_0 - 2]))))));
                var_24 = ((/* implicit */signed char) min(((-(((arr_1 [i_1] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0] [8ULL] [i_1] [i_1] [8ULL])))), ((+(((/* implicit */int) arr_15 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3])))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) ((long long int) var_3));
        /* LoopNest 2 */
        for (signed char i_6 = 4; i_6 < 14; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_5 - 1] [i_5])) || (((/* implicit */_Bool) var_15)))))));
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_26 += ((((((/* implicit */_Bool) min((var_13), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_8]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))))))) : ((+(arr_25 [i_8]))))) > ((-(arr_25 [i_8]))));
                        var_27 = ((/* implicit */unsigned short) ((short) (+(((((/* implicit */int) arr_24 [i_5] [i_5 - 1])) | (((/* implicit */int) (unsigned short)43162)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_27 [i_5] [i_6] [i_7] [i_6] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_18 [11ULL]))))) : (min((((/* implicit */unsigned int) var_3)), (4294967271U))))), (((/* implicit */unsigned int) ((signed char) arr_31 [i_6 - 1] [i_6 - 1] [i_5 + 1] [i_5 + 2] [i_5 + 1])))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            var_29 |= ((/* implicit */short) min((min((arr_28 [i_5 + 2] [i_6 - 3]), (arr_28 [i_5 - 1] [i_6 + 2]))), (((/* implicit */long long int) min((((/* implicit */int) var_7)), ((+(arr_26 [i_5] [i_5] [i_7] [i_9]))))))));
                            arr_34 [i_5] [i_5] [i_6] [i_7] [i_9] [i_9] [i_10] = ((/* implicit */_Bool) -1829409633);
                            arr_35 [i_5 + 1] [i_5] [i_6 + 1] [i_7] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_33 [i_5 + 2])) ? (((((/* implicit */_Bool) arr_32 [i_7] [i_10 + 2])) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_30 [i_5] [i_5])))) : (((/* implicit */int) var_12))))));
                        }
                        for (signed char i_11 = 2; i_11 < 15; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) var_16)) ^ ((-(arr_20 [i_5]))))), (((/* implicit */long long int) arr_19 [i_11]))));
                            var_31 = ((/* implicit */signed char) min((((/* implicit */short) var_19)), (arr_31 [i_5] [i_6] [i_7] [i_9] [i_11])));
                            var_32 = ((/* implicit */unsigned int) (+(((var_4) ? (((/* implicit */int) max((arr_32 [i_7] [i_5 - 1]), (((/* implicit */signed char) var_11))))) : ((+(((/* implicit */int) var_9))))))));
                        }
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) arr_28 [i_5] [(unsigned char)11]);
                            arr_41 [i_5] [i_7] [i_6] [i_7] [i_9] [i_9] [2] = var_10;
                        }
                        var_34 = ((/* implicit */short) ((signed char) (!(arr_37 [i_5 + 2] [i_6 - 4] [i_7] [i_7] [i_9] [i_9] [i_9]))));
                    }
                    var_35 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (signed char)45)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-30054)) : (((/* implicit */int) arr_18 [i_7]))))));
                }
            } 
        } 
    }
    for (short i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (short i_16 = 1; i_16 < 17; i_16 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) max((arr_46 [i_16] [i_15] [i_14] [i_13]), (((/* implicit */unsigned int) arr_43 [i_14] [i_16])))))));
                        arr_50 [i_14] [i_14] [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_15] [i_15] [i_15] [i_15] [i_15] [i_14])) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (arr_49 [i_16 - 1] [i_16 + 1] [i_16] [i_16 - 1] [i_16 + 2] [i_14]) : (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) var_7)))))))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */signed char) var_1);
    }
}
