/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148708
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
    var_17 += ((/* implicit */short) min((((/* implicit */int) (unsigned char)207)), (((int) (signed char)-118))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((((min((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */int) (unsigned short)63)))) ^ (((/* implicit */int) (unsigned short)4096)))), (((min(((_Bool)0), ((_Bool)1))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) (_Bool)0)))))));
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (short)29290))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */unsigned char) arr_5 [i_1])))))))), (min((((/* implicit */unsigned int) ((unsigned char) arr_5 [(short)10]))), (max((500056073U), (((/* implicit */unsigned int) arr_2 [i_0]))))))));
            }
        } 
    } 
}
