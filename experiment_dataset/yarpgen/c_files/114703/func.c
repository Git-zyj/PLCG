/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114703
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
    var_12 = ((/* implicit */signed char) var_8);
    var_13 = ((/* implicit */int) var_9);
    var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)178)) ^ (((/* implicit */int) (unsigned char)178))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) 2613655546U))));
                            var_17 = ((/* implicit */short) min(((~(((((((/* implicit */int) var_7)) + (2147483647))) << (((((arr_7 [i_0 - 1] [i_1] [i_2] [i_2]) + (311684879))) - (6))))))), (((/* implicit */int) (((~(var_10))) <= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)86), ((unsigned char)64))))))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_0 + 2]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
