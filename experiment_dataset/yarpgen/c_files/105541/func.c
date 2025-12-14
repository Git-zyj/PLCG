/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105541
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
    var_10 = var_3;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_11 += ((/* implicit */unsigned short) max((((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))) : ((+(arr_1 [i_0] [i_0])))))));
        var_12 += ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) arr_1 [(signed char)7] [(signed char)7]))), (((((/* implicit */_Bool) 15538345727538494619ULL)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) arr_0 [(signed char)15]))))) : (2908398346171056997ULL))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))) + (((/* implicit */int) arr_2 [i_1])))))));
        var_14 = ((/* implicit */int) arr_2 [i_1]);
        arr_6 [i_1] = ((/* implicit */int) arr_0 [(unsigned char)18]);
        var_15 &= ((/* implicit */_Bool) max((arr_1 [i_1] [i_1]), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)-22072)))) >> (((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [(signed char)14] [(unsigned char)13])) : (((/* implicit */int) arr_0 [i_1])))) - (10706))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) ((unsigned char) ((_Bool) 15538345727538494626ULL)))) : (((/* implicit */int) arr_3 [(unsigned char)14]))));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_16 = arr_8 [i_2];
        var_17 = ((/* implicit */int) ((signed char) 15538345727538494619ULL));
    }
}
