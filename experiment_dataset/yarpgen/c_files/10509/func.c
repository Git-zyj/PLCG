/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10509
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_3 [(_Bool)0] [i_1]))));
                    var_16 = ((/* implicit */long long int) min((min((8755268934513844559ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) (_Bool)1)) : (1302373115)))))), (((/* implicit */unsigned long long int) var_9))));
                    var_17 *= ((/* implicit */unsigned long long int) var_7);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (9691475139195707029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((8755268934513844543ULL) > (9691475139195707079ULL))))) : (var_11)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((9691475139195707057ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((((/* implicit */long long int) arr_12 [i_4])), (-3896066625074893301LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3 + 1])))))))))));
                var_20 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_3)), (9017154026746641089ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
}
