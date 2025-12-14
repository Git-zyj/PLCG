/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151121
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) max((var_3), (arr_1 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_1 [i_0 - 1] [i_0])))))));
        arr_5 [i_0] |= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (4192181395260341997ULL));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-92)) : (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65534))))));
        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_1]) : (((/* implicit */long long int) 1307521751))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_19 [i_4] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_2]), (((/* implicit */long long int) (-(3100740396U))))))) ? (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (var_8))))) : (min((var_0), (((/* implicit */long long int) arr_13 [i_4])))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) != (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_2])))))))))));
                    arr_20 [(signed char)2] [i_3] [i_4] |= ((/* implicit */short) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 497266579U)) ? (-2147483638) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 15530182124416874118ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_4]))) : (3721974139U)))))));
                    arr_21 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_15 [i_2]), (287733967U)))) / (min((((/* implicit */unsigned long long int) arr_15 [i_2])), (16196510194924573791ULL)))));
                    arr_22 [i_2] [i_3] [i_4] [(unsigned char)2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_17 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_28 [i_2] [i_5] |= ((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_5 - 1] [i_5 - 2]);
                                arr_29 [i_2] [i_5] [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) ((((arr_25 [i_5 - 2] [i_5 - 1] [9ULL] [i_5 - 1] [i_6]) + (arr_25 [i_5 + 1] [i_5 + 1] [i_5] [6U] [i_5 + 1]))) & (((((/* implicit */_Bool) (unsigned short)9517)) ? (arr_25 [i_5 - 1] [i_5 - 2] [1LL] [i_6] [i_6]) : (arr_25 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_30 [(signed char)4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)18692)) : (((/* implicit */int) arr_17 [10U]))))), (min((1194226901U), (((/* implicit */unsigned int) (short)24816))))));
        arr_31 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_3), (((/* implicit */signed char) (_Bool)1))))) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_27 [6] [i_2] [i_2]))))) : (max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))) < (8098926041112802771ULL)))), (var_6)))));
    }
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11)))))) : (min((((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) 9181937686851464420ULL)) ? (1534645605366544721LL) : (-5422041589959066138LL)))))));
}
