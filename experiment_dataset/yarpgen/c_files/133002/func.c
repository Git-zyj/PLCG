/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133002
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) max((2367974808U), (((/* implicit */unsigned int) 1713930421))))) : (var_10)));
                    var_18 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]);
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(1926992488U))) : (1926992487U)))) ^ (max((((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18446744073709551611ULL))), (((/* implicit */unsigned long long int) var_11)))))))));
                        var_21 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    }
                    for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (((+(((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_16))))))) > (((/* implicit */long long int) ((/* implicit */int) ((min((10360436768110313434ULL), (((/* implicit */unsigned long long int) var_9)))) <= (1617226331551232249ULL)))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((int) (+(arr_6 [i_0] [(unsigned char)12] [i_2] [i_4 + 1])))))));
                    }
                    arr_10 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) > (((/* implicit */long long int) 593209317)))))) >= (((unsigned int) 16829517742158319380ULL))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)6]))) != (min((((/* implicit */unsigned long long int) arr_3 [14ULL] [i_1 - 1] [(unsigned char)17])), (33ULL))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) var_11))));
}
