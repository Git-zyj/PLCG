/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141224
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
    var_10 -= ((/* implicit */int) min((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 &= ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
        var_12 ^= (!(((/* implicit */_Bool) (unsigned char)197)));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_7 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
            var_13 = ((/* implicit */unsigned char) (~(267911168U)));
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) arr_6 [i_1 + 1]))))));
        }
    }
    var_14 = ((/* implicit */short) var_4);
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_3))));
}
