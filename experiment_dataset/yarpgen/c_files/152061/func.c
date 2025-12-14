/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152061
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
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) max((arr_2 [i_3] [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [(_Bool)1] [4LL])))))));
                        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (+(((((/* implicit */int) arr_5 [i_3 + 1] [i_0 - 4] [i_0 - 4] [i_3])) | (((/* implicit */int) arr_4 [i_0])))))))));
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (unsigned short)53047))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((arr_8 [i_2] [i_2]), (((arr_8 [i_1 + 1] [i_3 + 1]) & (arr_8 [i_1 + 1] [i_1]))))))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(arr_0 [i_1 + 2]))))));
                    }
                } 
            } 
        } 
        var_16 *= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) arr_4 [i_0])), ((unsigned short)65514))), (((/* implicit */unsigned short) var_4))));
        var_17 ^= ((/* implicit */_Bool) arr_8 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_5))));
        arr_12 [i_4] [i_4] |= ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)0]))) - ((-9223372036854775807LL - 1LL))))));
        var_19 |= arr_3 [i_4];
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_7))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        arr_15 [i_5] [i_5] = ((unsigned long long int) ((((/* implicit */int) var_10)) >= (597153656)));
        var_21 = ((/* implicit */unsigned short) (-(5925454856714980396ULL)));
    }
    var_22 = ((/* implicit */unsigned char) max((var_22), (var_5)));
}
