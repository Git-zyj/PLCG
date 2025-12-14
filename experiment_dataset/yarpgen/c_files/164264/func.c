/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164264
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] = (~(((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)199))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (var_11)))))));
                var_16 -= ((/* implicit */signed char) var_13);
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) min((var_17), (var_7)));
                            var_18 -= ((/* implicit */unsigned char) max(((!((_Bool)1))), (((((/* implicit */_Bool) (unsigned char)199)) || (((/* implicit */_Bool) (short)2041))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 -= ((/* implicit */signed char) var_13);
    var_20 = ((/* implicit */unsigned short) var_9);
}
