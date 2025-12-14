/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117833
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1649099288)) ? (((((/* implicit */_Bool) 3217008636665526902LL)) ? (1055078986848755303LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : ((~(min((-3217008636665526897LL), (((/* implicit */long long int) -1649099278))))))));
                                arr_13 [i_4] [i_3] [i_2] [i_3] [i_3] = var_1;
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((+(arr_0 [i_1]))), (((((/* implicit */_Bool) (signed char)7)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) -1837496222)) || (((/* implicit */_Bool) (unsigned char)121)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) 1120770416);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_10))) > (((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)38901)))))))) >= (max((((/* implicit */long long int) var_10)), (var_3)))));
}
