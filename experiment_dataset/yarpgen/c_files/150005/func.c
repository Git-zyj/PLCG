/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150005
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
    var_13 = ((/* implicit */short) var_5);
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_10)), (var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((var_11) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-29227)))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) max((((int) arr_4 [i_0] [i_1 + 1] [i_2] [i_1 + 1])), (((((arr_5 [i_2] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) var_10)))) ? (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) : (arr_3 [i_1 + 1])))));
                    var_16 = ((/* implicit */unsigned char) (+(4416763628840263733ULL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 3; i_4 < 23; i_4 += 3) 
        {
            for (long long int i_5 = 3; i_5 < 23; i_5 += 3) 
            {
                {
                    arr_16 [i_4] [i_4] = (-((-(((/* implicit */int) var_12)))));
                    arr_17 [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-127))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)111))))) - (var_2))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((short) var_8));
}
