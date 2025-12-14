/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128704
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
    var_12 |= ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
                {
                    var_13 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_8)))) * (((/* implicit */int) min((arr_6 [i_1 - 1] [i_0 + 1]), (arr_6 [i_1 - 1] [i_0 - 1]))))));
                    var_14 = ((/* implicit */unsigned short) var_7);
                    var_15 = ((/* implicit */int) min(((_Bool)0), ((((+(((/* implicit */int) (unsigned short)65535)))) <= (((/* implicit */int) (short)-31405))))));
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                {
                    arr_10 [i_0 - 1] [i_0] [(unsigned short)11] = ((/* implicit */_Bool) var_1);
                    var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [8])) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_1])) : (var_6)))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) arr_5 [i_1 - 1] [i_3] [i_1 - 1] [i_0])))))));
                }
                arr_11 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 + 1])), (arr_2 [i_1 - 1] [i_0 - 1])))) && (((/* implicit */_Bool) (~(arr_1 [i_0 + 1]))))));
                var_17 -= ((/* implicit */_Bool) var_8);
            }
        } 
    } 
    var_18 += max((-2147483642), (((/* implicit */int) (short)32767)));
    var_19 = ((/* implicit */_Bool) var_9);
}
