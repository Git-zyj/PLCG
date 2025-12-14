/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16062
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
    var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */unsigned long long int) ((unsigned int) var_6)))))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((((~(var_16))) << (((((/* implicit */int) var_15)) - (31006))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) 1574746099949125754ULL))) > (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16871997973760425871ULL)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17627)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(var_16))))));
                            arr_14 [12LL] [i_0] [i_2 + 2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_10 [i_0] [5] [i_0] [(unsigned short)8] [(short)12] [(signed char)6]));
                            arr_15 [i_0] [1LL] = (short)-1091;
                        }
                    }
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (+(((unsigned long long int) max(((unsigned short)6059), (((/* implicit */unsigned short) (signed char)-20))))))))));
                            arr_20 [(signed char)7] [i_0] [(short)3] [i_6] [i_6] [(unsigned short)8] = ((/* implicit */unsigned int) 398742127592243549ULL);
                        }
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (-(((/* implicit */int) max((var_13), (var_10))))))) : (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [(short)10] [(short)12] [i_2 + 2] [(unsigned short)7] [(unsigned short)7]))) : (arr_5 [(signed char)1] [i_0 - 2]))), (((/* implicit */long long int) var_4))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) arr_17 [(short)7] [11LL] [i_7] [i_7] [i_7] [i_1]);
                        var_27 = ((/* implicit */signed char) var_12);
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (((unsigned long long int) (short)-15416))));
                    }
                    for (short i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (+((+(max((((/* implicit */unsigned long long int) arr_5 [15LL] [i_8])), (arr_13 [i_0] [i_2] [(unsigned char)9] [3] [i_2] [i_8 + 1]))))))))));
                        var_30 += ((/* implicit */unsigned char) ((min((arr_5 [i_0 - 1] [i_0 - 1]), (arr_5 [i_8 - 1] [i_8 - 1]))) > ((-(arr_5 [(signed char)7] [1LL])))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (+(max((((((/* implicit */int) var_19)) << (((var_0) - (727627863903268233ULL))))), (((((/* implicit */int) var_10)) << (((var_14) - (4890657797988681861ULL))))))))))));
    var_32 += ((/* implicit */unsigned long long int) var_10);
}
