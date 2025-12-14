/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164768
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
    for (short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((unsigned short) arr_0 [i_0 - 2] [i_1 + 2]));
                            var_18 = ((/* implicit */unsigned int) var_7);
                            arr_11 [i_0 - 1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)6791)) ? (((/* implicit */int) (short)-6789)) : (((/* implicit */int) (short)6781))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1 + 1] [i_1] = ((/* implicit */int) ((var_8) + (((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (short)-6781)) : (((/* implicit */int) (short)6782)))))))));
                var_19 = ((/* implicit */_Bool) (~(arr_3 [i_0] [(unsigned char)8])));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_14);
}
