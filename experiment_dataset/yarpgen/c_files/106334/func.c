/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106334
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_20 &= ((/* implicit */unsigned char) (unsigned short)979);
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))) : (min((2147483647), (((/* implicit */int) (short)9933)))))) <= ((~(((/* implicit */int) arr_1 [i_2])))))))));
                    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (6U)));
                    var_23 += ((/* implicit */unsigned int) var_14);
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)49152);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)2048)) & (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))));
    var_25 = ((/* implicit */short) var_9);
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((int) var_12)), ((~(((/* implicit */int) var_0))))))) ? (((((/* implicit */int) (unsigned short)65511)) & (((/* implicit */int) (signed char)11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(2751255003050162644ULL)))))))));
}
