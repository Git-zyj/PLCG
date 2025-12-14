/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174388
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
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))) == (arr_0 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (0LL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-20678))))) : (((unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))))))))));
        var_16 = ((/* implicit */_Bool) arr_2 [i_0 + 2]);
        arr_3 [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)115)) == (var_1))))))) ? (((/* implicit */int) arr_2 [16ULL])) : (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 1]))))));
        arr_4 [i_0] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 2]))))) ? ((+(((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) arr_1 [i_0])) : (1742900000))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 + 1]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (arr_0 [i_0 - 2])))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) & (2564433935U)))))) : (((unsigned long long int) arr_2 [i_0]))));
    }
    var_17 += ((/* implicit */unsigned long long int) var_12);
}
