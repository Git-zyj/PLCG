/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169548
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
    var_12 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) ((unsigned int) (-(arr_7 [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_14 = (~(((unsigned long long int) var_9)));
                                var_15 = (+(((/* implicit */int) max((((/* implicit */short) arr_6 [i_1 + 1] [i_1 + 1] [i_0 - 1])), ((short)-13049)))));
                                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)142))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4150509294U)) ? (((((/* implicit */_Bool) -1373401657073697647LL)) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_2]))) : (arr_5 [i_0] [11]))) : (((/* implicit */int) ((var_4) >= (var_4))))));
                            }
                        } 
                    } 
                    var_18 ^= ((((/* implicit */_Bool) ((arr_9 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) + (((unsigned long long int) arr_2 [i_0] [i_2]))))) ? ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [(_Bool)1] [(unsigned short)9]))))) : ((-(arr_11 [(_Bool)1] [i_1 - 1] [i_2]))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((long long int) 3298649598U)) : (((/* implicit */long long int) ((int) arr_8 [i_0] [i_0] [(_Bool)1] [i_0]))))) >> ((((-(((unsigned long long int) var_4)))) - (18446744073105105648ULL)))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (40031734734904845ULL)));
    }
    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >= (((int) arr_4 [i_5] [(_Bool)1] [i_5])))))));
        var_22 = ((/* implicit */int) max((var_22), (((int) (unsigned char)24))));
    }
}
