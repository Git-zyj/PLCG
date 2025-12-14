/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123243
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */signed char) max(((-9223372036854775807LL - 1LL)), (((((/* implicit */_Bool) (+(arr_1 [i_1])))) ? (((/* implicit */long long int) 4284749017U)) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) 3172585732U)) : (9223372036854775790LL)))))));
                var_11 = ((/* implicit */int) max((max((((arr_3 [i_1] [i_0]) ? (var_0) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((var_3) >= (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_4)))) <= (min((((/* implicit */long long int) var_5)), (var_0))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_2] [i_3] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3 - 1]))) - (9223372036854775794LL)));
            arr_11 [i_2] [i_3] = ((/* implicit */_Bool) ((int) (_Bool)1));
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [(unsigned short)4] [i_3 - 1])) <= (((/* implicit */int) arr_8 [(unsigned short)0])))))));
            arr_12 [i_3] [i_3] [i_3 - 1] = ((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_3]);
        }
        arr_13 [i_2] [i_2] = ((/* implicit */signed char) arr_8 [12LL]);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (~(((/* implicit */int) var_2)))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (var_4)));
                    arr_21 [i_5] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108864U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(var_8))))));
                    arr_22 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 4294967295U))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((_Bool) arr_25 [i_2] [i_6 + 3] [i_7] [i_2]));
                    arr_27 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_6 + 4] [i_7] [i_6 - 3]))));
                }
            } 
        } 
    }
}
