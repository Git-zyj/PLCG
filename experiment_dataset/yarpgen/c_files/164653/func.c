/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164653
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) var_4);
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((-(arr_2 [i_0]))))) == (max((((/* implicit */int) var_15)), ((-(1232400959)))))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) min((min((max((var_1), (var_5))), (arr_0 [i_1]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_1 + 1])), (arr_3 [i_1 + 1]))))));
        var_19 -= ((/* implicit */unsigned int) arr_0 [i_1]);
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 7; i_5 += 1) 
                        {
                            var_20 = ((long long int) (~(-1232400959)));
                            var_21 |= ((/* implicit */long long int) (_Bool)1);
                            arr_16 [i_1] [i_2] [i_1] [i_4] [i_2 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */_Bool) arr_3 [i_1 - 1])) || (((/* implicit */_Bool) var_5))))))))))));
                        }
                        arr_17 [i_1 + 1] [i_1] [i_2] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) max((((/* implicit */unsigned int) -1232400959)), (4294967285U)))) | (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4] [i_3] [i_3] [i_2] [i_1]))))))) % (arr_0 [i_1 - 1])));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (1671659760762889983LL)))) > (1232400956)));
    }
    var_24 &= ((/* implicit */signed char) ((unsigned short) (_Bool)0));
}
