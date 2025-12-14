/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106414
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)97)) - (((/* implicit */int) (unsigned char)164))))));
        var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 0U)) ? (4946457504189187961ULL) : (1ULL))))) <= (arr_1 [i_0] [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)28769)), (-1755285029)))) * (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (short)15807))))) | (((var_10) & (((/* implicit */unsigned int) -812121457))))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            arr_8 [i_1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (short)-28770))));
            var_19 = ((/* implicit */short) var_13);
            arr_9 [i_1] = ((/* implicit */short) ((((((/* implicit */int) ((short) 1755285016))) + (2147483647))) >> (((var_9) + (8014461350782990797LL)))));
        }
        for (short i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23935))) : (678021395524682232ULL)))));
            arr_12 [i_1] = ((/* implicit */short) ((unsigned short) arr_10 [i_3] [i_3] [i_1]));
        }
    }
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-23874)) : (((/* implicit */int) var_3)))))))))));
}
