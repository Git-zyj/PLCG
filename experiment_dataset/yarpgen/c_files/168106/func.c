/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168106
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_1))) & (((/* implicit */int) ((_Bool) var_0)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_3 - 1] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_2))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) 382289785)) * (8561472088414006062ULL))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) & (var_5))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (short)-32767))) / (2147483647)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (-(var_5)))))));
                    arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((unsigned long long int) ((unsigned short) var_10))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)0))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))) / (((/* implicit */int) var_12)))))));
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_1))) * (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) var_2)))))))));
}
