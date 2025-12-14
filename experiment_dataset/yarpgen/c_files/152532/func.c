/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152532
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
    var_12 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) 4294967295U)) + (var_10)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [(short)10] = ((/* implicit */int) -4703304672034494842LL);
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)7))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)24841)), ((~((~(arr_1 [14ULL])))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2879)) ? (((/* implicit */unsigned long long int) (+(arr_6 [i_1])))) : (((max((((/* implicit */unsigned long long int) 4703304672034494841LL)), (15470846476806686472ULL))) + (((/* implicit */unsigned long long int) arr_6 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_18 [i_2] [i_2] = ((/* implicit */int) (unsigned short)40695);
                        var_14 = ((/* implicit */unsigned short) max((arr_11 [i_2]), (((/* implicit */unsigned char) ((((var_3) + (((/* implicit */long long int) ((/* implicit */int) (short)-2879))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 15470846476806686472ULL)))))))));
                    }
                    var_15 |= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */int) arr_11 [i_3 + 2])) : (((/* implicit */int) arr_11 [i_3 - 2])))));
                    var_16 = ((/* implicit */unsigned char) ((((((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_7))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)1))))))) ? ((+((-(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_3] [i_3] [i_1])), (10036959262874125127ULL)))) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_2]))))));
                }
            } 
        } 
    }
}
