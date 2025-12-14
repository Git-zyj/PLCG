/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164784
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 992)) ? (1914128686) : (((/* implicit */int) (short)-29338))))))) ? (((min((((/* implicit */unsigned int) (short)4071)), (1294612213U))) + (((/* implicit */unsigned int) -1010)))) : (1794567271U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = min((((((/* implicit */_Bool) arr_4 [(signed char)20] [i_1 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1])))), (((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) - (((/* implicit */int) arr_4 [i_1] [i_1 + 1])))));
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [6U] [i_1 + 1])), (arr_3 [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1])) : (((/* implicit */int) var_17)))) : ((((_Bool)1) ? (((/* implicit */int) (short)2)) : (-1028101466)))));
                var_21 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) % (((/* implicit */int) (short)-7))))) + (((((/* implicit */unsigned int) -1521421642)) / (var_6))))) < (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_1]))))))))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-101)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned int) var_8))))) ? (var_8) : (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (_Bool)1)) : (var_4))))) - (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_15))))));
    var_24 = (-((-(((var_5) + (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        for (signed char i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            {
                var_25 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((min((var_11), (((/* implicit */unsigned int) (short)10007)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_9 [i_2] [5U]))))))))), (arr_8 [i_2 + 3])));
                arr_11 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) 4294967290U)) ? (((((/* implicit */_Bool) 8)) ? (3984744999U) : (((/* implicit */unsigned int) -521463949)))) : (((/* implicit */unsigned int) ((var_8) + (((/* implicit */int) min((((/* implicit */short) arr_7 [i_2 + 4] [10])), ((short)26985))))))));
            }
        } 
    } 
}
