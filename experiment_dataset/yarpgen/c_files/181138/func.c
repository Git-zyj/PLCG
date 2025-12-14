/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181138
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
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 3] [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (arr_3 [i_0])))), (((max((arr_4 [i_1] [i_0] [i_0]), (((/* implicit */long long int) arr_3 [i_0])))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) -7757901538648087801LL))))))));
                var_20 = ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (min((((long long int) var_18)), (((/* implicit */long long int) ((short) var_3)))))));
            }
        } 
    } 
    var_21 = max((((/* implicit */long long int) ((var_5) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15)))))))), (min((((/* implicit */long long int) var_16)), ((~(var_14))))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        for (unsigned int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            for (long long int i_4 = 4; i_4 < 21; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (-(min(((+(var_14))), (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_11 [i_2 + 1] [i_2] [i_2] [i_2 + 1])))))) & (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11))), (((/* implicit */long long int) ((signed char) var_8)))))));
                                arr_19 [i_5] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((2147483647), (((/* implicit */int) arr_17 [i_2] [i_5 - 1] [i_4] [i_2] [i_2]))))))) ? (((/* implicit */int) (((-(1058693292U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1937522359U))))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)108))))) & (((/* implicit */int) ((signed char) (signed char)111)))))));
                                arr_20 [i_2 + 1] [(unsigned short)12] [i_3] [i_2] [(unsigned short)12] [9LL] [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (var_15))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_5] [i_2] [i_4 - 4] [i_5 + 1] [i_6 + 1] [i_2])) : (((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) (!(var_10))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64672)) ? (-2435821020051187805LL) : (((/* implicit */long long int) 463874717U))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)63)), (arr_7 [i_2]))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)114)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_5] [i_4] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)22709))))))))));
                                arr_21 [i_2] [i_3 + 1] [i_4] [i_2] = (i_2 % 2 == 0) ? (((min((((((/* implicit */int) arr_7 [i_2])) << (((((/* implicit */int) arr_6 [i_4] [i_2])) - (63))))), (((/* implicit */int) min((arr_10 [i_2] [i_2]), (((/* implicit */unsigned short) arr_9 [i_2 + 1] [i_2] [i_4 - 3]))))))) * ((-(((/* implicit */int) arr_6 [i_2] [i_2])))))) : (((min((((((/* implicit */int) arr_7 [i_2])) << (((((((/* implicit */int) arr_6 [i_4] [i_2])) - (63))) - (13))))), (((/* implicit */int) min((arr_10 [i_2] [i_2]), (((/* implicit */unsigned short) arr_9 [i_2 + 1] [i_2] [i_4 - 3]))))))) * ((-(((/* implicit */int) arr_6 [i_2] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
