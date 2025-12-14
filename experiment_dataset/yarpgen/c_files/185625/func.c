/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185625
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0 + 1] |= ((/* implicit */unsigned short) (_Bool)0);
        arr_3 [i_0 + 1] = ((_Bool) var_17);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0 - 2] [i_0 + 3])))) >> (((var_2) - (494271619U)))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)6386)) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 2])) : (var_11))))))));
        arr_5 [i_0 + 2] [i_0 + 1] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) var_17);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), ((~(arr_12 [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_2 + 1])))));
                                arr_20 [i_5 - 1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */signed char) (((+(arr_12 [i_5 - 2] [i_5 - 3] [i_5 - 2] [i_5 - 1]))) % (((arr_16 [i_1 - 1] [i_2 - 2] [i_2 - 1] [i_2]) ? (((/* implicit */int) arr_11 [i_2] [i_1 + 1] [i_5 - 2])) : (((/* implicit */int) arr_11 [i_2] [i_1 - 1] [i_5 - 3]))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) 2047);
                }
            } 
        } 
    }
    var_21 = ((/* implicit */int) var_15);
}
