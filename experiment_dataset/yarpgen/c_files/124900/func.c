/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124900
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
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned char)0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (short)0)) ? ((~(-9223372036854775799LL))) : (((/* implicit */long long int) (+(var_1))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_12 = (~(((/* implicit */int) var_4)));
                    arr_9 [i_2] [1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 629027222244527157LL)) ? (((((/* implicit */_Bool) (short)-7894)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166))) : (11148139865487279402ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-7894))))))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(15389831458186115825ULL)))) ? (((/* implicit */unsigned int) -464483281)) : (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28846))) : (var_8)))));
                    arr_13 [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)166)))) - (((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (unsigned short)120)) : (((/* implicit */int) (short)13254))))));
                    arr_14 [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(0)))) ? ((+(5415636492555065784ULL))) : (((/* implicit */unsigned long long int) var_5))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) (short)-22101)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11010)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) : ((+(10382260273404541885ULL)))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-22101)))))));
}
