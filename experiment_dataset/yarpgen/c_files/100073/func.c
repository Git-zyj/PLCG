/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100073
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
    var_12 &= ((short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_9)))) ? (min((var_10), (((/* implicit */long long int) var_0)))) : (var_3)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [2LL] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (4ULL)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_1 [i_0] [i_0 + 1]))));
                    arr_9 [(short)8] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (((!(arr_0 [i_0 - 1]))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_0) : (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 2]))) : (-8785280351656077918LL)));
        arr_10 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28508))) ^ (18446744073709551611ULL)));
    }
    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned char) var_3);
        arr_15 [i_3 - 1] [i_3 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) -701885801)) : (-6617401105174716897LL)))) ? (var_5) : (((arr_8 [i_3 - 2] [i_3] [i_3]) / (((/* implicit */long long int) var_0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (((/* implicit */int) (short)28508))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_5 [i_3 + 1] [(unsigned char)5] [(unsigned char)5])) / (((/* implicit */int) (_Bool)1))))))) : (((((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 2])))))));
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            var_16 = ((/* implicit */_Bool) arr_12 [(short)9]);
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_6 [4ULL] [i_4 - 1]))));
        }
    }
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(var_3)))), ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24083))) : (var_7)))))));
}
