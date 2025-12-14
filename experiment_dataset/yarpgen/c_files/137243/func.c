/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137243
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */signed char) arr_4 [i_2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) ((min((arr_7 [(unsigned short)0] [(unsigned short)0]), ((_Bool)1))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] [i_3] [i_4]) <= (-650005698))))))) : (arr_6 [i_0] [11ULL] [i_4])));
                                var_20 = ((/* implicit */long long int) (+((+(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0])))))));
                                var_21 ^= ((/* implicit */unsigned short) var_4);
                                arr_12 [i_2] [i_1 - 1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_1 [i_3] [i_1 - 1])) - (9767)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)10] [i_4]))) & (arr_3 [i_2] [i_2])))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_2] [i_1 + 1] [i_2] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (3208561927078998799LL))) >= (((var_7) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (arr_10 [7U] [7U] [i_2] [i_1] [7U] [i_1] [i_2]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1] [i_0])) || (((((/* implicit */_Bool) 3967493493U)) && (((/* implicit */_Bool) arr_0 [i_2 - 3])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((unsigned short) ((int) ((((/* implicit */_Bool) var_2)) && ((_Bool)1)))));
                arr_19 [i_5] [i_6] = ((/* implicit */_Bool) max((arr_1 [i_5 - 1] [i_6]), (((/* implicit */unsigned short) arr_2 [i_5]))));
                arr_20 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_5])))));
                var_23 = ((/* implicit */unsigned char) ((arr_9 [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5] [(_Bool)1]) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16)) * (((/* implicit */int) (short)0)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((var_24), (var_11)));
}
