/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129932
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
    var_19 ^= ((/* implicit */_Bool) ((int) min((((/* implicit */int) var_1)), (((((/* implicit */int) (short)12361)) >> (((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) & ((((+(arr_0 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        var_20 ^= ((signed char) ((((/* implicit */int) ((signed char) arr_0 [(signed char)9]))) >> (((/* implicit */int) var_11))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) var_2);
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                for (long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) ((int) ((((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */unsigned short) arr_12 [(_Bool)1] [i_1]))))) % ((~(((/* implicit */int) var_16)))))));
                        arr_15 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((((arr_10 [(signed char)6] [(signed char)6] [i_3] [i_4 - 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) var_10)))))))) >> (((min((((/* implicit */unsigned long long int) (unsigned short)17393)), (((unsigned long long int) (unsigned short)48161)))) - (17372ULL)))));
                        arr_16 [i_1] [i_1] [i_3 - 1] [i_4] [i_1] [i_4] = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))), (min((var_18), (((/* implicit */long long int) var_15))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_9 [i_1] [3ULL])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_1])))) : ((+(((((((/* implicit */int) arr_6 [i_1] [(signed char)8] [i_4])) + (2147483647))) >> (((var_3) - (3028604353213726160ULL)))))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))), (min((var_18), (((/* implicit */long long int) var_15))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_9 [i_1] [3ULL])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_1])))) : ((+(((((((((/* implicit */int) arr_6 [i_1] [(signed char)8] [i_4])) - (2147483647))) + (2147483647))) >> (((var_3) - (3028604353213726160ULL))))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 4; i_5 < 14; i_5 += 2) 
    {
        var_22 = var_13;
        arr_20 [3LL] = ((/* implicit */signed char) (_Bool)1);
    }
    var_23 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_7))))))))));
}
