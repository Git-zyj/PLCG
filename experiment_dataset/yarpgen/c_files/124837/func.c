/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124837
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 &= ((/* implicit */unsigned int) min(((-(((/* implicit */int) (!(var_10)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
        arr_3 [8ULL] &= max((((/* implicit */int) min((((/* implicit */short) var_10)), (var_0)))), ((~(((/* implicit */int) var_7)))));
    }
    var_17 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) var_3);
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))))));
            var_20 = var_14;
        }
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) var_15);
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_8))));
            arr_11 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_15)) || (var_7))) && (((/* implicit */_Bool) var_11))));
            var_23 = (+(var_14));
        }
        for (int i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((~(var_2))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
            var_24 = ((/* implicit */short) ((((/* implicit */int) var_13)) & ((~(((/* implicit */int) var_8))))));
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_3)))))));
        }
        arr_16 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(2147483644ULL))))));
    }
}
