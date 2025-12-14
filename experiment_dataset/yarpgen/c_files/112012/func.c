/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112012
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
    var_15 ^= ((/* implicit */long long int) ((max((var_5), (((/* implicit */int) ((((/* implicit */_Bool) -3624152098027135946LL)) || (((/* implicit */_Bool) 5200425437236127781LL))))))) << (((((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) var_10)))))))) - (2840470862U)))));
    var_16 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((var_2) ^ (var_5)))), (((unsigned long long int) var_12))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11313)) ? (-5200425437236127786LL) : (5200425437236127789LL)));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) var_12);
                    arr_8 [i_1] [i_1 - 2] [i_2 - 1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 1])) || (((/* implicit */_Bool) arr_5 [i_1 - 2] [i_2])))));
                    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_4 [i_1 - 2] [i_1] [i_2 - 1]) >= (((/* implicit */long long int) arr_3 [i_1] [i_0] [i_0])))))));
                    var_19 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (-2147483647 - 1))), (((arr_4 [i_2] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))), (((/* implicit */long long int) ((-5200425437236127782LL) < (((/* implicit */long long int) var_11)))))));
                }
            } 
        } 
    } 
}
