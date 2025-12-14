/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121932
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
    var_14 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) (((~(((/* implicit */int) max((((/* implicit */short) var_9)), (var_4)))))) <= ((((-(((/* implicit */int) arr_1 [i_1])))) ^ (((/* implicit */int) (signed char)32))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((((/* implicit */signed char) arr_2 [i_0])), ((signed char)2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))))))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_2]))))) ? ((~(arr_4 [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_4))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (signed char)-2))));
                    var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3])) ? (((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) == (var_7))), (((_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (signed char)-18))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_1] [(signed char)9] [i_4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_12 [i_2]))));
                    arr_14 [i_0] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [6ULL] [i_0])) > (((/* implicit */int) var_1))))) % (((/* implicit */int) (signed char)2))));
                }
                for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max((arr_3 [i_0] [i_2] [i_0]), (((/* implicit */signed char) arr_15 [i_0] [i_1] [i_2] [i_5]))))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_10))))))) < (((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) arr_7 [i_0] [4ULL] [i_5] [i_2] [i_5])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_2] [i_5])) || (((/* implicit */_Bool) var_8)))))))));
                    var_21 = ((/* implicit */int) var_5);
                    var_22 = ((/* implicit */unsigned char) (-((-(arr_8 [i_5])))));
                }
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) var_11);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_6] [3U])) <= (((/* implicit */int) min((min((arr_7 [i_0] [i_0] [i_8] [i_8] [(short)2]), (((/* implicit */unsigned short) (signed char)2)))), (((/* implicit */unsigned short) ((signed char) arr_23 [i_0]))))))));
                        }
                    } 
                } 
            } 
            var_25 |= ((/* implicit */unsigned short) var_10);
            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-2))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [11U]))));
            var_28 = ((/* implicit */int) ((((-2136983405) + (((/* implicit */int) (signed char)8)))) == (((/* implicit */int) ((signed char) 1837368582U)))));
        }
        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) arr_16 [i_0] [i_11]);
            /* LoopSeq 3 */
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_27 [i_0] [(unsigned short)3]))))) ? (((unsigned long long int) arr_8 [i_12])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [0U] [i_11] [i_12])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))))))) ^ (((/* implicit */unsigned long long int) ((int) arr_7 [i_12] [(unsigned short)9] [i_12] [i_0] [i_0])))));
                arr_36 [i_0] [i_12] [i_12] = ((/* implicit */unsigned short) var_13);
                arr_37 [i_12] [i_11] [i_12] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_32 [i_0]))));
            }
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_31 = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)0))))));
                var_32 = ((int) arr_2 [i_0]);
                arr_42 [i_0] [i_11] [i_0] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_11] [i_11] [i_13] [i_13])) | ((-(var_8)))));
            }
            for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [(short)9] [9U] [i_14]))) : (min((var_6), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [(signed char)11] [i_11] [i_11] [i_11])) / (((/* implicit */int) (signed char)-2)))))))));
                var_34 = ((/* implicit */unsigned short) ((short) max((((/* implicit */int) ((unsigned short) var_8))), (2147483647))));
            }
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                for (signed char i_16 = 3; i_16 < 9; i_16 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) arr_22 [9] [i_11] [i_15] [i_16 - 1]))));
                        var_36 = ((/* implicit */signed char) ((unsigned short) arr_5 [i_16 - 3] [i_15] [i_11] [i_0]));
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
}
