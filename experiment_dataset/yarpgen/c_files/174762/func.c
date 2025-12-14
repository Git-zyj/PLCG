/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174762
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
    var_16 = var_13;
    var_17 = ((/* implicit */long long int) min((var_17), (min((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)61)) | (((/* implicit */int) var_12))))), (min((((/* implicit */long long int) var_9)), (-3781796178847302648LL))))), (((/* implicit */long long int) var_10))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (max((3781796178847302638LL), (((/* implicit */long long int) (unsigned char)179)))));
                    var_19 = min((var_11), (((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_1))));
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)61), (var_6))))) : (((long long int) (-(((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3781796178847302648LL)) ? (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 7186044179086558577LL)))), (((-3781796178847302648LL) != (3064457289343517485LL))))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((long long int) -3433302157934058367LL))))));
}
