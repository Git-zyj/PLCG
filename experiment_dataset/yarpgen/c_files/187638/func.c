/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187638
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_3))));
    var_13 &= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6047985821693495681LL)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_10))))) : (var_1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 -= ((/* implicit */unsigned char) arr_2 [i_2]);
                    var_15 = ((/* implicit */int) ((unsigned long long int) ((-6047985821693495682LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    arr_11 [i_2] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)125))) < (((((-6047985821693495699LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)7)) - (7)))))))) + (((/* implicit */int) ((((/* implicit */_Bool) (signed char)1)) || (((/* implicit */_Bool) ((((/* implicit */int) (short)16659)) << (((((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_0])) + (53)))))))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-1))) ? (((/* implicit */unsigned long long int) ((6047985821693495680LL) + (-6047985821693495680LL)))) : (((unsigned long long int) -6047985821693495699LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) > (-6047985821693495680LL)))))) : ((~(((unsigned long long int) 6047985821693495682LL))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_2);
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
}
