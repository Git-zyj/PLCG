/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127856
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
    var_20 -= ((/* implicit */int) min((((/* implicit */short) (unsigned char)174)), (((short) max((-648703272), (((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) 729701029);
                        var_22 = ((/* implicit */signed char) (~(576460752303423487LL)));
                        var_23 -= ((/* implicit */signed char) ((var_4) - (var_4)));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_17))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        var_25 = arr_8 [i_0] [i_1 + 1] [i_0];
                        arr_15 [i_0] [i_0] [16LL] [i_0] [3LL] [7U] = ((/* implicit */unsigned int) (-(1242138954)));
                        var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)127))))) : (var_6)));
                        var_27 |= arr_9 [i_4 + 2] [i_1 + 1] [i_2] [i_4 - 2];
                        var_28 = var_18;
                    }
                    var_29 = ((long long int) ((((/* implicit */_Bool) 1973666092)) ? (-1973666092) : (2147483647)));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) var_14);
    var_31 = ((/* implicit */short) ((int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)82)))));
}
