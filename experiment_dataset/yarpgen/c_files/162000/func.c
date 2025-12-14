/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162000
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
    var_12 |= var_3;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [4U] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) var_1)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) ((arr_5 [i_1 + 1] [i_1 + 2]) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))));
            var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_1 - 1]))) || ((_Bool)1)));
            var_15 = (-(((/* implicit */int) arr_6 [i_1 - 1] [i_1] [9U])));
            arr_8 [i_0] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) ((arr_5 [i_1 + 2] [i_1 + 1]) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))));
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((signed char) var_9))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0))))))) / (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_2])) : (((/* implicit */int) arr_6 [(short)10] [i_2] [i_2])))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                var_17 = ((/* implicit */signed char) min((((arr_9 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((unsigned int) arr_2 [i_2] [i_2]))));
                var_18 = ((/* implicit */_Bool) 2975100054U);
                var_19 = max((((((/* implicit */int) arr_10 [i_2] [i_3])) >= (((/* implicit */int) ((short) arr_9 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((signed char) var_2))))));
                var_20 = ((/* implicit */int) 3762506267635483689LL);
            }
        }
        arr_13 [13U] [13U] = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */int) var_11)))) <= (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_3)))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */int) (unsigned short)41335)) : (((/* implicit */int) (unsigned short)48891))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_15 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) (short)17877))));
        var_22 &= ((/* implicit */signed char) min((arr_15 [i_4]), (((/* implicit */unsigned int) ((int) (~(arr_15 [i_4])))))));
    }
}
