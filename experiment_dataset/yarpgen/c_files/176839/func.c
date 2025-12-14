/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176839
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (unsigned char)57);
                var_20 = ((/* implicit */long long int) arr_0 [i_1 - 3]);
                var_21 = ((/* implicit */unsigned char) var_17);
            }
        } 
    } 
    var_22 &= ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned short) arr_8 [i_2]);
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8046)) ? (((((/* implicit */int) (unsigned char)198)) & (((/* implicit */int) (short)6635)))) : (((/* implicit */int) arr_8 [i_2]))));
                arr_12 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (137431079) : (((((/* implicit */_Bool) -8)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)55))))))));
                var_25 = ((/* implicit */signed char) var_17);
                arr_13 [i_2] [(short)9] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)221)) ? (17285985683861411957ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3192))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_3])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_2] [i_3])) ? (-22) : (var_8)))))) : ((~(7748680938526226563ULL))));
            }
        } 
    } 
}
