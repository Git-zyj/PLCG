/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118320
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
    var_18 = ((((((((/* implicit */_Bool) 3640805317577209740LL)) ? (-3640805317577209763LL) : (-3640805317577209752LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) -1774308378)) ? (((/* implicit */int) (short)-4327)) : (2110101322)))))) + (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_2)))))))));
    var_19 = ((/* implicit */unsigned int) max((((int) (signed char)124)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2106839899)) ? (1068399464U) : (2196044497U)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_17)))))))));
    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (var_15)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((arr_1 [i_0] [i_0]), (arr_4 [7LL]))) << (((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_1 [i_1] [i_1]) : (arr_4 [2U]))) - (1232590016)))))) ? ((+(((long long int) (signed char)1)))) : (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (max((arr_2 [13U]), (((/* implicit */long long int) arr_1 [i_0] [i_1])))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 1326934256)) ^ (2196044497U))))))));
                arr_8 [i_0] = ((/* implicit */short) (((~(((/* implicit */int) arr_0 [i_0 + 2])))) > (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 1])) ? (arr_3 [i_0 + 2]) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))) ? (arr_6 [i_0 + 1] [i_0 + 2]) : (arr_6 [i_0 - 1] [i_0 + 2]))) * (((/* implicit */long long int) (-(((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */long long int) arr_4 [i_0]))))))))));
                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)40915)) / (-1616218519)));
                arr_9 [15LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)25777)) ? (13U) : (((/* implicit */unsigned int) -1380075700))));
            }
        } 
    } 
}
