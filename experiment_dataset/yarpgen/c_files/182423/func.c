/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182423
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
    var_13 = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) ((-2609063415367097475LL) ^ (((/* implicit */long long int) var_11))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_2))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != ((-(-5445251223086351747LL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_14 -= ((/* implicit */signed char) ((min((max((arr_6 [i_1]), (((/* implicit */long long int) (signed char)(-127 - 1))))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) var_12)))))) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 3) 
                    {
                        var_15 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_4 + 4] [i_4 + 4]))));
                        arr_16 [(unsigned short)19] [i_3] [18U] [18U] = ((/* implicit */signed char) ((int) ((arr_13 [i_1] [i_3] [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            {
                                arr_24 [11] [i_2] [(unsigned short)10] [i_6] [(unsigned short)10] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_6] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_3] [i_5] [(signed char)10]))) : (var_5))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_5] [i_5])) : (((/* implicit */int) var_9)))))));
                                var_16 += ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_1] [i_1] = (~(((/* implicit */int) ((short) arr_18 [i_1] [i_1] [i_1] [i_1]))));
        arr_26 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [7ULL] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-5445251223086351764LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
    }
}
