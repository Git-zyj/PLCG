/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133745
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [(unsigned short)0] [i_0] [4ULL] = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (1037544110815888226LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_0])))))), ((-(var_1))))));
                var_17 = ((/* implicit */_Bool) ((((_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) 679023234)) ? (9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0]))))) : (((/* implicit */long long int) ((arr_1 [i_2]) | (arr_1 [i_1]))))));
                arr_9 [i_0] [(short)12] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */long long int) arr_0 [i_0]);
                var_19 = ((/* implicit */unsigned int) (~(165709282)));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0])) - (((/* implicit */int) arr_2 [i_1] [i_0]))));
                arr_13 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) (+(679023251)));
                arr_14 [i_0] [i_1] [i_3] [i_3] |= ((/* implicit */_Bool) ((unsigned int) -9223372036854775788LL));
            }
            var_21 &= ((/* implicit */int) ((((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1] [i_0]))))) < (arr_1 [i_0]))) ? (var_3) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))) * (var_2)))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_5))))))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((unsigned char) var_9)))) && (((/* implicit */_Bool) (+(((long long int) -679023257)))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)175))));
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_0 [i_0]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_26 = ((/* implicit */unsigned int) arr_12 [i_0] [i_5] [i_5] [(unsigned char)12]);
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((int) ((arr_19 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_5])))))))));
        }
        var_28 ^= ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        var_29 &= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) -1499376699))) >> (((((((var_14) + (2147483647))) >> (((1019356099U) - (1019356078U))))) - (858)))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            var_30 = ((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_6] [i_6] [i_7]))));
            var_31 = ((/* implicit */long long int) arr_22 [i_6] [i_6]);
            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        var_33 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) (-(679023251))))));
        arr_28 [i_8] [i_8] = ((/* implicit */_Bool) var_13);
        var_34 &= ((/* implicit */int) (signed char)-30);
        var_35 |= ((/* implicit */long long int) arr_2 [i_8] [i_8]);
    }
    var_36 = ((/* implicit */signed char) var_6);
}
