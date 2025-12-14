/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137733
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_11 [i_2] [14] [i_1] [i_2] = ((/* implicit */unsigned int) var_13);
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_4))));
                        arr_12 [i_1] |= ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1]))));
                        var_18 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 18446744073709551597ULL)) ? (4294443008U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) >> (((((unsigned long long int) var_3)) - (14ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 4; i_4 < 22; i_4 += 4) 
                    {
                        var_19 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)22911)) == (((/* implicit */int) (unsigned char)0)))))));
                        arr_15 [i_2] [i_2] [i_1] [i_1] [i_2] = arr_8 [i_4 + 1] [i_4] [(unsigned short)16] [(unsigned short)16] [(unsigned short)16];
                    }
                    arr_16 [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [17] [17] [17] [17])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_0])))) == (((((/* implicit */int) arr_5 [i_2])) ^ (((/* implicit */int) var_12))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (18446744073709551597ULL)));
    var_21 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) != ((~(((/* implicit */int) var_13)))))));
}
