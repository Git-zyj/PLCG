/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184564
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
    var_14 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((-910095634) ^ (((/* implicit */int) (unsigned char)255)))) & (((/* implicit */int) var_4)))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */int) var_0)) / (((/* implicit */int) max((arr_0 [i_0] [i_2]), (arr_6 [i_0]))))));
                                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) min((var_6), ((_Bool)1))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), ((-(max((arr_1 [i_0] [i_1 + 2]), (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
