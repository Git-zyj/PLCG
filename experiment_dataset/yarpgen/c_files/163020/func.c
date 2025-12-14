/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163020
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_17 = ((signed char) ((((/* implicit */_Bool) (short)16)) ? (65535) : (((/* implicit */int) (unsigned short)65535))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? ((+(((/* implicit */int) arr_2 [i_1])))) : ((+(((/* implicit */int) arr_2 [i_1]))))));
                        arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)23)) ^ (((((/* implicit */int) arr_9 [(signed char)7] [(signed char)7] [i_2] [i_2] [i_2] [i_2])) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [7U] [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_4] [i_4 + 1]))));
                        arr_13 [i_0] [(_Bool)1] [(signed char)11] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (long long int i_6 = 3; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [(signed char)6] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6 - 3] [i_1] [i_1] [i_5]))) : (18446744073709551615ULL)))))));
                                var_20 = ((/* implicit */long long int) (~(((6U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6 - 3] [i_6 - 3])))))));
                                var_21 -= ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) arr_8 [i_6] [1] [i_1] [i_5] [i_6 - 2] [i_1])))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [(short)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(-1)))) / (arr_18 [i_0] [i_6 - 1] [i_6] [i_6 - 3] [i_6 - 2] [i_6 - 1])))) ? ((+(((long long int) -65528)))) : (((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_9 [i_6] [(short)4] [i_0] [i_0] [i_0] [i_0])), (4194240U))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_1]))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    var_23 = ((/* implicit */signed char) (short)32763);
                    arr_21 [i_2] [i_0] [i_0] = ((/* implicit */long long int) (-((((+(((/* implicit */int) var_16)))) | (((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) 8879852378184603018LL);
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        for (signed char i_8 = 3; i_8 < 17; i_8 += 3) 
        {
            {
                var_25 = ((/* implicit */long long int) var_13);
                arr_27 [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [i_7] [i_8]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(var_3))) - (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? ((+(-2450892246293996647LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 65533))) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) var_2)))) : (((/* implicit */int) ((short) var_14))))))));
}
