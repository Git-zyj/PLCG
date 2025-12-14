/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133925
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) var_11)))))));
                        var_20 = var_2;
                        var_21 |= ((/* implicit */unsigned char) arr_4 [i_0] [i_3 - 1]);
                        var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2 + 1] [(short)6] [(unsigned short)11] [i_2])) ? ((~(var_13))) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2 - 1] [(signed char)10])))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))));
                        arr_11 [i_0] [i_3] [i_2] [i_2] [i_2] = 1093980945;
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_15 [i_2] [i_0] [i_2] = ((/* implicit */short) ((unsigned long long int) ((1093980945) + (((/* implicit */int) var_7)))));
                        var_23 = (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                        var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)13565)))))));
                        var_25 = min((min(((+(((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))), (((int) var_8)))), (max((((((/* implicit */_Bool) arr_6 [i_1] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (var_16))))));
                        var_26 = ((/* implicit */long long int) var_17);
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_4);
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */int) (signed char)31))))))));
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */unsigned long long int) ((long long int) var_6))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)7)), (max((var_9), (((/* implicit */unsigned short) var_5)))))))) : (var_12)));
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) arr_22 [i_7] [i_7] [i_6 + 1] [i_5])), (((((/* implicit */_Bool) arr_21 [(_Bool)0] [(_Bool)1] [i_7] [i_7])) ? (((/* implicit */int) var_3)) : (var_16))))));
                    var_31 |= max((min((((((/* implicit */_Bool) 4093989649854099975LL)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (signed char)7)))), (((arr_16 [i_7]) ^ (((/* implicit */int) var_4)))))), (((/* implicit */int) ((_Bool) ((arr_17 [i_7]) ? (((/* implicit */int) var_7)) : (var_16))))));
                    var_32 = ((/* implicit */int) max((var_32), ((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
