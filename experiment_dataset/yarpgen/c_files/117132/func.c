/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117132
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (~(((arr_0 [i_0]) << (((/* implicit */int) (signed char)0))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (-(arr_12 [0ULL] [i_1] [0ULL] [i_1] [i_1] [i_1])));
                                arr_15 [i_1] [i_1] [i_2] [i_2] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-3))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (unsigned char)8))))) ? (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_8 [10ULL] [i_6] [i_5] [i_6])) : (((/* implicit */int) arr_9 [0ULL] [i_6] [i_5] [i_5])))) : (((/* implicit */int) (unsigned short)45928))))) & (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) | ((-(arr_5 [i_5] [i_5] [i_5])))))));
                arr_22 [i_5] [i_6] = ((/* implicit */unsigned int) arr_13 [i_6] [i_5] [i_5]);
                var_22 = ((/* implicit */int) (signed char)-1);
            }
        } 
    } 
}
