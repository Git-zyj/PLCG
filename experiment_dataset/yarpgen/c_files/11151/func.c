/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11151
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) var_3);
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(var_0))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (var_1) : (642841634U)))) ? (((((/* implicit */_Bool) 13933916524585963697ULL)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) > (var_5)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))))) - (14ULL)));
        var_14 = ((/* implicit */_Bool) arr_5 [i_1]);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_15 = ((/* implicit */short) (-(arr_8 [i_2] [i_2])));
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((/* implicit */int) (short)-18)) != (((/* implicit */int) (unsigned short)47126))))) : (((((/* implicit */_Bool) 3486268733328920889LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)18410))))));
    }
    for (long long int i_3 = 2; i_3 < 7; i_3 += 2) 
    {
        var_16 -= ((/* implicit */unsigned long long int) arr_1 [i_3]);
        var_17 = max((((/* implicit */long long int) arr_3 [i_3])), (((-17LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-16))))));
        var_18 ^= ((/* implicit */unsigned long long int) 1482444103U);
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned int i_6 = 2; i_6 < 12; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_20 = ((((var_10) > (((/* implicit */unsigned long long int) var_3)))) ? (((((/* implicit */_Bool) min(((unsigned short)60117), (((/* implicit */unsigned short) (short)1920))))) ? (((((/* implicit */_Bool) arr_8 [i_4 - 1] [(signed char)21])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4] [i_8 - 2])) : (((/* implicit */int) var_6)))) == (((/* implicit */int) ((short) (short)32767))))))));
                                var_21 = ((/* implicit */long long int) (unsigned short)54098);
                            }
                        } 
                    } 
                    arr_23 [10LL] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-31977))));
                    var_22 = ((/* implicit */int) (short)0);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_4);
}
