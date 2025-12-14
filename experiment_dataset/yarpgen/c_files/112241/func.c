/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112241
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), ((-(var_4))))))))));
    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_9)))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)140)))), (var_4)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (3381285120U));
                    var_14 = ((/* implicit */signed char) ((int) max((((long long int) (unsigned short)65535)), (((/* implicit */long long int) arr_1 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -6568952318800878495LL)) || (((/* implicit */_Bool) arr_12 [i_3])))))) ? ((-(arr_10 [i_0] [i_3] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14739)))));
                                var_16 = ((/* implicit */long long int) (-(((unsigned long long int) var_8))));
                                var_17 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    arr_17 [i_0] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20783))) == (2740335247U))))))) ? ((~(((((/* implicit */_Bool) -7129009537930113136LL)) ? (((/* implicit */int) (unsigned short)32109)) : (((/* implicit */int) var_6)))))) : ((+((~(((/* implicit */int) var_2))))))));
                    arr_18 [i_1] [i_5] = var_5;
                }
                var_18 ^= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */short) (_Bool)1)))))) != (((((/* implicit */unsigned int) 33676140)) * (arr_10 [i_1] [i_1] [i_0])))))), ((~(((/* implicit */int) var_1))))));
            }
        } 
    } 
}
