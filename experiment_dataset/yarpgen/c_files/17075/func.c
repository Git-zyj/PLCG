/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17075
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1386234574)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_17))))) ? (var_6) : (var_6)));
    var_19 = ((/* implicit */signed char) 3532940744U);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_9)) * (0LL)));
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29904)) ? (((/* implicit */int) (unsigned short)768)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 2045871985U)) ? (3843140540U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30923))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(signed char)9] [i_0 - 1])) >> (((-3648986401854919696LL) + (3648986401854919710LL))))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((min((((arr_4 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) -3648986401854919697LL)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_23 = (+(min((((/* implicit */unsigned long long int) ((arr_1 [i_2 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))))), (((4826772060880533888ULL) - (((/* implicit */unsigned long long int) 0LL)))))));
                var_24 = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) (short)29897)));
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (~(1800011148888980800LL)));
                            var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (178330706U));
                            arr_14 [i_5] [i_5] [i_2] = ((/* implicit */unsigned int) var_12);
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min(((+(((((/* implicit */_Bool) arr_8 [i_4 + 1])) ? (((/* implicit */int) (unsigned short)9552)) : (((/* implicit */int) arr_7 [i_2])))))), (((/* implicit */int) (unsigned char)0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
