/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183027
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
    var_18 = ((/* implicit */unsigned char) max((((((((/* implicit */int) (unsigned short)52411)) | (((/* implicit */int) var_11)))) >> (((max((var_10), (576460752299229184ULL))) - (9919905341659472424ULL))))), (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_3 [i_2] [i_1]))));
                    var_20 = ((/* implicit */short) ((unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (2786097261U))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))));
                                var_22 += ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */short) var_10);
                    var_24 -= ((/* implicit */_Bool) ((unsigned long long int) max((arr_0 [0LL]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) > (17870283321410322432ULL)))))));
                }
            } 
        } 
    } 
}
