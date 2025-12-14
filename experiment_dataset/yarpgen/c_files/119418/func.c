/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119418
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) / (arr_2 [4U] [i_1 - 1] [i_1 - 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)16382)) ? (((/* implicit */int) (_Bool)1)) : (2147483617)));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_1 [i_0]))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [7] = ((/* implicit */short) (+(((((/* implicit */_Bool) 15745314243309218021ULL)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)7))))));
                            arr_11 [i_3] [5] [i_1 - 3] [i_0] |= ((/* implicit */int) ((signed char) min((max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((unsigned long long int) (_Bool)1)))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_0] [i_1 - 4] [i_1 - 1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
}
