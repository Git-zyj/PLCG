/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127123
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */int) ((max((arr_9 [i_4] [i_4] [i_2 - 2] [i_2 + 2] [i_0 + 2]), (arr_9 [i_3] [i_3] [i_2 - 1] [i_2 - 1] [i_0 + 1]))) ? (max((242733453U), (((/* implicit */unsigned int) (unsigned char)128)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [14LL] [i_4] [i_4] [i_2 + 2] [i_0 - 1])), ((unsigned char)128)))))));
                                var_11 ^= ((/* implicit */unsigned int) max((((((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) arr_4 [6ULL] [(signed char)15])))) + (2147483647))) << (((min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2] [i_1])), (4052233843U))) - (247U))))), (((((((/* implicit */_Bool) 4052233843U)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)0)))) << (((((/* implicit */int) (unsigned char)112)) - (108)))))));
                                arr_14 [i_4] [i_3] [i_2] [i_2 - 1] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned short)36336))) ? (max(((((_Bool)0) ? (131071ULL) : (((/* implicit */unsigned long long int) 1083666566310802110LL)))), (((/* implicit */unsigned long long int) arr_10 [i_2 - 2] [i_1 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [3] [i_2] [i_1] [i_1] [i_0])))));
                                var_12 -= ((/* implicit */unsigned int) ((long long int) 18446744073709420545ULL));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) var_4);
                    arr_15 [1ULL] [6LL] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)60784)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min(((unsigned short)29288), (((/* implicit */unsigned short) (_Bool)1))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) arr_12 [i_1] [(unsigned char)9]))))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */signed char) var_1);
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) 185924360)), (4553426488136611647ULL))) : (((/* implicit */unsigned long long int) 694014621U))))));
}
