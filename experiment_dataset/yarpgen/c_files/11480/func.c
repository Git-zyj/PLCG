/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11480
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
    var_11 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_0)) / (((((/* implicit */int) var_10)) - (((/* implicit */int) var_8)))))), (((/* implicit */int) (short)398))));
    var_12 = ((/* implicit */unsigned char) 849361960U);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) 3045661825U)) ^ (var_4)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((unsigned char)120), (((/* implicit */unsigned char) var_9)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 *= ((/* implicit */signed char) (unsigned char)139);
                    arr_10 [i_0] [(unsigned char)0] [(unsigned char)11] = var_5;
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] |= ((/* implicit */int) ((min((min((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)120)))), (((/* implicit */long long int) (-(var_1)))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_5 [i_3]) : (((/* implicit */int) max((var_3), (arr_1 [i_2] [i_0])))))))));
                        var_15 *= ((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)63)) + (((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 3]))))));
                    }
                    var_16 -= ((/* implicit */short) (!(((((/* implicit */_Bool) 4277379158U)) && (((/* implicit */_Bool) var_10))))));
                }
            } 
        } 
    } 
}
