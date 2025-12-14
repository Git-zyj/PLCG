/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162485
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned char)10])) != (((/* implicit */int) var_7))))) >> (((((-6441440522993217811LL) | (6441440522993217811LL))) + (26LL)))));
        arr_3 [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (arr_1 [i_0] [i_0])))) << (((((((arr_1 [i_0] [(_Bool)1]) + (2147483647))) << (((((-6441440522993217811LL) + (6441440522993217842LL))) - (31LL))))) - (1124283478)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (var_9))))) | (((var_3) + (((/* implicit */unsigned long long int) var_16))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_9) > (((/* implicit */long long int) arr_5 [i_1]))))) - (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_3)))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) var_5)) == (arr_5 [i_1])))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)28263)))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) >= (arr_1 [i_1] [i_1]))))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_0 [4LL]))) % (-107911601037416395LL)))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -107911601037416395LL)) == (var_12)))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) != (-20LL))))));
        var_19 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_1 [i_1] [i_1]) * (((/* implicit */int) var_4))))) % (((((/* implicit */long long int) arr_5 [i_1])) | (6441440522993217810LL)))));
    }
    var_20 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((107911601037416398LL) - (((/* implicit */long long int) -790277052))))), (max((((/* implicit */unsigned long long int) var_1)), (var_3))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_15)) - (36370)))))), (((1004808823479084989ULL) >> (((var_12) - (11514983395561255130ULL)))))))));
}
