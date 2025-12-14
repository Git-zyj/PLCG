/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161986
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) : (576390383559245824ULL)))) ? (((/* implicit */int) max((((arr_3 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))))), ((_Bool)1)))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) < (arr_3 [i_0] [i_1])))), (max((((/* implicit */short) (unsigned char)40)), (arr_1 [8ULL]))))))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (_Bool)1))));
                arr_5 [8ULL] [8ULL] |= ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((int) -839046140))), (((var_8) >> (((-839046156) + (839046160))))))), (((/* implicit */unsigned long long int) arr_1 [4]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_14)), (((unsigned char) var_16))))) ? (((((/* implicit */unsigned long long int) (-(839046155)))) - (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (max((((/* implicit */int) max(((_Bool)1), (var_17)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) var_17))))))));
}
