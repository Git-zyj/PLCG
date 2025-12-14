/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140471
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
    var_20 *= ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((8170657804416243094ULL) & (((/* implicit */unsigned long long int) var_4))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1254721787)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((signed char) var_18)))));
                    var_23 = ((/* implicit */signed char) ((int) (_Bool)1));
                    var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 10276086269293308511ULL)) ? (((/* implicit */int) (unsigned short)11242)) : (((/* implicit */int) (signed char)-61))))));
                    var_25 = (_Bool)1;
                }
            } 
        } 
    }
}
