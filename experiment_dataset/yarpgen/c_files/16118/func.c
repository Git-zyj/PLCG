/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16118
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
    var_12 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)32)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_8 [(signed char)2] [i_3] [i_3 + 1]))));
                            var_14 = ((/* implicit */short) min((((/* implicit */unsigned char) var_0)), (arr_7 [i_2] [i_1])));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-5892598243176165775LL), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_1] [(unsigned char)3])), ((unsigned char)224)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_8 [1U] [i_0] [i_0])) : (((arr_9 [i_1 + 2] [i_1] [i_1] [2] [i_1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)32))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_7);
}
