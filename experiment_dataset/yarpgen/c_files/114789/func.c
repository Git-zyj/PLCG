/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114789
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((1959888038568454210LL) / (((/* implicit */long long int) ((703390920) << (((4231261730U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))))))))));
                var_15 = ((/* implicit */unsigned short) (~((-(703390920)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) (((+(9223372036854775800LL))) / (((/* implicit */long long int) (-(985729977))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
            {
                for (long long int i_5 = 4; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_18 &= ((/* implicit */short) arr_9 [i_2] [i_2] [i_2]);
                        arr_16 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2])) < (((((/* implicit */int) var_3)) * ((+(((/* implicit */int) var_11))))))));
                        arr_17 [i_2] = ((/* implicit */unsigned short) arr_11 [i_2] [i_3] [i_4] [i_5]);
                        arr_18 [i_2] = var_8;
                    }
                } 
            } 
        } 
        arr_19 [i_2] [i_2] = (((-((+(var_14))))) >> (((((((/* implicit */int) ((18446744073709551615ULL) == (18446744073709551598ULL)))) - (((/* implicit */int) var_3)))) + (56330))));
    }
    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6]))))));
        var_19 = ((/* implicit */unsigned int) var_6);
        arr_24 [i_6] = ((/* implicit */unsigned long long int) (+(arr_12 [i_6] [i_6] [i_6] [i_6])));
        arr_25 [i_6] [i_6] = ((arr_9 [i_6] [i_6] [i_6]) & (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((arr_9 [i_6] [i_6] [i_6]) - (504531511U)))))));
    }
    var_20 = ((/* implicit */unsigned short) ((var_6) / (((/* implicit */long long int) (~(((((/* implicit */int) var_13)) | (((/* implicit */int) var_5)))))))));
    var_21 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_9)))));
}
