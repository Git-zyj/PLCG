/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13010
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] [i_1] [(signed char)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) var_0)), (((/* implicit */long long int) arr_4 [i_1]))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(_Bool)1] [i_2] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_3])) : (arr_18 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [(_Bool)1] [i_3] [i_4 - 2]))))));
                                arr_19 [i_0] [(short)11] [(unsigned char)15] [i_0] [(short)11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775807LL) : (((/* implicit */long long int) 4294967295U))));
                                var_18 ^= ((/* implicit */unsigned char) var_16);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                arr_26 [i_5] [2] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)15))));
                arr_27 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_6] [i_6]))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
    var_20 = ((/* implicit */signed char) var_0);
}
