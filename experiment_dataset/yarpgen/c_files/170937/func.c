/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170937
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((2219284518U) & (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0])))) - (71600166U)))))) : (((/* implicit */short) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((2219284518U) & (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0])))) - (71600166U))) - (2147481594U))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0]);
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned short) (~(15447690002032952157ULL)));
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_0 + 2]))));
    }
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_4))));
    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(var_5)))) ? (min((var_13), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4)))))));
    var_17 = ((/* implicit */short) var_12);
}
