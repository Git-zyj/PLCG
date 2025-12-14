/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106994
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
    var_19 = ((/* implicit */signed char) min((min((((var_17) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))), (((((/* implicit */int) var_10)) + (((/* implicit */int) var_18)))))), (max((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_2))))), (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_11)) - (131)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_4 [i_0]), (((/* implicit */signed char) arr_1 [i_0] [i_0]))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1] [i_0] [i_0])), (arr_2 [i_0] [i_0])))) - (56180)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) min((arr_4 [i_0]), (arr_4 [i_0])))), (min((arr_5 [i_1] [i_0] [i_0]), (arr_5 [(unsigned char)0] [i_0] [i_0])))))) : (((max((arr_0 [9U] [i_0]), (arr_1 [i_0] [i_1]))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_5 [22] [i_0] [i_0]))))) : (((((/* implicit */int) arr_5 [i_1] [i_0] [(signed char)14])) ^ (((/* implicit */int) arr_2 [i_0] [i_0]))))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_4 [i_0]), (((/* implicit */signed char) arr_1 [i_0] [i_0]))))) >> (((((((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1] [i_0] [i_0])), (arr_2 [i_0] [i_0])))) - (56180))) + (42441)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) min((arr_4 [i_0]), (arr_4 [i_0])))), (min((arr_5 [i_1] [i_0] [i_0]), (arr_5 [(unsigned char)0] [i_0] [i_0])))))) : (((max((arr_0 [9U] [i_0]), (arr_1 [i_0] [i_1]))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_5 [22] [i_0] [i_0]))))) : (((((/* implicit */int) arr_5 [i_1] [i_0] [(signed char)14])) ^ (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)12)) ? (0U) : (0U)));
                var_21 = ((/* implicit */short) min((((signed char) ((arr_0 [i_0] [(signed char)7]) ? (((/* implicit */int) arr_1 [i_0] [1])) : (((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))))), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) arr_0 [(unsigned char)3] [i_0]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)99)), ((short)-21645)));
}
