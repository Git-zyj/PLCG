/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139764
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned short) (short)127)))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1401760854) % (1401760854)))) ? (14LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1929532348)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) : (3573827954U))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_2 [i_2])))))) != (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))) : (var_8)))))) * (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_0 - 1] [i_1]))));
                    var_19 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1 - 3]);
                    var_20 *= ((/* implicit */unsigned long long int) var_16);
                    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 1929532348)), (11803983060564169701ULL)));
                    arr_11 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(3541415742U)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_1);
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_11))));
}
