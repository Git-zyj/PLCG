/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104885
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((5953957318731232554LL) - (max((max((4611686014132420608LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 34399704U)))))))));
        arr_4 [i_0] [i_0] = ((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) var_2))))) & (((/* implicit */int) ((-5953957318731232555LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        for (short i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_13 [i_3] [i_2 + 2] [i_2 - 1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_1)) & (1002947850))), (((/* implicit */int) (signed char)-64)))))));
                    arr_14 [i_1] [7ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5953957318731232555LL)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (short)3611))));
                    arr_15 [i_1] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) -1817102498)), (-1LL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (short i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_7))));
                var_13 = ((/* implicit */_Bool) max((var_13), ((!((_Bool)1)))));
                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) 5953957318731232570LL)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2675474565951715097ULL))))))));
            }
        } 
    } 
}
