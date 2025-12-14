/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124565
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
    var_11 += ((/* implicit */unsigned char) ((min((((unsigned int) (short)28724)), (((/* implicit */unsigned int) var_6)))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) (short)28724)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] [10U] [i_3] [i_3] |= ((/* implicit */short) 13211332136819976788ULL);
                            var_12 = ((/* implicit */_Bool) max((arr_7 [i_3] [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) ((int) arr_1 [i_2 + 1])))));
                            var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_3]))));
                            arr_12 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) max(((+(((((/* implicit */int) var_5)) >> (((arr_2 [i_1]) - (268143610U))))))), (((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) max(((+(((((/* implicit */int) var_5)) >> (((((arr_2 [i_1]) - (268143610U))) - (2593707661U))))))), (((/* implicit */int) var_4)))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) ((short) arr_7 [i_1] [i_1] [14LL] [14LL]));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((/* implicit */int) min((var_7), ((short)-28726)))))))));
            }
        } 
    } 
    var_16 = min((var_1), (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_7)))))))));
    var_17 *= ((/* implicit */short) (_Bool)1);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            {
                var_18 = ((/* implicit */short) (+(((((((/* implicit */int) arr_5 [i_4])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_4])) + (19283)))))));
                arr_20 [i_5] [i_4] [i_4] = ((/* implicit */signed char) (unsigned char)75);
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) 6995166442816149058LL);
                                arr_30 [i_4] [i_4] [i_4] [i_5] [i_8] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)4341)), (12U)))) ? (-2061060540406598036LL) : (-6995166442816149059LL)));
                                var_20 = ((/* implicit */long long int) min((((((/* implicit */int) arr_0 [i_5])) / (((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_0 [i_4]), (arr_0 [i_4]))))));
                                var_21 -= ((/* implicit */unsigned short) min((max((arr_9 [i_4] [i_4] [i_4] [3]), (arr_8 [i_4] [i_4] [i_4] [12] [i_4] [i_4]))), (((/* implicit */unsigned long long int) (unsigned short)0))));
                            }
                        } 
                    } 
                } 
                arr_31 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -598755548)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
