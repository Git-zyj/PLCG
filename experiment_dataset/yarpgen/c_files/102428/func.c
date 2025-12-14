/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102428
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
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (14ULL)))) ? (((18027953511561175242ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35219))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1896039676)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (_Bool)1)))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((min(((+(((/* implicit */int) var_7)))), (-1896039676))) + (2147483647))) << (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -1896039676)) < (var_1)))) : (((/* implicit */int) (unsigned char)255)))))))));
                    var_21 = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) : (14307667102795388302ULL)));
    var_24 |= ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)70)) & (((/* implicit */int) (unsigned char)27))))));
}
