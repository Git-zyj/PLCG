/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128676
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 12304373223788293018ULL)) ? (1252544730706580824LL) : (((/* implicit */long long int) 14336)))), (min((1252544730706580824LL), (144115188075855871LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 8690062847885641297LL)) && (((/* implicit */_Bool) 615212977)))))) : (min((((/* implicit */unsigned int) -1860286540)), (2016U)))));
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) max((((/* implicit */short) ((arr_6 [i_0] [i_1] [i_2] [(unsigned short)16]) < (((/* implicit */int) arr_3 [i_0 + 2]))))), ((short)31308))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_0] [i_0 + 2]))), ((-(arr_5 [i_0] [i_0 + 2])))));
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_6 [5U] [14] [5U] [4ULL])) % (arr_5 [(unsigned short)4] [(unsigned char)8]))), (((/* implicit */unsigned long long int) (short)31308))))) ? ((+(((((-835520442) + (2147483647))) >> (((((/* implicit */int) var_4)) - (58))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1])))))));
                    var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0])) ? (arr_7 [i_0 + 1] [i_0 - 1] [5ULL]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0]))), (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [16])) ? (arr_7 [i_0 + 2] [i_0 + 1] [i_0]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0])))));
                }
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    arr_13 [i_0] = ((/* implicit */unsigned int) var_3);
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((short) ((short) (signed char)32))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((var_4), (arr_12 [i_0] [i_1] [i_4] [i_0 + 2]))))) / (((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0])) ? (arr_9 [i_0] [i_0 + 1] [i_0 - 1] [i_0]) : (-8690062847885641298LL)))));
                        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [i_5] [i_5]), (arr_11 [i_0 + 1] [i_0] [i_0])))) || (((/* implicit */_Bool) (+(2497431765U))))));
                    }
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */long long int) arr_0 [(short)12]);
                    arr_17 [i_0 - 1] [i_0] [(unsigned char)9] = ((/* implicit */short) arr_6 [i_0] [i_0] [i_4] [i_4]);
                }
                var_17 -= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [4U] [i_1])))))))) & (var_7)));
                var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)32))))) < (((1252544730706580824LL) / (arr_14 [(unsigned char)3] [i_0] [(unsigned char)3] [i_0 + 1] [i_1] [i_0 - 1])))));
                arr_18 [i_0] = ((/* implicit */unsigned short) arr_7 [i_1] [i_0] [i_0 + 2]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (-(13524368874670905205ULL)));
}
