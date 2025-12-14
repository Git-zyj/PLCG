/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189127
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
    var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (var_15))))) : (max((var_2), (((/* implicit */unsigned int) var_16)))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))), (((var_6) >> (((var_4) - (1582700064U)))))))));
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
    var_21 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)165))))) ? (max((var_0), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_4 [11LL] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((_Bool) var_13))), (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4995))) : (var_0))))), (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) / (((/* implicit */int) arr_3 [i_0])))) * (((((/* implicit */int) var_11)) / (((/* implicit */int) arr_3 [i_0])))))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [i_0]))))) && (((_Bool) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_8 [i_1] [i_1]) < (arr_8 [i_1] [i_1]))))));
        var_23 = ((/* implicit */unsigned int) (signed char)15);
        arr_10 [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_1]) / (arr_7 [i_1] [i_1])))) && (((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1] [i_1])))));
        arr_11 [i_1] = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        arr_14 [(_Bool)1] = ((/* implicit */short) (~(((/* implicit */int) ((short) var_18)))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_12 [i_2]) ? (((/* implicit */int) arr_12 [i_2])) : (arr_13 [i_2])))) <= (((((((/* implicit */_Bool) arr_8 [i_2] [i_2])) || (((/* implicit */_Bool) var_4)))) ? (((9051802392812990104ULL) * (((/* implicit */unsigned long long int) arr_13 [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (var_7) : (((/* implicit */int) arr_3 [i_2]))))))))))));
        var_25 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_13 [i_2])), (var_2)));
    }
}
