/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128449
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_11 += ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_2] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_4 [i_3 - 2])) * (((/* implicit */int) arr_4 [i_3 - 2])))), (((/* implicit */int) arr_4 [i_3 + 1]))));
                                arr_14 [i_3] = ((/* implicit */unsigned char) ((long long int) arr_3 [i_4 + 2] [i_4]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */int) max((min((((/* implicit */unsigned short) (_Bool)0)), (var_9))), (((/* implicit */unsigned short) (unsigned char)181))))) <= ((+(((/* implicit */int) (_Bool)0))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)184)) ? (((((/* implicit */int) (unsigned char)74)) / (var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_0))) ? (var_5) : (var_5)))) != (max((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_2))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (((_Bool)1) ? (-8847410694294431250LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) == (((/* implicit */int) var_8))));
}
