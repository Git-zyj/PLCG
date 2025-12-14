/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113099
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (arr_2 [i_0])))));
        var_16 = ((/* implicit */long long int) max((((max((var_10), (((/* implicit */unsigned long long int) var_9)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [(short)18]))))), (arr_2 [i_0]))), (max((((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) arr_1 [i_0])))))))));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_4)), (var_10))) <= (max((((/* implicit */unsigned long long int) (~(arr_3 [12] [12])))), (max((var_10), (arr_4 [20LL]))))))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) (-(((arr_8 [i_1] [i_1 + 1] [i_2] [i_3]) >> (((var_5) - (8444514806576589653ULL)))))));
                    var_20 = ((/* implicit */short) var_6);
                    var_21 = min((((/* implicit */long long int) arr_9 [i_1 + 1] [i_2] [i_3] [i_3])), (var_3));
                }
            } 
        } 
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((min((480), (1937609729))), (((/* implicit */int) max((var_14), (var_0))))))), ((~(arr_3 [i_1 + 1] [i_1])))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(max((arr_4 [12LL]), (arr_4 [18]))))))));
    }
    var_23 = ((((/* implicit */_Bool) 1937609729)) ? (max((((/* implicit */unsigned long long int) -1937609730)), (var_11))) : (min((max((4498038781242481923ULL), (((/* implicit */unsigned long long int) -1937609730)))), (var_8))));
}
