/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129576
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
    var_12 = ((/* implicit */unsigned int) (+(min(((~(1685622789270604901LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */_Bool) var_11);
                        arr_10 [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1] [i_0] [i_0])))))))) : (1685622789270604923LL)));
                    }
                    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62020))) <= (-1685622789270604901LL)))))))), (((unsigned long long int) -1685622789270604923LL))));
                    var_15 -= ((/* implicit */int) min((((unsigned short) min((arr_1 [i_1]), (((/* implicit */unsigned int) var_6))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_0])), (125829120U)))) && (((/* implicit */_Bool) ((int) var_6))))))));
                }
            } 
        } 
        var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)112)) << (((((/* implicit */int) var_0)) - (26638)))))))));
    }
}
