/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154774
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
    var_16 = ((/* implicit */short) (+(min((((/* implicit */long long int) ((var_6) ? (-691162426) : (-691162426)))), (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) var_8))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)96))));
                    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_6 [i_2] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0] [i_1])))) : (((((/* implicit */_Bool) 3648114800144592242LL)) ? (((/* implicit */long long int) 691162425)) : (arr_6 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_9 [i_3] [i_3]))));
                arr_14 [i_3] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) 691162428))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)37380)) ? (691162434) : (arr_10 [i_3]))))))));
            }
        } 
    } 
}
