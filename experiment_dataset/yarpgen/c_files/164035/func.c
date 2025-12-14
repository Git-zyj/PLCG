/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164035
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_12 [i_2] [i_1 + 3] [i_2] [i_0] = ((/* implicit */long long int) var_1);
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4080)) ? (5854754237532080029LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23431)))));
                            arr_13 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) var_5);
                            arr_14 [i_0] [i_2] [i_2] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -6611425339791529452LL)) ? (((/* implicit */int) (short)-23433)) : (((/* implicit */int) (unsigned char)149))));
                            var_14 = ((/* implicit */short) (-(5854754237532080010LL)));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((var_1) - (max((((((/* implicit */int) (short)-23431)) - (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (_Bool)1))))));
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_0);
}
