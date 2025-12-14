/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185476
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
    var_12 = ((/* implicit */short) ((var_5) ? (var_9) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (var_10)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -4655194717654880122LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4655194717654880139LL)) || (((/* implicit */_Bool) -7005564059807408132LL)))))) : (-4655194717654880132LL))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63781)))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4655194717654880139LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)139)), (-7995330644761127450LL)))) ? (arr_2 [i_0]) : (((/* implicit */int) (signed char)11))))) : (4473053952421934796LL)));
        }
        var_15 = ((/* implicit */signed char) arr_3 [i_0] [i_0 - 3]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201)))))) ? (((/* implicit */unsigned long long int) (+(var_4)))) : (arr_4 [i_2]))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((unsigned long long int) arr_5 [i_2]))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_9 [i_3] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4655194717654880122LL)) == (arr_4 [i_3]))))) : (min((var_4), (((/* implicit */long long int) arr_8 [i_3])))))));
        var_18 = ((/* implicit */_Bool) ((4655194717654880122LL) - (((/* implicit */long long int) var_11))));
    }
}
