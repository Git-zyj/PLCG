/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117887
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
    var_17 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) var_8)) ? (var_15) : (var_1)))))));
    var_18 = ((/* implicit */unsigned short) (~((~(((unsigned long long int) var_10))))));
    var_19 = ((/* implicit */_Bool) ((((_Bool) (short)32760)) ? (((/* implicit */long long int) (-((+(((/* implicit */int) var_3))))))) : (((long long int) var_1))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) 17725257784699383773ULL))) >= (((unsigned long long int) var_16))))), (((long long int) ((((/* implicit */unsigned long long int) var_1)) > (var_14)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [(unsigned char)13] [i_0] [i_1 - 2] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                var_21 = ((/* implicit */short) var_9);
            }
        } 
    } 
}
