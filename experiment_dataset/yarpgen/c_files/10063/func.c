/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10063
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) (unsigned short)19544))))) / (min(((-(var_8))), (((((/* implicit */_Bool) (short)-10975)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46006))) : (var_8)))))));
                arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((8332534476350981438ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))))) & (((/* implicit */int) var_5))));
                arr_5 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)1536)) ? (((/* implicit */int) (unsigned short)60256)) : (((/* implicit */int) (unsigned short)5291))))))), (var_19)));
            }
        } 
    } 
}
