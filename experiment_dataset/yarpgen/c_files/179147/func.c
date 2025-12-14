/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179147
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 |= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_19 = ((/* implicit */signed char) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]))) / (288160007407534080ULL))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1]))))))), (((/* implicit */unsigned long long int) var_13))));
        arr_5 [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
        var_20 = ((/* implicit */short) ((max((18158584066302017535ULL), (18158584066302017535ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)36))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_21 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 176629817385067422LL)) ^ (288160007407534082ULL)));
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) (unsigned char)255)));
    }
    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_15 [i_3] [(unsigned char)6] [i_3] |= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) 15545962758645124705ULL))))), (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)10)), (var_13)))) % (((/* implicit */int) arr_12 [i_3 + 2] [(unsigned char)11]))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 4; i_5 < 13; i_5 += 2) 
            {
                arr_18 [i_4] [i_5] = ((/* implicit */unsigned char) arr_3 [i_4] [i_4]);
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_12 [i_4] [i_4]))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) max((((/* implicit */unsigned char) var_17)), (var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned char)218)))))));
                arr_19 [i_3] [i_4] &= var_2;
            }
        }
        var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((arr_16 [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned char)2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3 - 2]))))))));
        var_25 = ((signed char) (+(288160007407534082ULL)));
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((/* implicit */int) ((signed char) min((var_2), (((/* implicit */unsigned char) (signed char)-1)))))))))));
}
