/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1401
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
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)15))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) + (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_0])) + (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_0]))))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), ((unsigned char)1)))) + ((+(((/* implicit */int) var_6))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) min(((+(((/* implicit */int) (unsigned char)233)))), (min(((~(((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) (short)11194))))));
                        var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_8 [i_3] [i_0] [i_0]), (((/* implicit */int) arr_4 [i_2]))))) ? (min((((((/* implicit */int) (unsigned char)30)) - (((/* implicit */int) (unsigned char)21)))), (((/* implicit */int) arr_3 [i_2] [i_1])))) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_4])) ? ((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_4])))) : ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_4]))))));
                        arr_18 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2]))) ^ (arr_0 [i_0])));
                        var_15 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 7864275523083645820ULL)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235)))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_16 ^= (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_5])) && (((/* implicit */_Bool) var_11)))))))));
                        arr_21 [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (6642201251958140419ULL) : (((/* implicit */unsigned long long int) 144115185928372224LL))));
                    }
                }
            } 
        } 
    } 
}
