/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134526
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
    var_13 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (+(var_3)));
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) 1514248508U))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_4))));
                            arr_12 [8U] [i_1] [(unsigned short)19] [i_1] = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */unsigned int) var_2)), (max((max((((/* implicit */unsigned int) var_7)), (var_5))), (((/* implicit */unsigned int) var_11)))))))));
}
