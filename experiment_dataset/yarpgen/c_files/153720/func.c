/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153720
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (signed char)-107)))), (((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (~((-((~(((/* implicit */int) var_11))))))));
                            var_22 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_3 [i_0]))))));
                            var_23 = ((/* implicit */signed char) arr_5 [(unsigned short)18]);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((arr_9 [i_0] [(short)16] [i_0] [i_1]) & (arr_9 [i_0] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */long long int) (-((+(((/* implicit */int) var_16))))))), (var_6))))));
}
