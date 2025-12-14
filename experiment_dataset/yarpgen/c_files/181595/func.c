/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181595
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
    var_11 = ((int) max((var_9), (((/* implicit */unsigned int) ((unsigned short) 624690904U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((((/* implicit */int) arr_2 [i_0 - 1])) != (((/* implicit */int) arr_2 [i_0 - 2])))), (arr_5 [i_1] [i_1] [2U]))))));
                arr_6 [(unsigned short)0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned char) (unsigned char)133))) ^ (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) + (((/* implicit */int) var_10)))))) >> (((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned char)141))))) & (max((var_5), (((/* implicit */unsigned int) arr_0 [i_0])))))) - (117U)))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : (min((arr_3 [i_0 - 1] [i_0 - 1]), (arr_3 [i_0 - 2] [i_0 - 2])))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0 - 2])) : (((/* implicit */int) (unsigned char)147))))) ? (((/* implicit */int) var_10)) : (max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_4))))), (var_7))))))));
            }
        } 
    } 
}
