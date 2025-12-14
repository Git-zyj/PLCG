/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120557
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
    var_11 = ((/* implicit */short) var_8);
    var_12 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) var_0))), (((int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)30))));
                    arr_6 [i_2] [(_Bool)1] [i_0] [i_2] = ((/* implicit */signed char) 1694385144U);
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_2))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) arr_7 [i_3]);
                var_16 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_1)), (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30)))))));
                arr_13 [i_4] [i_4] [i_3] = ((/* implicit */int) var_4);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_2);
}
