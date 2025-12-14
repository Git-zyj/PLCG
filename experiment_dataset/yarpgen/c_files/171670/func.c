/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171670
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
    for (short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((unsigned short) (~((+(((/* implicit */int) var_5)))))));
                var_20 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) ((unsigned short) arr_0 [i_1]))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_22 = ((short) (~(((unsigned int) var_1))));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (signed char)-76))))))));
                    arr_11 [0] [i_2 - 1] [i_4] [i_4] = ((/* implicit */signed char) (-(((unsigned int) ((unsigned int) var_7)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) (+((-((~(((/* implicit */int) (short)18849))))))));
    var_25 = ((/* implicit */unsigned short) (+((+(((unsigned int) 2034984835U))))));
}
