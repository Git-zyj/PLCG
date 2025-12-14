/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150329
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((((max((var_3), (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)204)))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                arr_6 [i_0] = ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (2942075897U)))) ? (((12041470207936151960ULL) / (((/* implicit */unsigned long long int) 3964657059U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (17263552013166309942ULL))))))))))));
    var_12 = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) 1183192060543241689ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-1))))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) 14687219528428372170ULL))));
                    var_14 = ((/* implicit */signed char) min((var_7), ((!(((((/* implicit */int) var_9)) < (((/* implicit */int) var_7))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_6] [i_4] [i_5] [i_6 + 1] = var_2;
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) 1183192060543241666ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
