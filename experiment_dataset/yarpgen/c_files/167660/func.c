/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167660
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | ((~(((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) ((var_7) != (((/* implicit */int) arr_1 [i_0] [i_1]))))) : (((/* implicit */int) arr_5 [i_0]))))) ? ((-(-1755936009))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_1]) % (((/* implicit */unsigned int) (-2147483647 - 1)))))))))));
                arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1755936001) : ((-2147483647 - 1))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_1] [i_1])), (arr_4 [i_0 + 1])))) ? (min((((/* implicit */long long int) arr_4 [i_0 + 2])), (-4873100828377764513LL))) : (((/* implicit */long long int) ((arr_0 [i_0 - 1]) ^ ((~(arr_4 [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_15 = ((long long int) min((var_11), (((/* implicit */unsigned long long int) var_6))));
                arr_15 [i_3] [i_3] = ((/* implicit */int) ((unsigned char) min((((/* implicit */int) ((155551645853950624LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_3] [21U])) : (arr_14 [i_3]))))));
                var_16 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_2 [i_3])))) | (((/* implicit */int) arr_2 [i_3]))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_3);
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (_Bool)0)))));
    var_19 = ((_Bool) (~(var_7)));
}
