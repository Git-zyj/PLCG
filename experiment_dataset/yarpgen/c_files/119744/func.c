/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119744
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [(unsigned short)14] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [14])) ? (arr_1 [(unsigned short)12]) : (arr_1 [(short)4])))) ? ((-(arr_1 [12LL]))) : (((((/* implicit */_Bool) arr_1 [0U])) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6742))))));
        var_12 = ((/* implicit */unsigned int) max((12685396956085530115ULL), (((/* implicit */unsigned long long int) (short)6743))));
        var_13 = ((int) arr_1 [i_0]);
        var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6742))) : (arr_1 [i_0])))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 14427646976460284305ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (18446744073709551603ULL))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)2)), (4176482934U)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_1 - 1] [i_4] [i_3] [i_4 + 1] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_4] [i_1 - 1] [i_3] [10U])));
                        var_16 = ((/* implicit */int) ((arr_1 [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)6724)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 734807776U))));
            var_19 |= ((/* implicit */_Bool) ((arr_1 [8ULL]) & (((/* implicit */unsigned long long int) arr_11 [10ULL] [10ULL] [i_1 - 1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            arr_18 [i_1] [i_5] [(short)14] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - ((+(((/* implicit */int) arr_0 [i_1] [(short)18]))))));
            var_20 = ((/* implicit */signed char) arr_13 [i_1] [i_1] [(short)16] [i_1] [i_1] [i_1]);
            var_21 = ((/* implicit */int) max((var_21), (((int) ((((/* implicit */long long int) 3560159520U)) & ((-9223372036854775807LL - 1LL)))))));
            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) != ((+(1569137522)))));
        }
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(min((var_9), (((/* implicit */long long int) (unsigned char)13))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) (short)6742))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_11)))))))));
}
