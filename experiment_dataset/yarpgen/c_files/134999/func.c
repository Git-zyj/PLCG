/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134999
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
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned int) ((long long int) var_0));
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1 - 1] [i_2] [i_3] = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((long long int) (unsigned char)44))) ? (((unsigned long long int) (short)1984)) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                            var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 2123157817U)) ? (((/* implicit */unsigned int) 262144)) : (1773748129U))) : (((/* implicit */unsigned int) max((arr_12 [i_3 + 2] [i_2]), (((/* implicit */int) (short)1984)))))))) ? (((((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 2] [i_1 + 2] [i_4])) - (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) max((var_9), ((unsigned char)1)))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 262144)) ? (var_1) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_10))))) : (var_3)))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (var_7)));
                        }
                        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_3] [i_2] [i_3 + 2] [i_5] [i_5] = ((/* implicit */int) ((unsigned int) -1LL));
                            var_18 = ((/* implicit */short) min((18446744073709551615ULL), (min((var_1), (((/* implicit */unsigned long long int) ((unsigned char) var_0)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_19 += (short)31258;
                            var_20 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 133693440U)))));
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_1 + 2] [i_2 - 4] [i_2 - 4]))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 536870912))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (-927601136) : (var_0))))));
                        var_24 |= ((/* implicit */short) min((((long long int) var_1)), (((/* implicit */long long int) min((arr_18 [i_0] [i_2] [i_1 + 1]), (arr_18 [i_0] [i_2] [i_0]))))));
                    }
                } 
            } 
        } 
    }
    var_25 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)44)), (var_10))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) - (8969245793843674121ULL)))));
}
