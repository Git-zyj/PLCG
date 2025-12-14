/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113959
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
    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)56701)))) ^ (((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) arr_5 [i_0 - 3] [i_2]);
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) var_3))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_9))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 1110069575011753969ULL)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) | ((-(((/* implicit */int) var_13)))))))));
}
