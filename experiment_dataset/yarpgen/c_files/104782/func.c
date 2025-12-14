/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104782
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_1)), (max((((((/* implicit */_Bool) 981272325U)) ? (((/* implicit */unsigned long long int) var_13)) : (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)65525))))), (((unsigned long long int) (unsigned char)36))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((int) (unsigned short)0));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))));
                        var_19 = 3313694970U;
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((arr_6 [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (47243442)))))));
                    }
                    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_8 [i_1] [i_1]))));
                            arr_17 [i_0] [i_1] [(unsigned short)21] [i_0] [i_5] = ((/* implicit */long long int) (signed char)-106);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_15) : (var_14)))) ? (((arr_1 [i_0] [i_4]) ^ (arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_2] [i_6]) : (arr_1 [i_0] [i_1]))));
                            var_22 = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [i_4] [i_2]);
                            var_23 = ((/* implicit */short) ((((max((arr_6 [(signed char)23]), (((/* implicit */unsigned long long int) (_Bool)0)))) << (((max((((/* implicit */unsigned int) arr_18 [i_4] [i_1] [7ULL] [(_Bool)1] [i_6])), (var_4))) - (4294967253U))))) | (var_2)));
                        }
                        var_24 = ((/* implicit */unsigned int) (unsigned short)65535);
                        arr_20 [(unsigned short)5] = ((/* implicit */_Bool) arr_2 [18LL]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 4; i_7 < 24; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */int) max(((unsigned short)65525), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_7 + 1] [(unsigned short)23] [i_7 - 1] [i_7 - 2] [i_7 - 3])))))));
                        arr_23 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [i_7] [i_7] [i_7 - 4] [i_0] [i_0])) > (3313694970U)))) << (((arr_9 [i_2] [i_7 - 2] [i_7 + 1] [i_2] [i_1]) - (1797462077)))));
                    }
                }
            } 
        } 
    } 
    var_26 ^= ((((max((((/* implicit */long long int) var_10)), (var_9))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 511U)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((var_2), (((/* implicit */unsigned long long int) var_14)))))) : (max((((/* implicit */unsigned long long int) 2170012828U)), (var_2))));
}
