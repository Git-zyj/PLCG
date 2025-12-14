/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122433
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
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) -784523990147517013LL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_1]))))));
                                var_17 |= ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_7))))), ((~(-784523990147517014LL))))), (((((/* implicit */_Bool) arr_10 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 1]))) : (arr_8 [i_1 + 1] [i_2] [i_3] [i_4 + 1])))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-784523990147517014LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)85))))))) ^ (min((((/* implicit */unsigned long long int) -784523990147517008LL)), (14938239672854181593ULL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */int) var_2)) > (((/* implicit */int) var_11)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))));
    var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3508504400855370022ULL))) * (17592186044415ULL))) : (var_12)));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((min(((-(7907304139026509125ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
}
