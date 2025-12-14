/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100075
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
    var_20 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)10])) ? (((/* implicit */int) (signed char)-16)) : (520093696)))) ? (((/* implicit */int) ((-1) > (((/* implicit */int) (unsigned short)1229))))) : (((/* implicit */int) arr_3 [(_Bool)1] [(unsigned char)8])))))));
                arr_6 [12] [i_0] [12] |= ((/* implicit */_Bool) ((unsigned short) (signed char)3));
                var_22 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)50958)))))))) | (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) 2198956146688LL)) : (max((((/* implicit */unsigned long long int) 469762048U)), (7431395135577597941ULL)))))));
                arr_7 [10LL] [i_1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(8970477634788734412ULL)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)49152))))));
            }
        } 
    } 
}
