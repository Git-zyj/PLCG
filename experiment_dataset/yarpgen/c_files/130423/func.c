/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130423
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) arr_0 [(unsigned short)11] [i_1])) : (var_8))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1])) && (((/* implicit */_Bool) var_10)))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)42)) : (arr_2 [i_0] [i_1]))) == (((/* implicit */int) ((short) arr_2 [i_0] [i_1]))))))));
                var_19 = ((((/* implicit */_Bool) (~(((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_14))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_16))))), (max((var_15), (((/* implicit */unsigned int) arr_2 [i_0] [i_1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17768876160606573355ULL)) ? (((/* implicit */int) var_0)) : (1684364608)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2))) : (var_2))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)6952)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)51)))))))));
    var_21 -= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) max(((short)-32767), (((/* implicit */short) (_Bool)1))))))));
    var_22 = ((/* implicit */unsigned long long int) var_3);
    var_23 = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((((/* implicit */int) (unsigned short)2)) < (((/* implicit */int) var_9))))), (var_5))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
}
