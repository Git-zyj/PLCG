/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162496
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
    var_18 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_12))))));
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_9))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(1739293184))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (short i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3]))))))))));
                    arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2398652849U))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (+((-(arr_0 [i_2] [i_3]))))))));
                }
            } 
        } 
    } 
}
