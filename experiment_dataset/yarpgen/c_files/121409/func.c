/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121409
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)128))) : (var_8)))) ? (((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) : ((~(var_13)))))) ? (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned long long int) var_12)) : (((var_10) ? (13055899692748909136ULL) : (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2] [i_1] [i_1])) % (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)127), (((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2] [18]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)128)) * (((/* implicit */int) (unsigned short)123))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_1]))) : ((+(13055899692748909121ULL)))))));
                                var_20 = ((/* implicit */int) min((var_20), (var_12)));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_2]);
                    arr_12 [i_0] [i_0] [i_2] |= ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2])))) >= (((/* implicit */int) min((arr_11 [i_0] [i_0] [i_2] [i_1]), (arr_11 [i_0] [i_0] [i_2] [i_0]))))));
                }
            } 
        } 
    } 
}
