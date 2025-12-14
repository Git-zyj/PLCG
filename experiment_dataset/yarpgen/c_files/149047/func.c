/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149047
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned short) ((((long long int) arr_2 [i_0] [i_0])) < (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) var_8);
                                var_20 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)28184))));
                                var_21 = ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((int) arr_9 [i_0] [i_4] [i_1] [i_3] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_10 [i_0] [14] [14])) % (((/* implicit */int) (signed char)-115)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) : (var_13));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned short) ((15444007211429929773ULL) - (((/* implicit */unsigned long long int) ((long long int) (unsigned char)34)))));
}
