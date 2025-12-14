/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170128
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_17 += (~((~(((/* implicit */int) (unsigned short)37823)))));
                arr_6 [(short)5] = ((/* implicit */_Bool) (unsigned short)37814);
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)27709)))), (((((var_12) && (var_7))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -1066699723)) > (var_1)))) : (((/* implicit */int) var_16))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-((((+(((/* implicit */int) arr_8 [i_3])))) & (((/* implicit */int) arr_14 [21U] [1ULL] [i_4] [i_3 + 1])))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)4462))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (17715157083529236808ULL))))));
                                var_21 = ((((/* implicit */int) ((70585998512946155ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37826)))))) < (max((((/* implicit */int) var_4)), (1379377960))));
                                var_22 = ((/* implicit */unsigned short) ((1379377949) >> (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (max((((/* implicit */unsigned long long int) var_15)), (var_2)))))) ? (min(((~(((/* implicit */int) var_7)))), (1379377972))) : (min((((/* implicit */int) (unsigned char)212)), (1379377992)))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_14))));
                                var_25 = ((/* implicit */short) ((max((var_8), ((+(((/* implicit */int) (unsigned char)152)))))) / (((/* implicit */int) arr_21 [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
