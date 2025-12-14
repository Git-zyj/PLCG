/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106701
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
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_9))))));
                                var_13 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((_Bool) var_2)))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) (unsigned char)12))), ((-(var_2))))))));
                                arr_14 [i_0] [i_1] [(unsigned char)3] [i_3] [i_1] [i_1] [(unsigned char)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)4)) ? (-1677197177641808292LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-65)) > (((/* implicit */int) (unsigned char)244))))))))) ? (((((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (7683810731396955831LL))) << (((((/* implicit */int) min(((short)-32751), (var_6)))) + (32754))))) : (((long long int) (-2147483647 - 1)))));
                                var_15 = ((/* implicit */long long int) min((var_15), (max((((/* implicit */long long int) var_1)), (-3516683499931117208LL)))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((int) ((unsigned long long int) var_10)));
}
