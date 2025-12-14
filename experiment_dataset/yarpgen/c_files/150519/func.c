/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150519
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
    var_13 = ((/* implicit */long long int) (-(842447076U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 0LL))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)3861))))) : ((-(arr_0 [i_0])))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (arr_1 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (18446744073709551596ULL)));
            arr_5 [i_0] [5ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 0U)) ? (var_1) : (arr_0 [i_1]))) & (((/* implicit */int) arr_1 [i_1] [i_0]))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3] [i_1])) - (((/* implicit */int) (short)-32756)))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) - (((/* implicit */int) arr_10 [i_0] [i_1]))))) && (((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)6]))));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((unsigned char) (+(18446744073709551615ULL))));
            arr_13 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
            arr_14 [(unsigned char)1] [i_4] &= ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)26))))) - (3452520230U));
            arr_15 [i_0] [i_4] = (((_Bool)0) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned char)0)));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_5])))))));
        arr_19 [i_5] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        arr_20 [i_5] = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_5] [i_5] [i_5])) >= (((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))));
        var_22 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))));
    }
}
