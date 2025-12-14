/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125366
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
    var_19 = ((/* implicit */_Bool) min((max((5155641424978155898ULL), (((/* implicit */unsigned long long int) 1576187531)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((var_1) - (3978938933527039872ULL))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
        var_21 = ((/* implicit */long long int) ((unsigned long long int) 10335890868622290833ULL));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_22 += ((/* implicit */long long int) min((((/* implicit */unsigned int) max(((signed char)28), ((signed char)-28)))), (var_2)));
        arr_5 [(short)8] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))) >= (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2])) ? (var_15) : (8110853205087260781ULL))))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 15; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_18 [(_Bool)1] [i_2] [i_3] [i_5] [(_Bool)1] [(unsigned char)0] [(unsigned short)1] = ((/* implicit */long long int) var_12);
                            arr_19 [i_5] [i_3 - 2] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)10962))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((/* implicit */int) (short)-10978)))))));
                            var_24 = (!(((/* implicit */_Bool) var_3)));
                        }
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_5)) * (((/* implicit */int) var_11)))), (((/* implicit */int) ((unsigned short) arr_14 [i_1] [i_1] [(signed char)5] [i_3 + 1] [i_4] [i_6 - 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_17 [i_1] [i_1] [i_1] [i_1] [(short)6] [i_3 - 2] [i_6 - 1]), (arr_17 [i_1] [i_4] [i_3 - 1] [i_4] [i_6] [i_3 - 2] [i_6 - 2]))))) : (((((_Bool) 915431898U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2091992237U)))));
                            var_26 = ((/* implicit */long long int) arr_21 [i_1] [i_2] [i_3] [7ULL] [7ULL]);
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_4])) ? (((/* implicit */int) arr_7 [i_1] [i_4])) : (((/* implicit */int) arr_7 [i_2] [i_1]))))) ? (((/* implicit */int) arr_7 [i_4] [i_6 - 2])) : ((~(((/* implicit */int) arr_7 [i_2] [i_4])))))))));
                            arr_22 [3U] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) -374594855)) ^ (8110853205087260782ULL)))));
                        }
                        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            arr_26 [(short)14] [i_2] [i_7] = ((/* implicit */signed char) arr_16 [i_1] [(short)15] [i_7] [i_4] [i_7]);
                            var_28 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)19213))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1] [i_4] [i_4]))));
                        }
                        var_30 = max((((/* implicit */long long int) var_7)), (((8703630781944505423LL) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [15ULL] [i_3 + 2] [15ULL] [i_4] [i_3 - 1]))))));
                        arr_27 [i_4] [i_3] [i_2] [(signed char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3 - 1] [11LL] [i_3 - 2] [16] [i_3 + 2]))) : (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_17 [i_1] [i_2] [(unsigned short)2] [6U] [i_2] [i_4] [i_4]))))) : (2391975759U)))));
                        var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_8)), (var_15)));
                    }
                } 
            } 
        }
    }
    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        var_32 = ((/* implicit */unsigned short) 10335890868622290833ULL);
        arr_30 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_29 [i_8]), (arr_29 [i_8])))) && (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8]))) >= (arr_29 [i_8]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_29 [i_8]))))));
    }
}
