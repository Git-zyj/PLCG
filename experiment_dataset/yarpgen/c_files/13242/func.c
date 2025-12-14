/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13242
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
    var_16 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])))) : (((unsigned int) ((var_9) & (1416688163))))));
        var_18 = ((/* implicit */unsigned int) ((((_Bool) var_8)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -1416688180)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))) : ((~(((/* implicit */int) ((((/* implicit */int) var_15)) != (var_5))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_19 = ((/* implicit */signed char) arr_0 [i_2]);
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_1] [i_1] [i_1]))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                var_21 *= ((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3 - 1]);
                var_22 = ((/* implicit */_Bool) (-2147483647 - 1));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_8 [i_3 - 1])) : ((~(var_11))))))));
            }
        }
        var_24 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) ? (arr_7 [i_1] [i_1] [i_1]) : (arr_5 [(unsigned char)14] [(unsigned char)14]))) | (arr_5 [i_1] [2ULL])));
        var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)17629)) << (((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) 2253099835U)) : (var_0))) - (2253099820LL)))));
        var_26 = ((/* implicit */unsigned long long int) ((signed char) (short)13636));
    }
    var_27 = ((/* implicit */int) min((var_27), (var_9)));
}
