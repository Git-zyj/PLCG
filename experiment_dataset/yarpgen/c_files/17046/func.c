/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17046
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13205008523071875119ULL)) ? (((/* implicit */long long int) ((min((((/* implicit */unsigned int) (short)4088)), (var_2))) >> (((min((arr_1 [i_4]), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))) + (25LL)))))) : (min((arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0 + 2] [i_1 - 2]), (((/* implicit */long long int) ((-2147483638) + (arr_5 [i_0]))))))));
                                var_17 *= ((/* implicit */unsigned int) arr_2 [i_0]);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) max((2147483641), ((+((-(-2147483642)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_8)))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_9))));
}
