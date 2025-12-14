/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166228
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) 1006632960)) ? (-521314352) : (((/* implicit */int) var_12)))), (min((((/* implicit */int) (signed char)-11)), (1006632960))))), (((((/* implicit */int) var_6)) ^ (((((/* implicit */int) (short)6363)) ^ (-1006632960)))))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(14889538207090198269ULL)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_1), ((-(((/* implicit */int) (signed char)-11))))));
                                var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(-270485706)))) ? ((~(((/* implicit */int) (signed char)-2)))) : ((-(((/* implicit */int) var_12)))))), (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((min(((+(var_14))), (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2])))) << (min((((/* implicit */int) ((((/* implicit */_Bool) 203256444)) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_2] [i_3] [(short)4] [11])) : (((/* implicit */int) (signed char)11))))))));
                    arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((((arr_18 [i_2] [i_2] [i_3] [i_3] [i_4]) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_18 [i_2] [i_3] [i_3] [i_3] [10ULL])))), (((/* implicit */int) (signed char)-11))));
                    arr_21 [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)54))));
                }
            } 
        } 
    } 
}
