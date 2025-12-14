/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168268
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2660553646989239361LL))))), (((unsigned int) (short)-10897))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) / (var_12)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-18341)) | (((/* implicit */int) arr_0 [i_0] [i_0]))))), (max((432345564227567616ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        var_20 -= ((/* implicit */short) (+(min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_21 = ((/* implicit */short) (-(((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188))) : (arr_1 [i_1]))) - ((+(var_10)))))));
            var_22 ^= min((((unsigned int) min((var_14), (((/* implicit */unsigned short) (short)2180))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)104)))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned short)29352))));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) (+(var_16)))), (((1842951591U) & (4294303795U)))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 4; i_3 < 9; i_3 += 1) 
            {
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_9))));
                var_25 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_7 [i_0]))))));
            }
            /* vectorizable */
            for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_4 [11LL] [i_4]))));
                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)84))));
            }
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min((((/* implicit */int) min((((short) var_17)), (arr_0 [i_2] [i_2])))), (((((/* implicit */int) (short)-28637)) / (arr_13 [i_0] [i_0] [i_0]))))))));
            var_28 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((+(var_10))), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_2])))))));
            var_29 = max(((+(((/* implicit */int) (short)-28640)))), (((((/* implicit */int) (signed char)17)) << (((((/* implicit */int) (signed char)76)) - (58))))));
        }
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((3941126983368915394LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))))) ? ((~(856322416U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4890631586358635886LL)) ? (((/* implicit */int) var_13)) : (arr_13 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) -1666674374))) && ((!(((/* implicit */_Bool) (unsigned short)4064)))))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_5] [i_5] [i_5]))));
        arr_18 [i_5] = ((/* implicit */short) (signed char)21);
        var_32 ^= ((/* implicit */unsigned int) 18014398509481984025ULL);
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((unsigned char) (~(((/* implicit */int) var_13)))))));
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_9))));
                    var_35 = ((/* implicit */unsigned short) ((unsigned int) (signed char)122));
                    var_36 ^= ((/* implicit */unsigned char) ((((((/* implicit */long long int) 8192)) < (5965708730645263934LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -4890631586358635887LL)))) : ((+(2025827153U)))));
                    arr_24 [i_7] [i_7] = ((/* implicit */unsigned int) ((int) (+(arr_21 [i_6] [i_7]))));
                }
            } 
        } 
    }
    var_37 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)59227)) ? (((int) (short)-5728)) : (((/* implicit */int) (short)8192)))), (((/* implicit */int) (short)-5483))));
    var_38 = ((/* implicit */int) (+((~(var_11)))));
}
