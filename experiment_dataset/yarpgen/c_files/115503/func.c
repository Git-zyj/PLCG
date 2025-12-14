/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115503
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (arr_3 [i_3 + 2]) : (arr_0 [i_3 - 2]))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_9 [i_3] [i_1] [i_1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1])) ? ((((!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))))))) : (((((/* implicit */_Bool) ((signed char) var_11))) ? (arr_1 [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_18 = ((/* implicit */signed char) arr_3 [i_0]);
                    }
                    arr_10 [i_1] [i_1] [1LL] = ((/* implicit */unsigned short) (+(arr_5 [i_0] [i_1])));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-77))))))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) - (arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (!(var_7)));
    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
}
