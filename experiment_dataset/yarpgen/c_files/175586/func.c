/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175586
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
    var_14 += ((/* implicit */unsigned short) ((var_11) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (var_11)))));
    var_15 = var_8;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((4611686018427387903LL), (((/* implicit */long long int) var_10)))) << (((min((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_0] [i_1] [i_0]))) - (6473367311276662677LL))))))));
                arr_5 [i_0] [i_0] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (((5792090424110784344LL) & (arr_0 [i_0]))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)4])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1LL)))) ? (arr_3 [i_1] [i_0] [13U]) : (arr_3 [i_1] [i_0] [i_0]))) - (6504076134212336337LL)))))) : (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (((5792090424110784344LL) & (arr_0 [i_0]))))) + (9223372036854775807LL))) >> (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)4])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1LL)))) ? (arr_3 [i_1] [i_0] [13U]) : (arr_3 [i_1] [i_0] [i_0]))) - (6504076134212336337LL))) + (5327389002106479773LL))))));
            }
        } 
    } 
}
