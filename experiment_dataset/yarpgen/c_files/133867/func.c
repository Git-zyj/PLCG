/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133867
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (1375975277U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))));
    var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : (var_14))), (((/* implicit */long long int) 7799746U))));
    var_21 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (1648415387U)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) 244846658U);
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(-6139865453628857134LL))))));
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2 + 1] [i_4] [i_2]))));
                            var_26 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [7U] [i_0]);
                        }
                    } 
                } 
            } 
            var_27 &= ((/* implicit */_Bool) ((arr_1 [i_1] [i_0]) >> (((arr_1 [i_0] [i_0]) - (9130324479839290485LL)))));
        }
        var_28 = ((/* implicit */long long int) (-(arr_11 [i_0] [i_0])));
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        var_29 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_5] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5]))))))) : (((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [0U] [i_5]))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [13LL] [i_5]))))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5]))) - (1622136484U))))))));
        var_30 = ((/* implicit */unsigned int) arr_14 [i_5] [i_5]);
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((3318240635U) - (244846658U))))));
    }
}
