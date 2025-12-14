/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145461
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
    var_17 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) var_9);
                    arr_8 [i_0 + 3] [i_1] [i_2] = ((/* implicit */unsigned char) var_4);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_11 [i_0 - 3] [(_Bool)1] [i_2] [i_1] = min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), (max((((/* implicit */unsigned short) (unsigned char)203)), ((unsigned short)13767)))))), (((((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_0] [i_1] [i_1]))))) >> (((var_10) - (11120220035035185752ULL))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_2] = ((/* implicit */unsigned long long int) max((max((max((var_2), (((/* implicit */unsigned int) (unsigned char)70)))), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2])))))));
                            var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_13))))), (var_15)))), (((long long int) var_3))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), ((unsigned char)187)));
                            var_20 = ((/* implicit */unsigned char) arr_13 [i_5] [i_1]);
                        }
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */unsigned long long int) ((arr_14 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3])))))) : (min((((/* implicit */unsigned long long int) ((unsigned short) var_9))), (min((var_10), (((/* implicit */unsigned long long int) var_5))))))));
                            var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_15))))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))))), (max((max((arr_20 [7ULL] [i_1] [i_2] [i_3] [i_2] [i_1]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1])))))))));
                            arr_21 [i_6] [i_1] [i_1] [i_1] [(signed char)4] = ((/* implicit */short) ((unsigned int) -715675723));
                        }
                        var_23 = ((/* implicit */short) max(((~(var_10))), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_17 [(unsigned short)15] [(unsigned short)15] [i_2] [(unsigned short)15] [i_0])), (1659139112))) >> ((((+(((/* implicit */int) (unsigned char)56)))) - (33))))))));
                    }
                    arr_22 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(unsigned char)16] [i_1] [(short)11] [i_1] [i_0]))) / (14764980929543282471ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (945488806767035286LL))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (8304628874257924338ULL)));
}
