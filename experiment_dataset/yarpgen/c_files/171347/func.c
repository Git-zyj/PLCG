/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171347
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-32764))))))) ? (7ULL) : (min((5ULL), (((/* implicit */unsigned long long int) ((_Bool) 16216759401840193543ULL)))))));
    var_19 = ((/* implicit */unsigned int) (short)-32028);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [1U] [i_1] [i_2] [i_2 + 2] = ((/* implicit */unsigned char) ((unsigned int) min((arr_2 [i_0]), (arr_2 [i_2]))));
                    var_20 &= ((/* implicit */long long int) min((((arr_4 [i_1] [i_2 - 1] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763))))), (min((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_4 [i_2] [i_2 + 2] [i_2 + 2])))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (short)32021;
                    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (~(max((((unsigned int) (short)-32028)), (min((var_1), (((/* implicit */unsigned int) (signed char)-73))))))));
}
