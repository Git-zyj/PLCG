/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155807
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_4 [15U] = arr_2 [i_0 + 3];
        arr_5 [8U] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (arr_2 [12U]) : (var_12)))))) ? (max((3284554744U), (2907666341U))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (var_13))));
        var_19 = 4294967295U;
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_20 = ((unsigned int) ((((/* implicit */_Bool) (~(arr_6 [i_1 + 1] [9U])))) ? (((((/* implicit */_Bool) 2194193201U)) ? (62U) : (1728467260U))) : (var_10)));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) 358941526U))) ? (((unsigned int) var_8)) : (var_2))) < (max((((unsigned int) arr_12 [14U] [2U] [i_3])), (((unsigned int) arr_11 [4U] [12U] [19U] [i_1 - 1]))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), ((+(arr_8 [9U] [5U])))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((unsigned int) 2566500036U))));
                }
            } 
        } 
    }
    var_24 = var_11;
    var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_7) < (var_18))))));
    var_26 = ((unsigned int) var_6);
    var_27 = ((unsigned int) ((((/* implicit */_Bool) max((var_14), (var_6)))) ? (3284554748U) : (1728467259U)));
}
