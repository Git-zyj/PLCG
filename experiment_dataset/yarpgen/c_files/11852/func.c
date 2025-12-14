/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11852
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
    var_20 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4)))) && (((/* implicit */_Bool) (-(var_7)))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (var_19))) : (((/* implicit */unsigned int) (~(var_18))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) 0U)))));
                var_22 = ((/* implicit */_Bool) ((((_Bool) (!(((/* implicit */_Bool) var_10))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_19)))) : (var_7)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((~(var_9))))) & (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_0)))))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 7; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */int) max((max((var_4), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */short) var_16)))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) && (((/* implicit */_Bool) max((var_15), (var_9))))))))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_2)))))) ? ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
                var_27 ^= max((((var_13) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (var_19)))));
            }
        } 
    } 
}
