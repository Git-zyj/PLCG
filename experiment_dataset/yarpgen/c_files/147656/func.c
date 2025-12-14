/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147656
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
    var_20 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_21 -= ((/* implicit */_Bool) var_11);
            var_22 = ((/* implicit */int) (unsigned short)31);
            arr_4 [i_0] [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2097151)) ? ((-(((/* implicit */int) arr_3 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))));
        }
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2 - 1])) / (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)31377))))));
            var_24 = ((/* implicit */_Bool) max((var_24), ((_Bool)1)));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            for (unsigned char i_4 = 3; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_14 [i_3] [i_3] [i_3] = (!(((/* implicit */_Bool) (unsigned char)226)));
                    var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_4 + 1] [i_3 - 1]))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (unsigned char)17);
        var_27 = ((/* implicit */unsigned char) arr_8 [i_0]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_28 ^= ((/* implicit */int) arr_15 [i_5]);
        var_29 += (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34159)))))))));
        var_30 += ((/* implicit */unsigned char) (+((+(min((((/* implicit */unsigned long long int) arr_15 [i_5])), (3ULL)))))));
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        var_31 = (~((+(((/* implicit */int) arr_18 [i_6])))));
        arr_19 [i_6] = ((/* implicit */long long int) (unsigned short)52668);
        var_32 -= ((/* implicit */unsigned char) var_16);
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) arr_16 [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_17), (((/* implicit */signed char) arr_15 [i_6])))))) : ((-(1001627911U)))));
    }
    var_34 = ((/* implicit */int) var_6);
    var_35 = min((((/* implicit */int) var_18)), (var_4));
}
