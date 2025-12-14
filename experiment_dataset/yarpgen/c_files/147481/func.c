/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147481
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
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) (-(min((max((1294512804173056275ULL), (((/* implicit */unsigned long long int) arr_6 [9ULL] [i_1] [i_1 - 1] [7ULL])))), (((/* implicit */unsigned long long int) (unsigned short)42668))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_1 - 1] = ((/* implicit */_Bool) 1294512804173056275ULL);
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(15779091397824880757ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)0))))) : (min((((/* implicit */unsigned long long int) var_2)), (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45203)))))) : (((min((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_0] [i_1 - 1] [i_0] [i_0]))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))))));
                                arr_17 [i_4] [0LL] [i_0] [11LL] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_3))))))), (((unsigned long long int) min((var_10), (var_13))))));
                                arr_18 [i_4] [i_4] [i_0] [i_1] [i_0] [i_0] [(_Bool)0] = ((/* implicit */_Bool) arr_14 [13ULL] [13ULL] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned char)2)))) : (((((/* implicit */_Bool) 1294512804173056275ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)254))))))) ? (((long long int) (~(((/* implicit */int) var_1))))) : (((/* implicit */long long int) min((((/* implicit */int) min((var_9), (((/* implicit */short) (_Bool)1))))), (max((var_7), (((/* implicit */int) var_12)))))))));
    var_17 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) max(((unsigned char)131), (var_8)))) ? (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((unsigned long long int) var_12)))));
}
