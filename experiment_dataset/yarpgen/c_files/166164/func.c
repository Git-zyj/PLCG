/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166164
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
    var_20 = ((((/* implicit */_Bool) var_11)) ? (min((var_0), (((/* implicit */long long int) var_1)))) : (var_17));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) (unsigned char)0);
                    var_22 = ((/* implicit */unsigned long long int) var_17);
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_4) > (((/* implicit */int) arr_3 [i_0]))))), (arr_5 [i_0])))) ? (((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((short) (unsigned char)0))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_3)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(var_5)))), (((unsigned long long int) var_10))));
    var_25 = ((/* implicit */int) var_13);
}
