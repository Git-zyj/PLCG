/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164837
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
    var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_9)) : (5331401425588690628ULL)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), ((!((!(((/* implicit */_Bool) var_15))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_1] [i_2])) * (((arr_8 [i_2] [8LL] [i_2]) % (arr_8 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))) ? ((+(arr_5 [i_0] [i_0] [(short)15]))) : ((-(((/* implicit */int) arr_2 [(signed char)6] [i_0])))))))));
        arr_9 [7ULL] [13ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [5U])), (((((/* implicit */unsigned int) arr_5 [2ULL] [2ULL] [2ULL])) / (1962117202U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((short)30636), (arr_0 [i_0] [7LL])))) && (((/* implicit */_Bool) var_13))))) : ((~(((/* implicit */int) arr_4 [0U]))))));
        var_23 = ((/* implicit */long long int) (+((-(arr_8 [10LL] [i_0] [i_0])))));
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) && (((/* implicit */_Bool) max((arr_10 [i_3]), (((/* implicit */long long int) (_Bool)1))))))))));
        var_25 = (_Bool)1;
    }
}
