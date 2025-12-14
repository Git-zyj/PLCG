/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149832
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
    var_10 &= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (var_8)))) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (var_9))) : (((/* implicit */unsigned long long int) var_6))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned short i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (var_8))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_9))))))));
                            var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2950385739499980006ULL)) ? (((/* implicit */unsigned long long int) 4204183021U)) : (var_9)))) ? (4873697690589759718ULL) : (((/* implicit */unsigned long long int) 2814096101U))))) ? (((/* implicit */unsigned long long int) 90784287U)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))));
                            arr_12 [(short)1] [i_1] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_7)) : (var_1));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (var_9)))) ? (((((/* implicit */_Bool) var_9)) ? (var_7) : (var_7))) : (var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0)))) ? (var_7) : (var_0))))));
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_8)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (var_9)))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) var_6);
                                arr_20 [i_1] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                } 
                var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8)))) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) var_0)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (var_1)))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (var_9)))) ? (var_7) : (var_6)))) : (var_5)));
                var_18 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (12020659870840184686ULL)));
            }
        } 
    } 
    var_19 = var_1;
}
