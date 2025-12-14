/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17720
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)41)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1884049391)) <= (arr_1 [i_1] [i_0]))))) : (max((max((((/* implicit */unsigned long long int) var_3)), (var_10))), (((/* implicit */unsigned long long int) ((signed char) var_6)))))));
            var_11 = min((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_7))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (arr_1 [i_1 - 2] [i_1 - 2]))));
            var_12 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((arr_1 [i_0] [i_0]) < (12336631372817535716ULL))))), (((int) max((((/* implicit */long long int) (_Bool)1)), (var_8))))));
            var_13 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)48)), (arr_3 [i_1 - 1])))) == (((/* implicit */int) ((signed char) var_7))))));
            var_14 -= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned char)62))));
        }
        arr_5 [i_0] = ((/* implicit */signed char) arr_2 [4ULL]);
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(18446744073709551610ULL))))));
        var_16 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(-3471144050855566271LL)))))) ? (arr_7 [i_2]) : (min((((((/* implicit */_Bool) var_1)) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) arr_6 [i_2])))), (((/* implicit */unsigned long long int) ((unsigned char) var_6)))))));
        arr_8 [i_2] = ((/* implicit */signed char) ((unsigned long long int) arr_6 [i_2]));
    }
    var_17 ^= ((/* implicit */_Bool) (((~(max((9223372036854775802LL), (((/* implicit */long long int) var_3)))))) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) 130023424)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (3990512125660614772ULL)))))));
}
