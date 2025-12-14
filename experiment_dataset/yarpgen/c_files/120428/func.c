/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120428
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
    var_14 = var_1;
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_15 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (1867736522U) : (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20180))))))));
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned short) var_1))) ? (arr_3 [i_1]) : (((arr_3 [i_0 + 1]) - (((/* implicit */unsigned long long int) var_5)))))))))));
        }
        var_17 &= ((/* implicit */long long int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32305))) >= (arr_0 [(short)9] [i_0]))) ? (arr_2 [i_0] [i_0] [i_0]) : (min((var_0), (131072U))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15512))) <= (arr_0 [i_0] [i_0]))) ? (max((((/* implicit */unsigned int) var_7)), (var_2))) : (var_12)))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [i_2])), (arr_5 [i_2])))) : (((((/* implicit */_Bool) (short)20159)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20180)))))))) ? (((((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned int) 1072693248))))) ? (arr_5 [i_2]) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18939))) : (arr_5 [i_2]))))) : (max((arr_5 [i_2]), (arr_5 [i_2])))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    arr_14 [2LL] [i_3] [i_2] = ((/* implicit */short) (+(arr_5 [i_2])));
                    arr_15 [4] [i_3] = var_11;
                    arr_16 [i_4] |= ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (((((/* implicit */_Bool) 1072693256)) ? (arr_6 [i_3 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37567)))))))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_11))));
                }
            } 
        } 
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_11 [i_2] [(short)1]))))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2])))));
        var_20 = ((/* implicit */short) ((unsigned int) (+(max((((/* implicit */unsigned int) arr_10 [i_2] [i_2] [i_2])), (var_2))))));
        arr_17 [(short)10] [1U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((unsigned int) arr_11 [(short)13] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) arr_13 [i_2] [(short)1] [i_2])) ? (((((/* implicit */_Bool) (unsigned short)37567)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [(short)8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    }
}
