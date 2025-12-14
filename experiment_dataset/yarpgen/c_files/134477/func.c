/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134477
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_11))));
    var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) (unsigned char)58))))) ? (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (short)14468))))) : (9223372036854775807LL)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) max((((unsigned long long int) max((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) (+(var_12))))));
                    var_18 &= ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (unsigned short)6576)))), (var_1)));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_0]))) : (((-9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) (short)29098))))))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (+((-(arr_6 [i_0] [i_0 - 1] [i_0])))));
        arr_10 [i_0] = ((/* implicit */unsigned char) ((long long int) (~(9223372036854775807LL))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_19 [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) (short)-22993))), ((~(arr_5 [16LL] [i_5] [(unsigned short)14])))))), ((+(arr_16 [i_3] [i_4] [i_3])))));
                    arr_20 [i_3] [i_3] [10ULL] [10ULL] = ((/* implicit */short) 16369489576505554345ULL);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) -9223372036854775807LL))));
                    var_21 = ((/* implicit */unsigned long long int) ((((((unsigned int) (unsigned char)189)) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_4 [i_3] [i_5])))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4])))));
                    arr_21 [i_3] [i_4] = ((/* implicit */unsigned short) arr_17 [7U]);
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) var_4);
        arr_22 [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) ((4151664984U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70)))))), (((long long int) ((((/* implicit */int) arr_14 [i_3])) & (((/* implicit */int) (short)32763)))))));
        arr_23 [i_3] = (-((((_Bool)1) ? (arr_17 [i_3]) : (arr_2 [i_3]))));
        arr_24 [i_3] [i_3] = ((((/* implicit */_Bool) 1698951295U)) ? ((~(((/* implicit */int) arr_14 [i_3])))) : ((~(((((/* implicit */int) var_10)) * (((/* implicit */int) var_0)))))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8405)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)9340))))) : (9223372036854775803LL))));
}
