/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131531
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
    var_15 = ((/* implicit */unsigned char) var_3);
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_11) ? (((/* implicit */int) (short)-3379)) : (((/* implicit */int) var_9)))) < (((/* implicit */int) max((var_2), (var_2)))))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) & (var_10)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = (+(((((var_4) + (9223372036854775807LL))) << (((arr_1 [i_0 + 1]) - (1857224095))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_1 [i_0]) < (arr_1 [(signed char)4]))) ? ((-(((/* implicit */int) (unsigned char)39)))) : (((/* implicit */int) (unsigned char)172))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29))) : (15607835069788434756ULL)))) ? (((((/* implicit */_Bool) (unsigned short)28672)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5084))) : (2901427018U))) : (((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) ? (var_13) : (((/* implicit */int) var_11)))))))));
        arr_3 [i_0] = max((max((2838909003921116853ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_1 [(signed char)10])));
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_1 [i_0 - 1])))) >= ((+(-1568992661442370153LL))))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) arr_0 [16ULL] [i_1]);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */short) arr_1 [i_1]);
                                arr_16 [8LL] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (unsigned short)46589)))) >> (((((/* implicit */int) arr_14 [i_1] [i_2] [i_2] [i_4] [i_5])) - (37)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (arr_7 [5] [(signed char)0] [(signed char)0]) : (((/* implicit */unsigned long long int) 2901427023U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-31))))) : ((-(var_8))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)111))));
                }
            } 
        } 
        var_20 *= ((/* implicit */unsigned char) (-(arr_4 [i_1] [i_1])));
        arr_17 [i_1] = ((/* implicit */long long int) (short)2040);
    }
}
