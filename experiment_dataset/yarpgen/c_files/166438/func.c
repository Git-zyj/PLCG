/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166438
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) (~((~(((/* implicit */int) ((short) (short)-4831)))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((min((((unsigned long long int) (unsigned char)0)), (((/* implicit */unsigned long long int) max((arr_0 [(signed char)4]), (((/* implicit */unsigned char) (signed char)13))))))) | (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)28548)))))))))));
        arr_2 [(short)13] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((arr_1 [(unsigned char)5]) ^ (arr_1 [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (4218491836U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) % (((/* implicit */long long int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_0 [i_0])) << (((6945910069418421671LL) - (6945910069418421666LL))))) : ((+(arr_1 [i_0]))))))));
        var_14 = ((/* implicit */unsigned char) ((arr_1 [i_0]) / (((/* implicit */int) arr_0 [i_0]))));
        var_15 = min((((/* implicit */unsigned long long int) arr_1 [(_Bool)0])), (max((10523383409881590714ULL), (((/* implicit */unsigned long long int) (unsigned char)253)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            {
                var_16 = ((/* implicit */short) arr_0 [i_1]);
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (signed char i_5 = 3; i_5 < 8; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) arr_7 [5U]);
                                var_18 = arr_0 [i_4];
                                var_19 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (arr_15 [9U] [(unsigned char)7] [i_5]) : (((/* implicit */long long int) arr_13 [(short)3] [i_2] [i_3] [i_4] [i_2]))))) ? (((((/* implicit */_Bool) 518486673U)) ? (arr_12 [i_1] [(_Bool)1] [(short)11] [i_4] [(short)4]) : (arr_12 [i_1] [i_1] [i_3] [3] [i_5]))) : (((arr_10 [10U]) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned short)7] [i_2] [i_2] [(unsigned char)5])))))))));
                                arr_16 [i_1] [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3] [(signed char)0] [i_5 + 2])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) % (arr_12 [i_1] [i_2] [i_3] [2U] [i_5])))), (min((((/* implicit */unsigned long long int) (unsigned short)44076)), (13498463433971950093ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1]))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1] [i_2]))))), (((((((/* implicit */_Bool) arr_8 [3U] [i_1] [i_2])) ? (arr_10 [i_2]) : (arr_12 [i_1] [i_1] [i_1] [i_2] [i_2]))) + (((/* implicit */long long int) ((int) var_7))))))))));
                arr_17 [(signed char)0] [9LL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_10 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)3] [i_2])) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) : (((((/* implicit */int) arr_6 [(short)9] [i_2] [i_2])) / (((/* implicit */int) arr_6 [i_1] [i_1] [i_2]))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_4)), (1182352358U)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) (-(((/* implicit */int) var_8))))))));
    var_22 = ((/* implicit */short) max(((~(((/* implicit */int) ((unsigned char) var_4))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) (short)17268))))));
    var_23 = ((/* implicit */int) ((((long long int) ((7923360663827960902ULL) | (((/* implicit */unsigned long long int) -1759928334764189973LL))))) / ((~(var_0)))));
}
