/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109820
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
    var_18 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) var_4)) : (var_2)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 1]))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] = ((/* implicit */unsigned char) var_1);
                        var_19 = ((/* implicit */unsigned short) arr_6 [i_2] [i_2]);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            {
                var_20 += ((/* implicit */_Bool) 1136488287);
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 18446744073709551615ULL))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1136488288)) ? (((max((((/* implicit */long long int) (signed char)126)), (var_3))) - (((/* implicit */long long int) min((1136488289), (((/* implicit */int) var_15))))))) : (((/* implicit */long long int) var_12))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
