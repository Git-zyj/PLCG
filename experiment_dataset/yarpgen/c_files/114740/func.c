/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114740
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_14 [i_0 + 3] = ((((/* implicit */int) arr_0 [i_2] [i_2])) | (((/* implicit */int) (!(((/* implicit */_Bool) 517000524U))))));
                        arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0 - 4] [i_1 - 1])) ^ (((/* implicit */int) arr_13 [i_0 - 4] [i_1 - 1]))));
                        var_19 = ((/* implicit */unsigned long long int) var_5);
                        arr_16 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_1 [i_0] [i_1 - 1])))));
                        var_20 ^= ((/* implicit */unsigned int) ((long long int) arr_12 [i_0 + 1] [i_1] [i_2]));
                    }
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [(unsigned short)5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_6 [(unsigned short)3] [i_1] [i_1 - 1]))), (((/* implicit */unsigned int) 1221230497))));
                        arr_20 [i_0] [i_1 - 1] = ((/* implicit */long long int) (((-(15823911161180015408ULL))) / (((/* implicit */unsigned long long int) (+(3599665441U))))));
                        arr_21 [i_0] [i_1] [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_18 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])), (3599665441U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 2] [i_1 + 1])))))) : (arr_6 [i_0 - 4] [i_0 - 2] [i_1 - 1])));
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        arr_26 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_5 + 1])) ? (((/* implicit */int) ((((/* implicit */long long int) arr_23 [i_2] [i_2] [i_2] [i_5 + 3])) > ((-(-8533865467057370747LL)))))) : (((/* implicit */int) max((arr_24 [i_0 - 4] [i_0 - 4] [i_1 + 1] [i_1 + 1]), (arr_24 [i_0 - 3] [i_0 - 2] [i_1 - 1] [i_1 + 1]))))));
                        var_21 = ((/* implicit */long long int) (-(((unsigned int) 2622832912529536181ULL))));
                        var_22 *= max((((/* implicit */unsigned int) min((arr_24 [i_5 - 2] [i_0 - 3] [i_2] [i_5]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 - 1] [i_0] [(short)4] [i_5])) || (((/* implicit */_Bool) (unsigned short)13860)))))))), (max((((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 + 3])), (695301854U))));
                        arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (~((~(9271896838805316736ULL)))));
                        var_23 = ((/* implicit */signed char) arr_4 [i_1] [i_1] [i_1]);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    var_24 -= ((/* implicit */int) arr_1 [i_6] [i_6]);
                    var_25 = ((arr_17 [(signed char)0] [i_6] [(signed char)0] [i_6] [(signed char)10]) * ((((+(((/* implicit */int) arr_1 [6LL] [i_6])))) / (((/* implicit */int) var_14)))));
                    arr_33 [i_0] [(unsigned char)4] [i_7] = ((/* implicit */unsigned short) var_10);
                    arr_34 [(short)2] [i_6] [(unsigned short)8] [i_0] |= ((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_17)))), ((!((!(((/* implicit */_Bool) var_6))))))));
                }
            } 
        } 
        arr_35 [i_0 - 4] = ((/* implicit */unsigned short) arr_5 [i_0]);
    }
    for (short i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        arr_38 [(unsigned char)12] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_36 [i_8] [i_8]))) ? ((+(((/* implicit */int) arr_36 [i_8] [i_8])))) : (((((/* implicit */_Bool) arr_37 [i_8] [i_8])) ? (((/* implicit */int) arr_36 [i_8] [i_8])) : (((/* implicit */int) arr_37 [i_8] [i_8]))))));
        arr_39 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_8] [i_8])) ? ((+(((/* implicit */int) arr_37 [i_8] [i_8])))) : (((((/* implicit */_Bool) arr_37 [i_8] [i_8])) ? (((/* implicit */int) arr_36 [i_8] [i_8])) : (((/* implicit */int) arr_37 [i_8] [i_8]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (695301855U)))) : (max((((/* implicit */unsigned long long int) -4125327518597713493LL)), (15823911161180015413ULL)))));
    }
    var_26 = ((/* implicit */int) max((var_0), (((/* implicit */unsigned long long int) 3599665428U))));
}
