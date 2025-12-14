/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114297
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
    for (short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        arr_9 [(short)21] [(short)21] [i_3 - 1] [i_3 - 1] [i_3] = ((/* implicit */short) var_10);
                        var_18 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)239)), (arr_4 [i_0] [i_1] [i_2]))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0 - 3]))))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) >= (arr_1 [i_3 + 3]))))));
                            var_20 = ((/* implicit */short) ((unsigned char) var_12));
                            var_21 = (((~(((/* implicit */int) var_16)))) << (((((((/* implicit */int) max((arr_8 [i_3 + 2] [i_3 + 2] [i_3] [i_4 + 1] [i_4 - 1]), (arr_8 [i_3 + 2] [i_1] [i_2] [i_4 - 1] [i_4])))) + (6920))) - (17))));
                            arr_12 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1)));
                        }
                        arr_13 [i_3 - 1] [i_3] [17ULL] [i_1] [i_3] [i_0] = max((((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))), (((/* implicit */unsigned long long int) max((((int) 0U)), (((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned short)3020))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_22 += ((/* implicit */_Bool) (~(((/* implicit */int) var_17))));
                        arr_16 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_11 [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 - 3]))));
                    }
                    arr_17 [18ULL] [i_1] [i_1] = max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (short)17819)))), ((~(((/* implicit */int) (short)-30996)))));
                    arr_18 [i_1] [i_2] = ((/* implicit */long long int) var_0);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -5483181012272460973LL)) ? (max((((/* implicit */int) ((((/* implicit */int) (short)-17819)) > (((/* implicit */int) var_8))))), ((~(((/* implicit */int) var_0)))))) : ((((((~(((/* implicit */int) var_15)))) + (2147483647))) >> (((((/* implicit */int) var_8)) - (45433))))))))));
    var_24 = ((/* implicit */unsigned long long int) (unsigned short)62516);
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */int) (unsigned short)2998)) > (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_9))))))))))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_14), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) var_15)))))))) ? (((/* implicit */int) var_3)) : ((((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) var_9))))));
}
