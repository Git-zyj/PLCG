/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134342
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */signed char) max((((int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -1321982974))))), (((((/* implicit */_Bool) 2119647967)) ? (-1321982970) : (((/* implicit */int) (unsigned char)248))))));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) 2299416196U))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)32754))) < (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) 2902111423U)) : (((((/* implicit */_Bool) 1298227639)) ? (-4665426656040112069LL) : (((/* implicit */long long int) -1072074498))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_6);
}
