/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152813
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
    var_10 = ((/* implicit */unsigned char) (_Bool)0);
    var_11 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) min(((short)-31294), (((/* implicit */short) (_Bool)0)))))), ((~(((/* implicit */int) (_Bool)1)))))))));
                var_13 *= ((/* implicit */unsigned short) ((((long long int) (_Bool)1)) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)64))))) != (((long long int) (signed char)-99))))))));
                arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) arr_2 [(signed char)6])) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)11)))) : (((/* implicit */int) ((short) (_Bool)0))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (unsigned char)51))))));
                arr_8 [i_0 - 2] [i_0 - 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)));
            }
        } 
    } 
    var_14 |= ((/* implicit */short) var_3);
    var_15 = (+(((/* implicit */int) (short)-7495)));
}
