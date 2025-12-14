/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134866
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
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) var_5)), ((((-(var_15))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56)))))));
    var_17 &= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)65)), (var_11)))), (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_3 [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2])) ? (arr_2 [i_0]) : (arr_2 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))) : (((long long int) max((((/* implicit */unsigned int) (_Bool)0)), (arr_10 [i_0] [i_0]))))));
                                arr_14 [i_0] [i_1] [(signed char)9] [i_3] [11LL] = ((/* implicit */long long int) (-(((/* implicit */int) ((max((arr_4 [i_0]), (((/* implicit */long long int) var_9)))) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_0] [(unsigned short)12]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 2781422169U))) >> ((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 832299048U)))))))));
    var_21 = (-(var_14));
}
