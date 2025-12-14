/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143111
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
    var_10 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_11 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned short)23426))) ? (((((/* implicit */int) arr_3 [i_0] [i_1])) >> (((((/* implicit */int) (unsigned short)42109)) - (42089))))) : (((/* implicit */int) ((short) (short)2275)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [(short)6] [i_3] = ((/* implicit */signed char) (short)25485);
                                var_12 = ((/* implicit */int) (signed char)(-127 - 1));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_3);
}
