/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155813
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] [(short)20] [7U] [i_3 - 1] [i_2] [(short)13] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2692615897299557497LL)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [0U])) : (((/* implicit */int) arr_10 [i_0 + 2] [i_0] [i_0 + 1]))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */int) arr_7 [i_0 - 1])) != (((/* implicit */int) var_5))))));
                            arr_17 [i_1] [i_2] [i_3] &= ((/* implicit */unsigned int) ((short) arr_7 [i_0 + 2]));
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((unsigned long long int) var_8)))));
                        }
                        for (short i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (-2078959014) : (((/* implicit */int) (unsigned char)199))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_1 + 1] [i_3 - 2])) - (((/* implicit */int) arr_12 [i_1 - 1] [i_3 + 1]))));
                        }
                        for (short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            var_16 -= ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 3] [i_1] [i_2] [i_6]))) != (((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)16] [18ULL] [18ULL]))))));
                            var_17 -= (~(((/* implicit */int) (unsigned char)255)));
                            var_18 &= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_13 [i_1])) ? (7061330307870219625ULL) : (var_4))));
                            var_19 = ((/* implicit */unsigned short) arr_20 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 + 2] [i_6]);
                        }
                    }
                } 
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_16 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 2]))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((arr_13 [i_0 + 3]) % (arr_13 [i_0 + 3]))))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((unsigned short) -5320996072051349780LL))) : (((/* implicit */int) min((((((/* implicit */unsigned long long int) 0U)) >= (var_4))), (var_8))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967295U)), (-5320996072051349780LL)))) ? ((-(var_7))) : (var_7)));
}
