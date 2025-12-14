/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114988
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
    var_18 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) 11ULL))));
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((25ULL) * (arr_1 [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 = ((unsigned long long int) arr_4 [i_0] [i_1] [i_2 + 1] [i_3]);
                        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [4ULL] [i_1]))) : (arr_7 [i_0] [i_1] [i_2] [i_2 + 1] [i_2 + 1] [i_3])));
                        arr_9 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_2 + 1] [i_1])));
                    }
                }
            } 
        } 
    } 
    var_24 = var_17;
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_26 *= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    var_27 = (+(14569251294684197132ULL));
                }
            } 
        } 
    } 
}
