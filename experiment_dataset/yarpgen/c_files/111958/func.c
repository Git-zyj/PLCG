/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111958
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
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (var_10)))))) ? (((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_5)))) : (-1)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_0 [i_1 - 2]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_4 [i_0] [i_1 - 2]))) | (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_1 - 1]))))) : (min((((/* implicit */long long int) (signed char)127)), (arr_1 [i_0 - 1])))));
                var_22 = ((/* implicit */int) arr_0 [(unsigned char)7]);
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-1)))) & (((int) var_2))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_17))))) ? (((/* implicit */long long int) -2147483647)) : (((var_15) & (((/* implicit */long long int) -16)))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 24; i_2 += 1) 
    {
        arr_10 [i_2 - 2] [i_2] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((arr_8 [i_2]), (((/* implicit */unsigned int) arr_7 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_9 [i_2])))) : (arr_8 [i_2]))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_7 [(signed char)6]))));
        arr_11 [i_2 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (((/* implicit */unsigned int) arr_9 [i_2 + 1])) : (arr_8 [i_2 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2]))))) : (((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (arr_9 [i_2 - 2]) : (arr_9 [i_2 + 1])))));
    }
    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(((/* implicit */int) var_17)))))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (max((arr_1 [i_3]), (((((/* implicit */_Bool) arr_13 [i_3] [i_3 + 1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : ((+(((((/* implicit */_Bool) -18)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 1] [i_3] [i_3 - 1])))))))));
        var_27 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3])) ? (arr_1 [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 1] [19LL] [i_3 + 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((-28LL), (((/* implicit */long long int) (unsigned char)128))))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_12 [i_3] [i_3])))));
        var_28 = ((/* implicit */unsigned char) arr_12 [i_3] [i_3]);
        arr_14 [i_3] = ((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1]);
    }
}
