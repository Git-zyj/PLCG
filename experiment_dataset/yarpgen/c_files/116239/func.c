/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116239
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) min((4225094603305444119LL), (((/* implicit */long long int) 3061436600U)))))), (536739840)));
                            var_19 = ((/* implicit */unsigned char) arr_1 [i_2]);
                            var_20 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((short) arr_1 [i_0 - 1]))), (max((((/* implicit */long long int) arr_4 [i_0] [i_0 - 1])), (arr_5 [i_0 - 2] [8LL] [i_2]))))), (((/* implicit */long long int) -486299891))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1583104318)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (signed char)108)))))))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */short) (((((!(((/* implicit */_Bool) (signed char)-93)))) ? (((/* implicit */int) min(((signed char)98), (arr_11 [(signed char)5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)17))))))) ^ (((/* implicit */int) (unsigned char)239))));
                            var_23 -= ((/* implicit */_Bool) min((((/* implicit */signed char) min((arr_15 [i_0 - 2] [i_0 - 1] [i_0 - 4] [i_0 - 1] [i_0 - 2]), (arr_15 [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0 - 2] [i_0 + 1])))), ((signed char)86)));
                            var_24 -= ((/* implicit */short) 24U);
                        }
                    } 
                } 
                arr_17 [(short)2] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 559266841U))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_9);
    var_26 = ((/* implicit */short) max((((/* implicit */long long int) min((((((/* implicit */int) (signed char)27)) >> (((((/* implicit */int) (unsigned char)253)) - (245))))), (0)))), ((~((-(1878659314363548593LL)))))));
}
