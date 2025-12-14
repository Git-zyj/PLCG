/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126531
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)29375)) >> (((((/* implicit */int) (short)29368)) - (29360)))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) % (var_8)))) ? (var_18) : (((/* implicit */unsigned long long int) var_0))))));
    var_20 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [(unsigned char)7] [i_1])))) ? (((arr_4 [(signed char)7]) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1)))))));
                var_22 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [7])) ? (var_5) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (signed char)0))))))) * (((/* implicit */int) arr_0 [i_1]))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~((-(((/* implicit */int) (short)-29376)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_2] = ((/* implicit */unsigned int) var_6);
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_9 [i_2 + 2] [i_2 + 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            arr_20 [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 3] [i_2])) ? (min((arr_11 [i_2] [i_2 - 2] [i_2]), (arr_11 [i_2] [i_2 + 1] [i_2]))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 3] [i_2])) ? (arr_11 [i_2] [i_2 + 1] [i_2]) : (arr_11 [i_2] [i_2 - 1] [i_2])))));
                            var_25 = min((7LL), (((/* implicit */long long int) ((unsigned short) ((arr_9 [2LL] [i_2 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)29382))))))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_3] [i_4] [i_5] [i_2])) * (((/* implicit */int) (unsigned char)250))))))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) - (arr_9 [i_2] [i_2]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned short i_8 = 2; i_8 < 21; i_8 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35868)) >= (((/* implicit */int) (unsigned short)45961))));
                    var_28 = ((/* implicit */_Bool) arr_22 [i_7]);
                    var_29 *= ((/* implicit */unsigned short) 7LL);
                    arr_29 [i_6] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 16384U)))) % (((((/* implicit */unsigned int) arr_27 [i_8 + 2] [i_8 - 2] [i_6])) % (((((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_8 - 1])) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))));
                }
            } 
        } 
    } 
}
