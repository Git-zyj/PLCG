/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101887
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
    var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) * (-1962313214)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_16 |= min((min((((/* implicit */long long int) var_14)), (var_11))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_3))))));
                            arr_10 [i_3] [i_3] [i_2 + 3] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (var_6)))))), (((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                            var_17 = ((/* implicit */unsigned int) min((((((0ULL) - (((/* implicit */unsigned long long int) 1998415731)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (min((((/* implicit */unsigned long long int) var_0)), (var_12)))));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) var_7))))));
                                var_20 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned long long int) var_6))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
