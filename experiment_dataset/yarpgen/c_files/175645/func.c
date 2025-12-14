/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175645
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
    var_12 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1]))))) : (((((/* implicit */_Bool) var_8)) ? (var_8) : (var_8)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(0ULL))))));
            arr_5 [i_1] [i_1] [i_1] &= var_9;
            var_15 = ((int) ((unsigned short) var_11));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((arr_2 [i_2]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) * (min((var_9), (var_1))))));
        var_17 = ((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2]);
        arr_9 [(unsigned short)4] [(unsigned short)4] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_2] [(unsigned short)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [12LL]))) : (var_9))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [(unsigned short)10])) ? (((/* implicit */int) arr_6 [i_2] [6U])) : (((/* implicit */int) arr_6 [i_2] [4])))))));
    }
    for (int i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_11))));
        var_19 = ((/* implicit */signed char) var_10);
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            arr_15 [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [8] [i_3])) ? (8960836628736160903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))) ? (((arr_2 [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
            arr_16 [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [10LL] [i_4] [i_4])) ? (min((((/* implicit */long long int) var_4)), (arr_3 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)23864)) < (var_8)))))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_3 [i_3 - 1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_4] [i_3]))) + (var_1)))))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) arr_18 [i_5] [i_3 - 2] [i_3 - 1])) ? (2997389762U) : (((/* implicit */unsigned int) -1642800992)));
            arr_22 [i_3] [i_5] = ((/* implicit */unsigned long long int) var_8);
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3 - 2] [i_3] [i_5])) ? (arr_1 [i_3 + 1] [i_3 + 1]) : (arr_1 [i_3 - 1] [i_3 - 1])));
        }
    }
    var_21 ^= ((/* implicit */signed char) var_9);
}
