/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147094
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
    var_13 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) min((((int) var_1)), (((/* implicit */int) ((_Bool) var_6)))))) : (((((/* implicit */unsigned int) var_2)) ^ (min((var_4), (((/* implicit */unsigned int) (unsigned char)7)))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned long long int) var_9);
                var_15 = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_14 [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned char) var_3);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) var_11);
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_12))));
                            arr_21 [i_4] [i_3] [i_4] [i_5] = (~((~(((((/* implicit */int) arr_13 [i_5] [i_5])) * (((/* implicit */int) (unsigned char)12)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) (unsigned char)249);
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) (~((~((~(var_3)))))));
}
