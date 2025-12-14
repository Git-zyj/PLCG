/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117464
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
    var_11 = ((/* implicit */_Bool) var_3);
    var_12 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 -= ((/* implicit */unsigned long long int) arr_0 [(signed char)0]);
        var_14 *= ((/* implicit */unsigned short) arr_1 [6ULL] [2]);
        var_15 = ((/* implicit */unsigned short) -7LL);
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_16 *= ((((/* implicit */_Bool) arr_4 [12] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1 - 3] [2])))))) : (((/* implicit */int) arr_2 [18])));
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)153))));
        var_18 = ((/* implicit */int) min((var_18), (263764543)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2071479235)) >= (min((var_2), (((/* implicit */unsigned long long int) ((unsigned char) 836000977141013381ULL))))))))));
        var_20 ^= ((/* implicit */_Bool) arr_1 [i_2] [i_2]);
        var_21 = ((/* implicit */unsigned char) arr_2 [i_2]);
    }
}
