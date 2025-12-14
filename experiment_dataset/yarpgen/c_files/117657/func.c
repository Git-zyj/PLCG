/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117657
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
    var_13 = ((/* implicit */unsigned long long int) -1749391977202031058LL);
    var_14 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_11)), (min((((/* implicit */unsigned int) var_10)), ((+(var_6)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)13280), (((/* implicit */unsigned short) (_Bool)1)))))));
                                arr_16 [i_0] [i_1 + 1] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((short) min(((unsigned short)13291), ((unsigned short)52255))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)52270), (arr_2 [i_0 + 3])))) < (((/* implicit */int) max(((unsigned char)87), (((/* implicit */unsigned char) var_2))))))))));
                                arr_17 [(signed char)9] [i_1] [i_1 + 1] [9LL] [i_1 + 1] [i_3] = ((/* implicit */signed char) arr_1 [i_4] [(short)1]);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) -1260956802);
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-55)));
}
