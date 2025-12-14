/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154156
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((var_4) & (4294967274U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (var_0)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) ((_Bool) 4294967274U));
                    var_18 ^= ((/* implicit */int) (~(4294967282U)));
                }
                var_19 = ((/* implicit */_Bool) min((max((5U), (((/* implicit */unsigned int) (-(645120108)))))), (((((/* implicit */unsigned int) ((int) 15376668674993165850ULL))) + (1953816380U)))));
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_8)), (var_0)))));
                var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((2903455181238305659ULL), (((/* implicit */unsigned long long int) var_0)))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)1868)) : (((/* implicit */int) (_Bool)1)))) / ((+(1922833508)))))) ? ((-(((((/* implicit */_Bool) 4294967295U)) ? (var_7) : (((/* implicit */int) var_2)))))) : (((var_7) % (678102012)))));
                    var_22 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) -106698007)), (18446744073709551615ULL))), (15580454063169856332ULL)));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)1880))))) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))) : (min((((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_15 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)28))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((+(((/* implicit */int) (signed char)-70)))))) : (var_0)));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_7))));
    var_24 = ((/* implicit */unsigned int) var_0);
}
