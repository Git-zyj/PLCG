/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188781
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 + 2])) ? (arr_4 [i_2 + 4]) : (arr_4 [i_2 + 3]))))));
                                var_21 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_9 [i_2 + 3] [i_3 + 1] [i_3 + 2] [3LL]))))));
                                var_22 ^= ((/* implicit */unsigned short) (-((~(((/* implicit */int) min(((short)5581), (((/* implicit */short) arr_12 [i_0] [i_0] [i_1] [i_2 + 1] [i_0])))))))));
                                var_23 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_17)) ? (min((var_19), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 7; i_6 += 2) 
                        {
                            {
                                var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) min((var_14), ((short)-5567)))) : (((/* implicit */int) arr_5 [(short)5] [(short)5]))))) ? (min((1102852667U), (((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [9ULL] [i_0] [(signed char)0] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned char)7] [(_Bool)1] [i_5] [(unsigned char)7] [i_1] [(unsigned short)3])))));
                                var_25 *= ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_2 + 1] [(short)5] [i_6]);
                                var_26 = ((/* implicit */long long int) min((((/* implicit */int) min((arr_11 [i_6] [i_5] [i_2 + 4] [i_1] [i_0]), (arr_11 [i_0] [9U] [i_0] [i_5] [i_6 + 2])))), ((-(((/* implicit */int) var_18))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (unsigned short i_9 = 4; i_9 < 16; i_9 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_9 + 2] [i_7] [i_8]))))) <= (min((8953368980939701935LL), (((/* implicit */long long int) arr_27 [i_9 + 2] [i_7] [i_7]))))));
                    var_28 = ((/* implicit */unsigned short) ((((arr_21 [i_7] [i_7]) <= (((/* implicit */unsigned int) arr_23 [i_9 + 2])))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_7] [i_7]))) : (var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)1)))))))));
                    arr_28 [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) (!(((((/* implicit */int) ((((/* implicit */int) (short)-5556)) > (((/* implicit */int) arr_25 [i_9] [i_7] [i_7] [12LL]))))) > (((/* implicit */int) var_17))))));
                }
            } 
        } 
    } 
}
