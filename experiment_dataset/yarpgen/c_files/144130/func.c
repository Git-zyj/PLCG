/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144130
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
    var_19 = ((5559950339369404921ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
    var_20 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) var_12);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((unsigned int) (unsigned char)159)), (((/* implicit */unsigned int) (short)-32764))))) & (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51848))))) ? (((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (unsigned short)51868)) : (((/* implicit */int) (short)28376)))) : (min((((/* implicit */int) var_8)), (-1928391507)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) : (var_14)));
                            arr_13 [(unsigned char)1] [(unsigned char)1] [i_2] = ((/* implicit */signed char) var_15);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_16);
}
