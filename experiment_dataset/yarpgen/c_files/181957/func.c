/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181957
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
    var_17 = ((signed char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((int) ((signed char) var_8))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned char) ((_Bool) var_1))))));
                var_20 ^= ((/* implicit */unsigned long long int) ((long long int) ((signed char) var_1)));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_21 += ((/* implicit */signed char) ((unsigned char) ((unsigned char) ((unsigned char) var_11))));
                            arr_11 [i_1] [i_2 + 1] [i_2 + 1] [1U] [17] [i_2 - 2] = ((/* implicit */long long int) ((_Bool) ((signed char) var_1)));
                            arr_12 [i_1] = ((/* implicit */unsigned char) var_15);
                            arr_13 [i_0] [i_1] [1ULL] = ((/* implicit */unsigned long long int) ((_Bool) var_12));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_13))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            {
                var_23 = ((/* implicit */signed char) var_0);
                /* LoopNest 2 */
                for (long long int i_6 = 3; i_6 < 17; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((signed char) ((unsigned long long int) var_4)));
                            var_25 = ((/* implicit */_Bool) ((signed char) ((signed char) var_7)));
                        }
                    } 
                } 
            }
        } 
    } 
}
