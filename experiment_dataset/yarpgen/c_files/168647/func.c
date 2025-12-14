/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168647
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
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (361669610804202992ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((361669610804202992ULL) - (361669610804202976ULL)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_14))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
    var_21 = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) var_12)) : (var_10))), ((+(((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (361669610804202980ULL))))))), (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-31783)) : (((/* implicit */int) var_17)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_18))))))))))));
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_19)) | (((/* implicit */int) (_Bool)1))))) || (var_5))) ? (max((((arr_6 [i_0] [(_Bool)1] [i_2] [i_2]) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))))) : ((-(((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (signed char)-120)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((/* implicit */unsigned int) (!((_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) -793813766)) : (1148187529U)))) ? (((((/* implicit */_Bool) var_4)) ? (4092132922U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5))))))))))));
}
