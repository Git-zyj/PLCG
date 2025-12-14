/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174661
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) 4U)) ? (-6622044862899027112LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)4]))))), (((/* implicit */long long int) ((_Bool) 1619530062U))))), (((/* implicit */long long int) arr_4 [i_0] [13LL] [i_0]))));
                var_11 = (~(((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2])) : (var_8))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) 6622044862899027114LL);
    var_13 = ((/* implicit */long long int) var_6);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-12))))) ? (((/* implicit */long long int) max((((int) var_0)), (((/* implicit */int) ((signed char) 6622044862899027116LL)))))) : ((+(-6622044862899027109LL))))))));
    var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((+(((((/* implicit */_Bool) (signed char)91)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
}
