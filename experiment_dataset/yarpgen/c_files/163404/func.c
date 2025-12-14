/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163404
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) var_14)), (var_4)))) < (var_8))))) == (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)53283))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (256542859U)))))));
        var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (256542862U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) var_2);
                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_1] [i_2])) != (max((-7025244770677413567LL), (((/* implicit */long long int) var_13)))))))));
                arr_9 [i_1] [i_2] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) -7025244770677413567LL)) && (((/* implicit */_Bool) (unsigned short)59500))))) : (((((/* implicit */int) var_15)) << (((var_0) - (856741922832642135ULL))))))));
                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-36)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)33237))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_13))) * (var_5))))));
}
