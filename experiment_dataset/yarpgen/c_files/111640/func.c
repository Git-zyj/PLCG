/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111640
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
    var_18 += (((~(((/* implicit */int) var_12)))) >> (((((((/* implicit */_Bool) (short)27255)) ? (8796093022207LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))) - (8796093022188LL))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), ((((-2147483647 - 1)) & (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))) ? (min((((8796093022207LL) + (-6040666287796650260LL))), (((/* implicit */long long int) arr_3 [i_0])))) : (max((((/* implicit */long long int) var_14)), (var_5)))));
                var_19 = ((/* implicit */int) ((_Bool) min((var_8), (arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8796093022201LL)) ? (arr_3 [i_2]) : (((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_9 [i_2]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_17))))));
        arr_10 [i_2] [i_2] = ((/* implicit */int) var_1);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [i_2] = ((/* implicit */_Bool) (+(((arr_2 [i_3]) ? (arr_12 [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_4] [i_3] [i_2]))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) var_10);
}
