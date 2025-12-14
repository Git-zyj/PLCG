/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100115
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
    var_11 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]))))));
        var_13 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 8; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2]))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_15 [i_3] [i_3] [(signed char)4] [(unsigned short)5] = arr_8 [i_4] [(unsigned char)2];
                        arr_16 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned long long int) var_10);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_15 = ((/* implicit */int) max((var_15), ((+(((/* implicit */int) (short)7808))))));
            var_16 -= (!(((/* implicit */_Bool) 1698433170252867138LL)));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 3; i_6 < 8; i_6 += 4) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) arr_21 [i_6 + 3]))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_6]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)26830)) & (((/* implicit */int) (short)-22919)))))));
        arr_23 [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_6 + 1] [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (4526885464169943880LL)))));
        var_18 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
    }
    var_19 = ((/* implicit */unsigned int) var_7);
}
