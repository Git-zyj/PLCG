/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162264
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))));
                    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_0])) ? (min((-8446561323324313040LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0])), (1152921496016912384LL)))) ? (((/* implicit */int) ((signed char) (unsigned char)255))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61756))))))))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */signed char) ((_Bool) -1152921496016912384LL));
}
