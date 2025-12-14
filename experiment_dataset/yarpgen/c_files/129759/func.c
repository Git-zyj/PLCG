/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129759
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */signed char) max((((((/* implicit */int) arr_3 [0LL])) * (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [1LL] = ((/* implicit */int) ((((arr_1 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)241)))))) ? (5133031906688295254ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)202), (((/* implicit */unsigned char) arr_3 [i_0]))))))));
        arr_5 [0ULL] = ((/* implicit */long long int) max((-1128816404), (((/* implicit */int) ((short) ((arr_3 [i_0]) ? (5133031906688295242ULL) : (5133031906688295254ULL)))))));
    }
    var_14 = ((/* implicit */unsigned char) var_1);
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ ((~(((/* implicit */int) (short)27120)))))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_11 [i_2] [1] = ((((/* implicit */_Bool) (~(((arr_7 [i_2] [i_1]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_6 [i_1]))))))) ? ((+(((/* implicit */int) ((short) arr_7 [i_1] [i_2]))))) : (((/* implicit */int) arr_10 [i_1] [(short)13] [i_2])));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((arr_7 [(_Bool)1] [i_2]) && (((/* implicit */_Bool) ((var_11) / (arr_9 [i_1] [i_2])))))) && (((/* implicit */_Bool) ((long long int) 13313712167021256361ULL)))));
                            var_16 *= ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (max((((/* implicit */long long int) (signed char)-15)), (arr_8 [i_4 + 1] [i_4 + 2])))));
                            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_3) != (var_3)))) % (((((/* implicit */_Bool) -2147483642)) ? (arr_13 [i_3] [i_3] [i_1]) : (arr_15 [i_1] [i_1] [i_1] [i_1])))))) ? (((((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */int) (_Bool)0)) : (1391472340))) & (((/* implicit */int) ((signed char) arr_6 [i_3]))))) : (var_11)));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */int) ((unsigned long long int) 5133031906688295241ULL));
            }
        } 
    } 
}
