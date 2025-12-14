/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107265
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
    var_16 = ((/* implicit */unsigned int) (unsigned short)65064);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)473))) : (var_11)))), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_3))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (max((((/* implicit */unsigned long long int) var_4)), (arr_1 [i_0] [i_0])))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) == (var_12)))) ^ (((/* implicit */int) (unsigned short)472))))), (max((((/* implicit */unsigned int) min(((unsigned short)471), ((unsigned short)65066)))), (arr_3 [i_1] [17U] [i_1])))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((18446744073709551615ULL), (15444091698153832809ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)472)))))) ? (arr_4 [i_0] [i_1] [i_2]) : (((int) max((((/* implicit */unsigned short) (signed char)-53)), ((unsigned short)471)))))))));
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) ((unsigned short) (unsigned char)45))))), ((((-(1587230475))) ^ ((+(((/* implicit */int) arr_7 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((var_4) <= (((/* implicit */unsigned int) var_0)))))) ? (((((/* implicit */_Bool) arr_9 [0LL])) ? (arr_9 [(_Bool)0]) : (arr_9 [14]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_0 [i_3]))))) >= (max((var_15), (((/* implicit */long long int) arr_6 [(unsigned short)2] [(unsigned short)2] [i_2] [i_2]))))))))));
                        var_21 &= ((/* implicit */unsigned long long int) var_8);
                        var_22 = ((/* implicit */unsigned short) var_5);
                        arr_13 [i_0] [(signed char)16] [i_2] [i_2] [i_0] &= ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                        arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] = var_3;
                    }
                }
            }
        } 
    } 
}
