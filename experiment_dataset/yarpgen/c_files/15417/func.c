/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15417
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
    var_12 = ((/* implicit */short) (+((~((~(var_10)))))));
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */unsigned char) var_1);
    var_15 &= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 7350485371174682879ULL)) ? (var_10) : (((/* implicit */int) (signed char)-115))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) arr_2 [i_2] [i_1 + 2] [i_2]);
                    var_17 = max((-3904200116105867186LL), (((/* implicit */long long int) (signed char)-67)));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8)))) ? (((/* implicit */int) min((arr_2 [i_2] [i_1 + 1] [i_0]), (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 380121827U)))))))), (max((((/* implicit */long long int) max((var_4), ((signed char)-121)))), (-4774604326181884216LL)))));
                    arr_9 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (signed char)84))))))) : (((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (11737260666913609181ULL))) : ((((_Bool)1) ? (var_7) : (254659332571525410ULL)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 3] [i_1])) & (var_10)))) ? (((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_0])) : ((+(((/* implicit */int) arr_10 [i_1 + 1] [(signed char)6] [i_1] [i_1 + 1] [(unsigned char)17]))))));
                        arr_13 [i_1] = (~(((/* implicit */int) ((unsigned char) arr_4 [i_1 + 3] [i_1 + 2]))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_0] [i_2]))))))));
                        arr_15 [i_1] [i_1] = arr_1 [i_0] [i_0];
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) var_5)), (arr_3 [i_0] [i_1 + 1] [i_2]))));
                            arr_18 [i_0] [16ULL] [i_1 + 3] [i_1] [i_0] [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 254659332571525413ULL)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (min((((/* implicit */unsigned int) arr_6 [i_0])), (2543480298U))))))));
                            arr_19 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) var_9);
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_19 |= ((((/* implicit */_Bool) arr_20 [i_5] [i_3] [i_2] [i_1 + 1] [i_0])) ? (((arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 1]) + (((/* implicit */long long int) arr_7 [i_0] [i_1 + 2] [i_1 + 3] [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_1 + 3] [i_1 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (arr_1 [i_3] [i_3])))) : (arr_3 [i_1 + 2] [(unsigned char)5] [i_0]))));
                            arr_24 [i_0] [i_0] &= ((/* implicit */_Bool) ((signed char) arr_23 [(unsigned char)4] [i_0] [i_2] [i_3] [i_3] [i_5]));
                            arr_25 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_1])) : (((unsigned long long int) (short)-19234)))), (((/* implicit */unsigned long long int) -4170960140913580190LL))));
                            arr_26 [i_1] [i_1] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 1862185217)) : (arr_5 [i_2] [i_1 + 1])))))));
                        }
                    }
                }
            } 
        } 
    } 
}
