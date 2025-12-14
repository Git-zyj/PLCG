/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179521
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
    var_19 = ((min((((((/* implicit */_Bool) (signed char)75)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) 1008537855)) : (18446744073709551615ULL))))) ^ (((/* implicit */unsigned long long int) 115231908)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)116)), ((short)480))))));
                                var_21 = ((/* implicit */signed char) (unsigned short)22139);
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (short)23339)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0] [i_1] [i_2] [i_2]), ((signed char)84))))) >= (12527885652900596294ULL))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -823965853)) ? (1065151889408ULL) : (13605436453886238951ULL)));
                                var_25 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1))))), (max(((~(((/* implicit */int) (short)-32765)))), (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_18 [i_0] [i_6] [i_5] [i_6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
