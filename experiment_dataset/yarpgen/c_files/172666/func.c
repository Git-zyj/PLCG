/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172666
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
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) 2168047898U)) : (-4344183303226289076LL)))) : ((+(arr_3 [i_1] [i_1])))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_8 [(_Bool)0] [i_3] [i_2 - 1] [(_Bool)1] [(_Bool)0])), (min((arr_6 [12ULL] [i_0 + 3] [i_0 + 3] [12ULL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_1] [8LL] [i_3])) || (((/* implicit */_Bool) arr_9 [8LL] [i_1] [i_2 - 1] [i_3] [i_4] [i_4])))))))));
                                arr_11 [8ULL] [0] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((signed char) ((min((var_0), (arr_3 [12U] [12U]))) % (((arr_10 [i_0] [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 3]) << (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))) : (var_2)))));
    /* LoopNest 2 */
    for (signed char i_5 = 4; i_5 < 18; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (_Bool)1)) % (1323578197))));
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        {
                            arr_22 [i_5] [i_7] [15LL] = ((/* implicit */unsigned long long int) ((unsigned int) ((((arr_12 [6LL]) || (arr_21 [10] [10] [i_5 - 1] [i_5 - 1] [1U]))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_5 - 1] [i_5 - 1])), (var_9)))))));
                            var_16 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (-1LL)));
}
