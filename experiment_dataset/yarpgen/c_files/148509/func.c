/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148509
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) 4163160751U))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) var_3)))) | (((((((/* implicit */int) ((signed char) arr_3 [10]))) + (2147483647))) << (((((/* implicit */int) arr_7 [i_0] [(short)5] [(short)5])) - (113)))))));
                    arr_10 [i_2] [i_0] [i_2 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 3])))))));
                    var_10 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (-2147483625)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27328)) ? (arr_1 [i_0]) : (((/* implicit */int) var_0)))))))) : ((~(((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) << (((((((/* implicit */int) arr_0 [i_2])) + (25350))) - (22)))))))));
                    arr_11 [i_0] [i_1] [i_2 + 1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (131806568U) : (131806545U)))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4163160751U))))))) : (((/* implicit */int) ((_Bool) (signed char)-1))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) var_8);
    var_12 = ((/* implicit */signed char) var_2);
}
