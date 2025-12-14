/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114380
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
    var_11 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)27))));
                    arr_7 [i_0] [13U] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_2 - 2] [i_2 - 2] [i_0]))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [18U] [i_0])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (signed char)4))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [18U])) / (((/* implicit */int) arr_2 [i_2 - 2] [i_2] [i_0]))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (short)30272))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32768)) * (((/* implicit */int) (unsigned char)228))));
        var_17 |= ((/* implicit */int) (_Bool)0);
        var_18 = ((/* implicit */long long int) (+(((unsigned int) arr_1 [i_3]))));
    }
    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_19 = ((/* implicit */_Bool) (-(((long long int) ((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)27)))))));
        var_20 -= ((((/* implicit */_Bool) min((1662259238U), (((/* implicit */unsigned int) (unsigned short)32768))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_4])), (arr_3 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) : (arr_3 [i_4] [i_4] [i_4]))));
    }
    var_21 *= ((/* implicit */short) max((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))), (((/* implicit */unsigned long long int) ((3850737610U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)7289)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) var_3))))))));
    var_22 = ((/* implicit */short) var_7);
    var_23 = ((/* implicit */signed char) 9113093929143507519LL);
}
