/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152552
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((252085645) % (((/* implicit */int) arr_8 [i_1] [i_2 + 1] [i_1])))));
                    var_20 = ((/* implicit */signed char) max((((((var_18) != (((/* implicit */long long int) ((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [7U] [13ULL] [i_1])), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) 3845511136U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) var_3)) + (arr_4 [i_2]))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_0] [i_1 - 1])), (252085636)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 14514236494470517325ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 256898756)) ? (2048176204U) : (2355363628U)))))) ? (arr_7 [i_0] [i_1]) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1 - 1] [21U] [i_2] [i_2] [i_2])))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)20)) ? (9223372036854775807LL) : (((/* implicit */long long int) 3127910525U))))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), ((~(2048176204U)))));
                                arr_17 [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_2 - 1]);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [8U] [20LL] = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) var_16);
    /* LoopNest 3 */
    for (long long int i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                {
                    arr_27 [i_7] [(unsigned char)0] [6LL] [i_5] = ((/* implicit */int) max((max((var_1), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) arr_23 [i_5] [i_6] [i_6]))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((int) ((((max((-1), (var_14))) + (2147483647))) << (((((var_15) + (1841424657))) - (8)))))))));
                }
            } 
        } 
    } 
}
