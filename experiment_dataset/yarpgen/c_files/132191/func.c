/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132191
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
    var_12 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) var_5))), (((long long int) min((var_8), ((unsigned char)3))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 6; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 6; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 7; i_4 += 2) 
                            {
                                arr_11 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_3] [i_3 + 3] [i_3 + 3] [i_3] [i_3 - 2] [i_3]))));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56841)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_2 + 1]))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)56836)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (var_1))))));
                                var_15 |= ((/* implicit */short) (unsigned short)8699);
                                var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 + 3]))));
                            }
                            var_17 += min((((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_11))))) & (((/* implicit */int) var_2)))), ((+(((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0])), (var_2)))))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */_Bool) (unsigned short)8714);
            }
        } 
    } 
}
