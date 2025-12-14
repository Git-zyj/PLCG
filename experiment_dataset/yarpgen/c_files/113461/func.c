/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113461
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) var_6);
                var_14 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)32763)), (-1214699665)));
                arr_7 [i_0] = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (short)20321))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), ((-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9519181584735045919ULL)) ? (((/* implicit */int) (short)-20321)) : (((/* implicit */int) (_Bool)1))))), (2854892513895675310ULL)))))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)2])) ? (((/* implicit */long long int) min((arr_1 [(signed char)0]), (arr_1 [14ULL])))) : (max((((/* implicit */long long int) (signed char)101)), (5204210461420055231LL))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                arr_15 [i_2] [i_2] = ((/* implicit */long long int) var_8);
                var_17 *= ((/* implicit */long long int) var_4);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (_Bool)1);
    var_19 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
}
