/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135656
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
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)28019)) : (((/* implicit */int) (signed char)29))))), (((((/* implicit */_Bool) 598214573U)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) (~(arr_3 [11LL])));
        arr_4 [i_0] &= ((/* implicit */short) (unsigned short)0);
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 4; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((arr_11 [(short)10] [i_2] [i_2] [i_4 + 1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (266338304U) : (((/* implicit */unsigned int) -700775917))))) : (arr_7 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3]))))))));
                                arr_19 [i_1] [i_2] [i_3] [(unsigned short)10] [i_2] = ((/* implicit */long long int) arr_11 [i_2] [i_3 - 1] [i_2] [i_5]);
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(min((var_10), (((/* implicit */long long int) var_4))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (unsigned short)47859)))))));
                                arr_20 [i_1] [3U] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */unsigned char) (-(arr_9 [i_3] [i_2])));
                    var_24 += ((/* implicit */short) max((((/* implicit */unsigned short) (short)-20303)), ((unsigned short)47859)));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */int) max((arr_2 [i_1] [i_2 + 2]), (((/* implicit */unsigned short) var_6))))) | (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)25)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 4398046511103ULL)) || (((/* implicit */_Bool) var_10)))))));
                    var_26 ^= ((/* implicit */unsigned int) var_14);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) (unsigned short)64500);
    }
    var_28 = ((/* implicit */short) (_Bool)1);
    var_29 = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned char)219)), (var_2)));
}
