/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130544
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
    var_10 = ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) var_9)) : (max((((/* implicit */unsigned long long int) (short)-18)), (((((/* implicit */_Bool) (unsigned char)252)) ? (18446744073709551598ULL) : (var_8))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_11 += ((/* implicit */unsigned int) (((~(((((/* implicit */unsigned long long int) 4286578688U)) * (1597183570279809088ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_2] [i_1])) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) 3250631737U))) > (((/* implicit */int) ((((/* implicit */int) (short)1)) < (((/* implicit */int) (unsigned char)254))))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) max((var_3), (((/* implicit */unsigned long long int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)5), (arr_5 [i_0] [i_3 - 1] [i_2]))))) : (((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [(unsigned char)2] [18ULL]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))) ? (arr_3 [i_3 - 1]) : (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_2] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (var_2))))))));
                        var_14 ^= ((unsigned long long int) (~(((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_3] [i_3 + 2]))));
                        arr_8 [i_2] [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned char) (+(min((arr_0 [i_1]), (arr_1 [i_2]))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 3; i_4 < 18; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [i_2] [(short)10] [(unsigned char)18])) || (((/* implicit */_Bool) 802198902U)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 16; i_5 += 1) 
                        {
                            var_16 *= ((/* implicit */unsigned int) arr_1 [i_1]);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4] [i_2]))) : (10237346604096565400ULL)));
                        }
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned long long int) 3492768393U)) : (1238369748831848651ULL)));
                    }
                }
                arr_14 [i_0] = ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_19 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)2434)))) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) -1LL)), (1238369748831848651ULL))) - (1238369748831848627ULL)))))) | (min((var_4), (((/* implicit */unsigned long long int) var_0))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_1), (((((/* implicit */_Bool) (short)32760)) || (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) (_Bool)1))));
}
