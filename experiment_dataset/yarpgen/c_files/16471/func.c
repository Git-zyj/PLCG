/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16471
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
    var_19 += ((/* implicit */short) var_16);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) max((max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (arr_0 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46465)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-25038)) : (((/* implicit */int) (_Bool)1))))) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-23))))))));
                    arr_7 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(6U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9413530281705364171ULL)) ? (arr_4 [i_0] [(_Bool)1] [17U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((short) var_6));
                    var_21 += ((/* implicit */unsigned short) (_Bool)1);
                    var_22 = ((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned short) (signed char)103))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1704353955U)) || ((_Bool)1)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (14036655393056312451ULL)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))));
}
