/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158546
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_5)), (max((2862678096U), (((/* implicit */unsigned int) (unsigned char)107))))))));
                    var_17 = ((/* implicit */unsigned short) min((15829171123769084408ULL), (((/* implicit */unsigned long long int) 0U))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((min((((/* implicit */unsigned int) arr_4 [i_0 - 2] [i_0] [i_2])), (var_12))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (((((/* implicit */_Bool) (unsigned char)162)) ? (15829171123769084432ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))))));
                                var_19 += ((/* implicit */unsigned short) var_5);
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)2)), (4294967288U)))), (max((2988362736990792354ULL), (((/* implicit */unsigned long long int) var_12))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) (+(((arr_5 [i_2 + 2] [i_0 + 2] [i_0] [i_1]) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)178)) && (((/* implicit */_Bool) 317036367U))))) : (((/* implicit */int) var_14))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 2113094411U)) || (((/* implicit */_Bool) (+(((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_13))))))))));
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)192))));
                                var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 329385229U)) < (2382099996261861964ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 ^= ((/* implicit */unsigned int) var_4);
}
