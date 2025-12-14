/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181737
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-19500)) ? (((/* implicit */long long int) (-(0U)))) : (((((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))))) % (arr_4 [i_0] [(_Bool)1])))));
                var_14 = ((/* implicit */_Bool) var_7);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) (~((~(((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_18 [i_4] [i_3 - 1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [5LL])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19500))))), (((/* implicit */unsigned int) arr_10 [i_3 + 1]))));
                                var_16 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) 4294967295U);
                }
            } 
        } 
    } 
}
