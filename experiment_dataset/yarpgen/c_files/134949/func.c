/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134949
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
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) * (((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (-2147483647 - 1)))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) ((signed char) var_5)))));
                    arr_8 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3121313603U)))))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0])))))));
                    arr_9 [i_2] [i_2] [i_2] [(unsigned short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_2])))) : (arr_0 [i_1])));
                }
            } 
        } 
        var_21 = ((/* implicit */short) ((signed char) ((var_11) <= (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))));
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
    }
    var_23 = ((/* implicit */unsigned short) (+(((var_0) - (((/* implicit */unsigned long long int) var_10))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                arr_15 [i_4] [i_4] = (!(((/* implicit */_Bool) ((var_1) ? (((arr_10 [i_3]) ? (3613692977U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-2147483647 - 1)) != (((/* implicit */int) (_Bool)1))))))))));
                var_24 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned char)2]))) != (arr_14 [i_4] [(_Bool)1]))) ? (max((((/* implicit */unsigned int) arr_12 [i_4])), (max((var_13), (((/* implicit */unsigned int) arr_11 [(_Bool)1] [i_4])))))) : (((((/* implicit */_Bool) var_6)) ? (arr_14 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_4])))))));
            }
        } 
    } 
}
