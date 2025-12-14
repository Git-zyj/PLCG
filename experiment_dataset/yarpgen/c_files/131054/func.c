/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131054
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_20 |= ((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)89)) - (((/* implicit */int) (unsigned char)89)))), (((int) 2903648510985239680LL))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-1))));
                        var_22 = ((/* implicit */_Bool) arr_7 [i_3]);
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 458663075)))))) < (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned long long int) min((533613992557969471LL), (((/* implicit */long long int) -458663075))))) : (arr_4 [i_0 - 1] [i_1])))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_5 [i_0 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [10ULL] [i_2] [i_3] [i_1] [(short)2]))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (arr_4 [2LL] [i_0 + 1]) : (arr_4 [i_2] [i_1])))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2])))) == (((/* implicit */int) max((arr_9 [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 1]), (arr_9 [10] [i_0 - 2] [i_0 + 2] [i_0 + 1]))))));
    }
    for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) arr_14 [i_4]);
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4])) || (((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_5 + 2])))));
            var_27 = arr_16 [i_5];
        }
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((arr_15 [i_4] [i_4]) && (((/* implicit */_Bool) arr_17 [14ULL] [i_4]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) | (arr_16 [i_4]))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_14 [i_4 - 1])) : (arr_17 [12] [i_4 + 2])))))))));
    }
    var_29 = ((/* implicit */unsigned int) var_1);
    var_30 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) var_2))))) : (((/* implicit */int) var_3)));
    var_31 -= ((/* implicit */signed char) var_15);
}
