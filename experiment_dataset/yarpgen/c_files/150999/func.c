/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150999
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
    var_10 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_11 = arr_3 [i_0];
                                arr_12 [i_3] [i_0] [i_2] [i_3] [i_0] [i_1] [i_4 + 3] = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_10 [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 2] [8LL])), (var_2)))));
                    arr_13 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_1 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_0 - 2] [i_0 - 2] [i_0] [i_0])))))) >= ((-(((/* implicit */int) arr_10 [i_1 - 1] [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */_Bool) max((min((arr_17 [i_7 - 1] [i_5] [i_5 + 4]), (arr_17 [i_7 - 1] [i_6] [i_5 + 4]))), (min((arr_17 [i_7 - 1] [i_6] [i_5 + 4]), (6484871072466199560ULL)))));
                                var_14 = ((/* implicit */long long int) max((var_14), (var_2)));
                                var_15 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) var_0)), (arr_15 [i_5 + 3] [i_8]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_7])))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned long long int) arr_16 [i_5] [i_5] [i_6])), (4637291657135325538ULL))) : (((/* implicit */unsigned long long int) arr_22 [i_5] [i_6] [10LL] [(unsigned char)4] [(_Bool)0] [i_5] [i_6]))))) ? (((/* implicit */unsigned long long int) (+(((arr_19 [i_5] [i_5] [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_6] [i_6] [1LL]))) : (var_7)))))) : (min((((18446744073709551615ULL) / (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))))))));
            }
        } 
    } 
}
