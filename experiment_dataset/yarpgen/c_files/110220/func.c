/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110220
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
    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) (unsigned short)22985)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42551))) : (var_14))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((_Bool) (unsigned short)54054))), (((short) 2897404996U))))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((int) var_10)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */long long int) ((unsigned long long int) var_14));
                                arr_15 [i_3] = ((/* implicit */int) 15497174283705987837ULL);
                                var_17 = ((/* implicit */_Bool) var_12);
                                arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (1211634132U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22983)))));
                            }
                        } 
                    } 
                } 
                var_18 ^= ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22984))) : (arr_4 [i_1] [i_0] [i_0]))) / (((/* implicit */unsigned long long int) (~(arr_13 [i_0] [i_1] [i_1])))))));
                arr_17 [i_0] = ((/* implicit */long long int) max((11632564644832588623ULL), (((/* implicit */unsigned long long int) 1814298037239240455LL))));
            }
        } 
    } 
}
