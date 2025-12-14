/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178110
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0)));
    var_16 -= ((/* implicit */signed char) var_11);
    var_17 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_13))))) && (((var_10) == (((/* implicit */int) var_8))))))) > (var_5)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~((~(((/* implicit */int) var_13)))))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((var_2) <= (((/* implicit */long long int) var_10))))));
            var_20 = (((!(((/* implicit */_Bool) -273495311)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (273495316)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (var_2)))));
        }
        var_22 = ((/* implicit */signed char) var_10);
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_1 [0] [16U]);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_8 [i_2] = var_1;
        var_23 = ((/* implicit */int) var_6);
        var_24 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_8)) > (var_11))));
        var_25 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */int) var_13))))) >= (((unsigned long long int) var_3)));
    }
}
