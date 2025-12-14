/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124925
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
    var_20 = ((/* implicit */unsigned long long int) var_0);
    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) || ((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_9))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((arr_1 [i_0]) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((long long int) (signed char)26));
        arr_4 [3] = ((/* implicit */unsigned long long int) var_12);
    }
    for (int i_1 = 4; i_1 < 14; i_1 += 1) 
    {
        arr_9 [i_1] = min((min((arr_5 [i_1 - 4]), (arr_5 [i_1 - 1]))), (arr_5 [i_1 + 1]));
        arr_10 [i_1] = (!(((/* implicit */_Bool) 14075718379667964004ULL)));
    }
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) 1089861500)))));
        arr_14 [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) (unsigned char)221))), (arr_0 [i_2 - 1] [i_2 - 1])));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            arr_18 [i_2 + 1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_2 - 1] [5LL]))))) ? (((/* implicit */unsigned long long int) ((long long int) ((unsigned short) 0ULL)))) : (((unsigned long long int) (+(((/* implicit */int) var_19)))))));
            var_23 |= ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-14))))) ? (((/* implicit */long long int) arr_5 [i_2 - 1])) : (min((var_1), (((/* implicit */long long int) var_18)))))) ^ (min((var_7), (((/* implicit */long long int) arr_1 [i_2 - 1])))));
        }
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) max((((arr_0 [i_2] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) var_19))))), (((/* implicit */long long int) ((unsigned int) arr_1 [i_2 - 1])))));
            var_25 = ((/* implicit */signed char) arr_19 [i_2 + 1] [i_2]);
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (int i_6 = 2; i_6 < 10; i_6 += 2) 
                {
                    for (int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_28 [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2] [i_4])) ? (((int) arr_7 [13ULL] [i_2 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_4] [i_5] [i_5])), (arr_7 [i_2] [i_2 - 1])))))))));
                            arr_29 [i_6] [(unsigned short)5] [i_2] = ((/* implicit */int) max((arr_26 [i_6 + 2] [i_5] [i_5]), (((/* implicit */unsigned short) var_13))));
                        }
                    } 
                } 
            } 
        }
    }
}
