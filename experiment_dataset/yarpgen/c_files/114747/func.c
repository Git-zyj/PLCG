/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114747
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                var_21 = ((/* implicit */_Bool) ((unsigned char) (~(arr_0 [9U] [(_Bool)1]))));
                var_22 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) -5111068709941430870LL))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)48))))) ? ((~(9223372036854775807LL))) : (((((((/* implicit */long long int) ((/* implicit */int) var_5))) | (-3253910369447405419LL))) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (int i_3 = 4; i_3 < 19; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) (~(268435455U)));
                    var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (910968357)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_2]))))) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_13)) : (((var_2) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_13 [i_4] [4LL] [i_2])) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) var_18))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_20 [i_2] [i_3] [(short)1] [(unsigned char)2] [i_3] &= ((/* implicit */unsigned char) -2147483647);
                                arr_21 [i_6] [(short)6] [i_5] [i_4] [i_4] [2] [(unsigned char)12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [18LL] [i_3 - 3])) ? (-1026825145) : (arr_16 [i_2] [i_3] [i_3 - 3])))) || (((/* implicit */_Bool) var_18))));
                                arr_22 [i_2] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */short) (unsigned char)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) var_6);
}
