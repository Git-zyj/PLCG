/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142617
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (short)8845);
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (unsigned short)63514))));
                                var_18 = ((/* implicit */_Bool) var_2);
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) min((-9223372036854775806LL), (var_5)))) ? (var_5) : ((~(5436902222314010525LL))))))));
                                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (var_12))), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */int) ((3336313646053691706LL) == (((/* implicit */long long int) 2099938543U))))) : ((+(((/* implicit */int) ((-5882865) >= (((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
                    {
                        for (long long int i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_28 [i_8] = ((/* implicit */_Bool) max((arr_27 [i_5] [i_5] [i_8 - 3] [i_8 - 3] [i_8] [i_5 - 2] [16]), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)15)), ((short)-25847))))));
                                arr_29 [(signed char)16] [i_8] [i_5] [i_7] [(short)4] [i_6] [i_5] &= min((((/* implicit */int) var_2)), (((int) min((var_12), (var_14)))));
                            }
                        } 
                    } 
                    arr_30 [12] &= ((/* implicit */_Bool) ((signed char) 459020802U));
                }
            } 
        } 
    } 
}
