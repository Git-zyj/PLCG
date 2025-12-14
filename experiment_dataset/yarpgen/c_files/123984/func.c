/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123984
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
    var_18 -= ((var_14) & (2571814131U));
    var_19 = ((((unsigned int) var_1)) + (var_12));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((unsigned int) 1723153159U)), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (4202269737U) : (arr_1 [i_0])))))))))));
        var_21 = ((((/* implicit */_Bool) 2571814136U)) ? (min((arr_0 [i_0]), ((+(arr_1 [5U]))))) : ((~(3848113253U))));
        var_22 = min((arr_2 [i_0] [i_0]), (((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(3919221215U))) : (min((3919221196U), (var_16))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_23 *= ((((/* implicit */_Bool) (~(2571814131U)))) ? (arr_1 [i_1]) : (arr_6 [i_1]));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1]))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_25 = ((((/* implicit */_Bool) (-(arr_2 [3U] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2571814136U)))))) : (var_4));
        var_26 |= arr_8 [i_2];
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                    var_28 = ((/* implicit */unsigned int) ((arr_13 [i_4] [i_3] [i_3] [i_2]) >= (((unsigned int) arr_13 [i_2] [i_3] [i_4] [i_3]))));
                    var_29 = ((((/* implicit */_Bool) arr_3 [i_4] [i_3])) ? (1723153164U) : (arr_3 [i_4] [i_3]));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), ((~(3758096384U)))));
            var_31 = (-(4294967284U));
            var_32 = 2571814122U;
        }
        var_33 = arr_1 [i_2];
    }
}
