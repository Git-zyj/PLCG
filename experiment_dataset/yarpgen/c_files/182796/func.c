/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182796
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
    var_20 = ((/* implicit */short) var_14);
    var_21 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)139))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (-(((unsigned int) ((((/* implicit */_Bool) -2118411511)) ? (-8032960218282198083LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32758))))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1023)))))));
                                var_24 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((var_14) == (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))), (((unsigned short) 1416448745U))));
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2]))) : (((unsigned long long int) arr_11 [i_1] [i_3 + 4] [i_3 + 4]))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) : (min((8940175797404607039LL), (((/* implicit */long long int) 1023)))))) : (((/* implicit */long long int) -502922756)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0 + 3] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1 - 1] [i_1] [i_0] [i_0 + 2]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            {
                arr_18 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min(((short)29555), ((short)8486)));
                var_26 = ((signed char) ((((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_6] [i_6] [(short)19] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_18) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))))) : (3431424433U)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_5 [i_7] [i_7] [i_7])))));
        arr_22 [i_7] [i_7] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
    }
}
