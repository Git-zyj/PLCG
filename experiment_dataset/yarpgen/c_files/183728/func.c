/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183728
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 = var_15;
                                arr_17 [9U] [i_1] [i_2] [(unsigned char)4] [(unsigned char)4] [i_1] = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (434796877)));
                var_21 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_1] [i_1 + 1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_4)))))));
}
