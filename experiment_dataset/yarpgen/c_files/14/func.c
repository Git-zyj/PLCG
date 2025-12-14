/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) max((((/* implicit */int) arr_2 [i_2] [(short)0])), ((+(((/* implicit */int) arr_1 [i_2]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
                                var_22 = ((/* implicit */short) max((((/* implicit */int) max(((short)2427), ((short)-9311)))), ((-(((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((short) var_9);
    var_24 = ((/* implicit */short) ((((/* implicit */int) min((var_0), (((/* implicit */short) ((((/* implicit */int) var_18)) <= (((/* implicit */int) (short)32767)))))))) | (((/* implicit */int) var_3))));
}
