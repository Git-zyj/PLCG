/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146944
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8062246793938352394LL)) ? (((2110562903865585409LL) / (2110562903865585413LL))) : (-2110562903865585413LL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) 9080875956105334511ULL);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) 2510598235U);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -274428051)) / (2110562903865585413LL)));
            var_15 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_6 [i_1]))))));
        }
        arr_9 [i_1] = ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
        {
            {
                arr_15 [i_3] [i_4 + 2] [i_4] = ((/* implicit */_Bool) (((~(arr_13 [i_3 + 2] [i_3]))) ^ ((~(arr_13 [i_3 + 2] [4U])))));
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (~(var_0)));
                            var_17 = var_1;
                            arr_21 [i_5] [i_3 + 2] [i_5] = ((/* implicit */unsigned long long int) (+(max((min((arr_5 [2] [i_4]), (((/* implicit */long long int) arr_19 [i_5] [i_3] [1LL] [i_3])))), (((/* implicit */long long int) (-(var_5))))))));
                            var_18 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) min((((/* implicit */int) arr_19 [i_5] [i_4] [i_5] [i_6])), (-274428051)))), ((-(-2110562903865585413LL)))))));
                            var_19 -= ((/* implicit */short) (~(max((((/* implicit */long long int) 4294967295U)), (-2110562903865585437LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 *= ((/* implicit */short) max((var_7), (((/* implicit */unsigned int) min(((~(274428051))), (((/* implicit */int) (unsigned char)66)))))));
}
