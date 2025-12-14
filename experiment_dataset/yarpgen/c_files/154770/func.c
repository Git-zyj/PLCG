/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154770
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 += ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (arr_1 [i_0] [i_0])))) + (arr_2 [i_0] [i_0]))), (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))));
        var_16 ^= ((/* implicit */long long int) max((arr_2 [i_0] [i_0]), (((arr_2 [3] [i_0]) ^ (((/* implicit */int) arr_0 [i_0]))))));
        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (min((((arr_0 [(unsigned short)12]) ? (-2271425644594626395LL) : (-2271425644594626386LL))), (((/* implicit */long long int) ((unsigned int) (short)-19232))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (var_6)))) ? (min((arr_2 [13LL] [i_0]), (arr_2 [i_0] [i_0]))) : (((/* implicit */int) var_1))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) max((arr_5 [i_1]), (((/* implicit */short) (_Bool)0))))) - ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_4)))))) + (((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_4)))) + ((-(((/* implicit */int) (short)29))))))));
        var_20 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) -2271425644594626395LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22))) : (-7645735939148668965LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 2]))) - (arr_3 [i_1 - 1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (((+((-(((/* implicit */int) (short)-22)))))) - (((/* implicit */int) arr_5 [i_1]))));
    }
    var_21 = ((/* implicit */unsigned short) ((int) (short)-30));
    var_22 = ((/* implicit */short) ((((max((-3557907284034112802LL), (((/* implicit */long long int) var_12)))) + (((((/* implicit */_Bool) (short)33)) ? (2271425644594626394LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
}
