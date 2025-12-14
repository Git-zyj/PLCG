/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167716
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
    for (signed char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = (-((+(((/* implicit */int) (unsigned char)40)))));
                    var_17 = (+((-(((/* implicit */int) arr_0 [i_0])))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_7 [i_3 - 1] [i_1 + 1] [i_2] [i_3]))))));
                        arr_10 [i_0] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_8))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_8 [i_1] [i_1 + 2] [i_1 + 2])) - (((/* implicit */int) (unsigned char)238))))));
                        var_19 = ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) (short)22284)) <= (((/* implicit */int) (_Bool)1)))))))) % (((((/* implicit */long long int) (-(var_7)))) | (((-3866780474840330736LL) & (arr_1 [i_0]))))));
                        arr_14 [5LL] [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)4)) <= (((/* implicit */int) arr_7 [i_0 + 1] [i_1 - 1] [i_0] [i_2]))))));
                        arr_15 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)5))));
                        var_20 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [3] [i_1] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2))));
                        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >= (((arr_6 [i_2] [i_2]) / (((/* implicit */int) arr_12 [i_0] [i_1] [i_5 + 4]))))));
                        var_23 *= ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0 + 2] [i_1 + 1])) <= (((/* implicit */int) arr_17 [i_0 - 1] [i_0]))));
                        var_24 ^= ((/* implicit */unsigned short) (~(arr_4 [i_1] [i_5 + 4] [i_5 + 4])));
                        arr_18 [i_0] [i_1] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-5013)) & (((/* implicit */int) (short)-5013)))) <= (((((/* implicit */int) (unsigned char)251)) >> (((/* implicit */int) var_0))))));
                    var_26 *= ((/* implicit */signed char) (((~(var_5))) + (((/* implicit */int) ((((/* implicit */unsigned int) arr_20 [i_7])) >= (var_7))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (!(var_0))))));
    var_28 = ((/* implicit */signed char) var_1);
}
