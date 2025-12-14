/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17673
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
    var_20 = ((/* implicit */long long int) (+(var_12)));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (short)8160))));
    var_22 = ((/* implicit */_Bool) var_18);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (max((((/* implicit */unsigned int) 917504)), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)2119)) > (((/* implicit */int) arr_2 [i_0 + 1])))))))), (((/* implicit */unsigned int) min(((unsigned short)61377), (((/* implicit */unsigned short) (short)256)))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (!(var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))) : (((((/* implicit */_Bool) (-(9223372036854775799LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_3)))))) : (min((((/* implicit */unsigned int) arr_2 [i_0 + 1])), (var_12)))))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_1 [(short)14]))));
        var_24 = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) (!(((((/* implicit */_Bool) var_8)) || (var_3))))))));
    }
    for (short i_1 = 2; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_5))))))) : (min((max((var_12), (((/* implicit */unsigned int) arr_2 [i_1 - 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 536870911U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_1])))))))));
        var_25 = max((min((((/* implicit */unsigned long long int) var_14)), (min((arr_8 [i_1 - 2]), (((/* implicit */unsigned long long int) arr_1 [(_Bool)1])))))), (((/* implicit */unsigned long long int) (-(arr_0 [i_1 - 1])))));
    }
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        var_26 = (-(((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) var_1)))));
        arr_14 [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) ((var_17) << ((((~(max((((/* implicit */long long int) arr_10 [i_2])), (arr_13 [i_2]))))) + (3999589076944161413LL)))))) : (((/* implicit */unsigned short) ((var_17) << ((((((~(max((((/* implicit */long long int) arr_10 [i_2])), (arr_13 [i_2]))))) + (3999589076944161413LL))) - (3999589076944131908LL))))));
        var_27 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) ^ (2305843009213693952ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (7453776602645779202LL))))));
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_1)), (var_7)))))) ? (var_11) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_19) : (var_19)))) ? (var_12) : (((/* implicit */unsigned int) var_19))))));
}
