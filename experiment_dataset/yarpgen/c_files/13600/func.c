/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13600
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */long long int) var_5);
                            arr_11 [i_3] [i_0] = ((arr_9 [i_3] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1 + 1] [i_0])) - (((/* implicit */int) (signed char)67))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-67)) ^ (((/* implicit */int) var_4)))))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3928577097U)), (13879702875121597338ULL)))))))) < (arr_9 [i_4] [i_1 + 1]))))));
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4922260092303314494LL)) ? ((~(((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) : (min((((/* implicit */int) (signed char)86)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)242))))))));
                }
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((var_1) + (1384781383692538331LL)))))), (var_9))), (((/* implicit */unsigned int) ((short) ((((/* implicit */int) (signed char)-124)) >= (var_0)))))));
    var_13 = min((((/* implicit */long long int) var_6)), (((var_7) - (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_3))))))));
    var_14 = ((/* implicit */long long int) var_0);
}
