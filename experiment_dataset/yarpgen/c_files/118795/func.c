/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118795
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
    var_12 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((max((arr_2 [15LL]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))))) ^ (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 8943985508529471106LL)) && (((/* implicit */_Bool) arr_2 [i_0])))) ? (((((/* implicit */int) var_10)) << (((arr_3 [i_0] [i_1]) - (62187735))))) : (((var_5) ? (((/* implicit */int) var_5)) : (2047))))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2047)) ? (-2047) : (max((((/* implicit */int) (unsigned char)237)), (2047)))));
                var_15 = ((/* implicit */int) arr_0 [(_Bool)1]);
            }
        } 
    } 
    var_16 -= (((-(((/* implicit */int) (unsigned short)57468)))) | (((/* implicit */int) var_0)));
}
