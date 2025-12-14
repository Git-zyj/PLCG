/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15160
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0]);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) (unsigned char)78))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -6709567297923719494LL)) ? (((/* implicit */int) (unsigned short)32976)) : (((/* implicit */int) (unsigned short)65524)))) * (((/* implicit */int) arr_1 [i_1 + 1]))))) ? (min(((~(((/* implicit */int) arr_7 [i_3] [i_3] [i_2] [i_1] [i_3])))), (((arr_6 [i_3]) + (((/* implicit */int) var_6)))))) : (arr_3 [i_0] [i_4])));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2047)) ? (((/* implicit */unsigned int) -2057)) : (var_11)))), (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) var_0)))))) << (((/* implicit */int) ((unsigned char) min((var_13), (((/* implicit */int) var_9))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) 3469948886338245371ULL)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (signed char)-5)))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */long long int) ((max((-2047), (16553922))) * (((-16553937) / (arr_8 [i_5] [i_6] [i_5] [i_5 - 1] [i_6])))))) * (arr_5 [i_6] [i_5 - 1] [i_5 - 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max(((signed char)-36), (var_12)));
}
