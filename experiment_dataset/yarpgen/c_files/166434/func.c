/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166434
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [14ULL] = ((/* implicit */long long int) (+(arr_0 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) 1569350987U);
            arr_7 [i_1] [i_1] [(signed char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 24U)) ? (16106127360ULL) : (((/* implicit */unsigned long long int) 67817612))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (((/* implicit */_Bool) 1317175365U)))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                arr_12 [i_1] = ((/* implicit */unsigned int) ((int) arr_11 [i_1 + 1] [i_1] [i_1 + 1]));
                var_19 &= ((arr_8 [i_1 + 1] [i_1 - 2]) && (((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1]))) - (arr_0 [i_1 + 1] [i_1 + 1]))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 - 1])) + (arr_0 [i_1 - 1] [i_1 - 1])));
            }
        }
        for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            var_22 &= ((((/* implicit */_Bool) 18446744057603424255ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(short)18] [i_3])) || (((/* implicit */_Bool) arr_4 [10]))))) : (-67817606));
            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_3])) ? (arr_0 [i_3 - 1] [i_3 - 1]) : (16106127349ULL)));
            var_24 = ((/* implicit */unsigned int) max((var_24), (2977791909U)));
            var_25 = ((/* implicit */unsigned short) ((short) (~(2102694058U))));
        }
    }
    var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -67817598)) ? (16106127358ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8088)))))) || (((/* implicit */_Bool) (-(var_3)))))))) : ((+(((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) : (10U)))))));
}
