/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120617
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
    var_17 -= ((/* implicit */unsigned long long int) -7227577045911746025LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) var_1)), (1559337401186840389ULL))));
                    var_18 = ((/* implicit */int) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18812)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)65535))))) / (min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2] [i_4])), (3710310222U))))));
                                var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)65514))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) (unsigned short)21)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
