/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183933
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [(_Bool)1] &= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_15)) % (-51177293)))));
        var_17 = ((((/* implicit */int) (!(arr_0 [i_0])))) > (((/* implicit */int) arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_3)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_13 [i_3])) + (((/* implicit */int) arr_13 [i_3])))) << (((/* implicit */int) (!(arr_14 [i_3] [i_2] [i_4] [i_2]))))));
                        arr_16 [i_1] [i_3] = (~((-(1172410223))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) var_16)) <= (arr_12 [i_1] [2U] [i_1] [(unsigned char)2])))));
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */unsigned char) (+(((51177293) >> (((/* implicit */int) arr_9 [(unsigned char)0] [i_1 + 1] [i_1]))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_0)))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_5]))) >= (((unsigned int) arr_18 [i_5] [i_5]))));
        arr_19 [i_5] [i_5] = ((/* implicit */_Bool) ((arr_18 [i_5] [i_5]) % (arr_18 [i_5] [i_5])));
        var_24 = ((/* implicit */_Bool) min((var_24), (var_1)));
    }
    var_25 = ((/* implicit */unsigned char) max((var_25), (var_15)));
}
