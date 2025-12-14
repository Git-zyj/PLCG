/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134100
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
    var_16 += ((/* implicit */unsigned short) var_13);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((min(((unsigned short)224), ((unsigned short)247))), (min((var_5), (((/* implicit */unsigned short) arr_1 [i_0 + 4]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_4 [i_0] |= ((/* implicit */unsigned char) (unsigned short)247);
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (signed char)-17);
                                var_18 = ((/* implicit */long long int) min((var_18), (((arr_7 [i_1 + 3]) + (arr_7 [i_1 + 1])))));
                                var_19 *= ((/* implicit */long long int) 2186653800U);
                                arr_21 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((arr_7 [i_4]) / (((/* implicit */long long int) var_13))));
                                var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) arr_0 [i_3]))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] = ((/* implicit */unsigned char) var_1);
                    var_21 ^= ((/* implicit */unsigned char) (unsigned short)268);
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 2186653800U))));
    }
    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
    {
        arr_25 [i_6 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_8 [i_6] [i_6] [i_6 - 1]), (min((arr_5 [i_6]), (((/* implicit */long long int) arr_24 [i_6 + 2]))))))) ? (((((((/* implicit */_Bool) arr_10 [i_6])) ? (70368744177152LL) : (((/* implicit */long long int) 2186653800U)))) / (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_6] [i_6 - 1] [i_6 + 1] [i_6])) >> (0ULL)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) arr_17 [i_6 + 3] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) (short)-8731))))) && ((!(((/* implicit */_Bool) (unsigned short)17669))))))))));
        arr_26 [i_6 + 3] [i_6 - 1] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)17669)), (min((((((/* implicit */_Bool) (unsigned short)645)) ? (((/* implicit */int) (unsigned short)49443)) : (((/* implicit */int) (unsigned short)38220)))), ((+(((/* implicit */int) (unsigned short)45836))))))));
        var_23 = ((/* implicit */signed char) var_6);
    }
    var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned short)1984))));
    var_25 = ((/* implicit */signed char) min((var_10), (var_15)));
    var_26 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_6))))))), (((((((/* implicit */_Bool) 3955263204U)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((unsigned short) (signed char)-17)))))));
}
