/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129359
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
    var_19 = ((/* implicit */int) var_11);
    var_20 = ((/* implicit */_Bool) 3389262383U);
    var_21 = ((/* implicit */long long int) var_15);
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) 1219168005))))) ? (3389262383U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48761))))) == (var_14))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = 983040;
                    arr_9 [(unsigned char)9] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (3389262399U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_2 [i_0]))))))))));
                    var_23 = ((/* implicit */long long int) max((var_23), (arr_4 [(signed char)12])));
                }
            } 
        } 
    } 
}
