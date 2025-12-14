/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165603
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1 + 1] = ((/* implicit */long long int) min(((~(15945739762344662944ULL))), (((/* implicit */unsigned long long int) ((int) (-(var_6)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) (short)31811));
                var_19 = ((/* implicit */_Bool) var_6);
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */int) var_15)) > (((/* implicit */int) var_12)))) ? (arr_3 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((min((var_3), (((((/* implicit */int) var_10)) <= (((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_13))))));
    var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 11758927526474593360ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (14771723448809044359ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_14)))))) + (((min((54295836648826805ULL), (var_16))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_15))))))));
    var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 14771723448809044341ULL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (min((((/* implicit */unsigned long long int) var_15)), (var_6))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_17)) : (var_16)))))));
}
