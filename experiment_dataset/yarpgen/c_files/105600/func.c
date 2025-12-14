/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105600
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
    var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 301235914)) ? (max((-301235904), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)0))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_1 [i_0] [12LL])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))) ? (-790532306103003611LL) : (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((unsigned short) -790532306103003611LL))) : (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-364239240) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_17 ^= (~(((/* implicit */int) (_Bool)1)));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_18 |= ((/* implicit */unsigned short) arr_7 [i_0] [5ULL] [5ULL]);
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_12 [(unsigned short)8] [i_2] [i_2] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (1164858329612180733ULL))))));
                        var_19 += ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -301235907)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (_Bool)1))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_11 [16ULL] [i_2] [(signed char)16] [i_2] [i_4] [i_4]), ((_Bool)1))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1])) >= (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1])))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_16 [i_0] [(_Bool)1] |= ((/* implicit */_Bool) arr_10 [17ULL] [i_2] [i_2 + 1] [i_2]);
                            arr_17 [i_0] [(short)17] [i_0] [i_0] [10LL] = (_Bool)1;
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_13 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2] [(_Bool)1])))) ? (((((/* implicit */int) max((var_8), (arr_4 [i_0])))) * (((((/* implicit */int) (short)18)) / (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (signed char)43))));
        }
        arr_18 [i_0] [i_0] = ((((/* implicit */int) (short)32758)) / (((/* implicit */int) (_Bool)1)));
    }
    var_21 ^= ((/* implicit */short) var_0);
}
