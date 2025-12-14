/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100340
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
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (2562106053U)));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((var_18) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))))))) ? (((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) var_4)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (var_8))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (var_12)))) ? ((-(var_1))) : ((+(var_12)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((max((1716742802U), (3183293402U))), (((((/* implicit */_Bool) 206060731U)) ? (4026531840U) : (2562106049U)))))), (((unsigned long long int) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))))));
                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_1 [i_0] [i_1]) <= (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                arr_4 [i_0] = ((/* implicit */_Bool) (+(((((unsigned long long int) (unsigned char)253)) / (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 2562106028U))))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_7)))))) ? (((int) (~(((/* implicit */int) arr_3 [i_0]))))) : (var_0)));
            }
        } 
    } 
}
