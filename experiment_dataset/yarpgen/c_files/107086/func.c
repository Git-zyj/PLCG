/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107086
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (84320641U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0]))))));
                var_19 = ((/* implicit */short) max((((/* implicit */int) arr_1 [i_1 + 3])), (((((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((/* implicit */int) arr_2 [i_0]))))) ? ((+(((/* implicit */int) arr_0 [i_1])))) : (arr_3 [i_1 + 3] [i_1 - 1])))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) 4174268894784662006LL);
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned long long int) var_11);
    var_21 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_22 ^= ((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_2])), (((arr_7 [i_3]) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))));
                var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((4210646654U), (((/* implicit */unsigned int) (unsigned short)65535)))))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((((/* implicit */int) ((_Bool) 33554431))) ^ ((~(((/* implicit */int) (unsigned short)65535)))))), ((-(((/* implicit */int) arr_2 [i_2])))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), (((var_8) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (4210646654U))) : (((/* implicit */unsigned int) var_11))))));
}
