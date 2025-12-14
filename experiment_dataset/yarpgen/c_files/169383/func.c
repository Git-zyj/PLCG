/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169383
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_14 = (~(2191376524U));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_15 = ((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */unsigned int) (+(1579760551))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (arr_6 [i_1] [i_1] [i_0]) : (2768105977U)));
            var_16 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) var_5)));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((arr_4 [i_0]) - (var_12))))));
            arr_9 [24ULL] [24ULL] [i_1] |= (unsigned char)49;
        }
        var_18 = ((/* implicit */unsigned long long int) (-(((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((((unsigned char) ((unsigned long long int) 1659169520))), (((/* implicit */unsigned char) arr_11 [i_2]))));
        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((((/* implicit */_Bool) var_1)) ? (4435172457382387862ULL) : (((/* implicit */unsigned long long int) (+(0LL)))))) : (((unsigned long long int) arr_3 [i_2]))));
        var_21 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
    }
    var_22 = ((/* implicit */int) var_7);
    var_23 = ((/* implicit */signed char) var_2);
    var_24 = ((/* implicit */long long int) var_6);
    var_25 *= ((/* implicit */unsigned int) ((unsigned long long int) ((int) ((signed char) var_8))));
}
