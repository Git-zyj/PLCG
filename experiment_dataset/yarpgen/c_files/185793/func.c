/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185793
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
    var_19 = ((/* implicit */short) (-(var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (36028779839094784ULL))), (((/* implicit */unsigned long long int) (+(-8500402576252008386LL))))));
                var_20 = ((/* implicit */signed char) (-(((((var_5) <= (((/* implicit */int) arr_4 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))) : ((+(var_6)))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) <= (((((36028779839094799ULL) <= (((/* implicit */unsigned long long int) 8500402576252008359LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)137)) && (((/* implicit */_Bool) 36028779839094784ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))));
            }
        } 
    } 
}
