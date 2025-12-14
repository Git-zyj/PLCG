/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172118
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
    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0] [i_1])) & (((/* implicit */int) arr_3 [i_0] [i_1])))) < (((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) (signed char)0))))))))) >= ((~((~(arr_2 [4ULL])))))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-12)) ? (871085793199862839LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)11)))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1])) ? (arr_2 [i_0]) : (arr_5 [i_0] [i_1] [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-5))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_0] [i_1] [i_1])))))) ? (((/* implicit */int) arr_0 [4] [i_1])) : (((/* implicit */int) ((((((/* implicit */_Bool) 870720933)) || (((/* implicit */_Bool) (signed char)-12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))))))));
                arr_9 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12)))))) + (((((arr_5 [i_0] [i_1] [i_0]) % (arr_5 [i_0] [i_0] [i_0]))) % (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_5 [i_0] [8] [i_0 - 1]))))));
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (((-(arr_2 [i_1]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned char)8] [2U])) && (((/* implicit */_Bool) arr_1 [i_0])))))))))));
            }
        } 
    } 
}
