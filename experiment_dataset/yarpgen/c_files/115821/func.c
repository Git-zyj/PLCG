/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115821
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
    var_11 += ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)81)) + (var_0)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (var_6))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] &= ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) max((((/* implicit */int) max((arr_7 [i_0 + 2] [i_0 - 1] [i_3]), (arr_1 [i_0 + 2])))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (arr_14 [i_0])))) ? (((arr_3 [i_1] [i_1] [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)1))))));
                                arr_15 [i_0 - 3] [(signed char)1] [i_0 - 3] [i_2] [(signed char)1] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_4 [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_1] |= ((/* implicit */long long int) var_1);
                arr_17 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((arr_2 [i_1]) ^ (((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [10ULL] [10ULL]))))))) <= (max((((/* implicit */unsigned long long int) ((1683448711) != (var_0)))), (((((/* implicit */_Bool) arr_0 [9ULL] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
}
