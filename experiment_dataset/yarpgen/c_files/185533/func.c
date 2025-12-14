/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185533
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((arr_0 [i_0]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1742947289)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (_Bool)1))))) ? (((2234777222U) / (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2234777195U))))))));
                            var_15 = ((/* implicit */unsigned long long int) var_13);
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (1742947309)))) ? (var_10) : (var_13))) | (max((((/* implicit */unsigned int) -1879174478)), (1601727305U))))))));
                        }
                    } 
                } 
                var_17 &= ((/* implicit */int) ((((((/* implicit */_Bool) 458089066U)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_9 [i_1] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) + (var_4)));
                var_18 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) 720904377U))) + (2147483647))) >> ((((((+((-2147483647 - 1)))) % ((-(var_5))))) + (596296261)))));
            }
        } 
    } 
    var_19 &= ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) var_2)) : (((unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_11))));
    var_20 = ((/* implicit */_Bool) var_6);
}
