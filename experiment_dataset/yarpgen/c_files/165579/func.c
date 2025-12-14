/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165579
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(13231114059463948281ULL))))));
    var_18 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) max((var_15), (((/* implicit */unsigned int) var_9))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((8196301573266147239LL), (((/* implicit */long long int) 3531496284U))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) * (-8196301573266147239LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((-4445329657441784936LL), (((/* implicit */long long int) arr_2 [i_0] [i_2 - 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_15))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */int) ((long long int) (-(((/* implicit */int) var_16)))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */signed char) var_1);
    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (6310788067471671019ULL))))))), (min((((/* implicit */long long int) var_1)), (min((((/* implicit */long long int) var_10)), (var_12)))))));
}
