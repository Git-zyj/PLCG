/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161593
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((unsigned long long int) arr_0 [i_2])) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1))))))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */short) (unsigned char)98);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) min((min((((/* implicit */int) (unsigned short)0)), (var_14))), (((/* implicit */int) (_Bool)0))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_4))) * (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_1)) ? (var_6) : (var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) var_1))))));
}
