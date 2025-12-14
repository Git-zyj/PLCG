/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12438
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
    var_13 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (3919584913896697077ULL)))))))));
    var_14 = ((/* implicit */unsigned long long int) min(((~(max((7304437116635739626LL), (((/* implicit */long long int) (unsigned short)30724)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) || (var_11))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)12))))) : (var_10))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((12355492864264030959ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -172231247))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) var_0);
                    var_17 = ((/* implicit */long long int) 3484166868U);
                }
            } 
        } 
    }
}
