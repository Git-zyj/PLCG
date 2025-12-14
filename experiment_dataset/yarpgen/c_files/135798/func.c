/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135798
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned char)0), ((unsigned char)18))))));
                    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    var_13 = min((((/* implicit */long long int) (-(((/* implicit */int) ((var_7) >= (((/* implicit */long long int) arr_3 [i_0] [i_0])))))))), (((long long int) min((2254798998U), (((/* implicit */unsigned int) (unsigned char)35))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (unsigned char)237);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) min(((-(var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)160)))))))) : (((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) -8575962222880941317LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)255)))))))));
    var_16 = ((/* implicit */unsigned char) max((-8575962222880941317LL), (((/* implicit */long long int) (unsigned char)239))));
}
