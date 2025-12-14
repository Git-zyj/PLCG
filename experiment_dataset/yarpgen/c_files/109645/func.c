/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109645
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
    var_10 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] = arr_3 [5] [i_1];
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_3] = ((/* implicit */signed char) var_1);
                            arr_11 [i_3] [i_2] [i_1] [i_0] [(signed char)4] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((arr_1 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_1 [i_0])))));
                            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((unsigned short) ((_Bool) 0LL))))));
                            var_12 += ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_3 [i_0] [i_3 + 3]))))));
                            arr_12 [(_Bool)1] [i_1] &= ((/* implicit */signed char) (~(((/* implicit */int) max((arr_5 [i_0] [i_0] [i_3] [i_3 + 3]), (arr_5 [i_0] [i_1] [i_2] [i_3 + 3]))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */long long int) (signed char)82);
                var_13 = ((_Bool) arr_6 [i_0] [i_1] [i_0]);
            }
        } 
    } 
}
