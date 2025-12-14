/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123721
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) * (max((412316860416LL), (arr_2 [i_0]))))), (((/* implicit */long long int) (unsigned char)35))));
                var_20 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_1 - 1])), (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) * (-412316860416LL))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 2])) == (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
    var_22 -= ((/* implicit */unsigned long long int) max((((long long int) -412316860431LL)), (((/* implicit */long long int) (unsigned char)255))));
    var_23 = ((/* implicit */unsigned char) var_10);
}
