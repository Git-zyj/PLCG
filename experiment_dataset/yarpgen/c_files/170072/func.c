/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170072
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_4))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 -= ((/* implicit */int) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-32))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2418574743U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) - (arr_8 [i_2] [i_4])))) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 11; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 10; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_30 [i_5] [i_7] [i_7] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (signed char)-34))) ? ((+(((/* implicit */int) arr_27 [i_8 + 1] [i_6] [i_7 - 1] [i_7])))) : (((var_1) ? (((/* implicit */int) arr_27 [i_8 + 1] [i_6] [i_7 + 1] [i_7])) : (((/* implicit */int) (signed char)119))))));
                                arr_31 [(signed char)9] [1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) min((3568983823U), (((/* implicit */unsigned int) arr_3 [i_6] [i_9]))))) != (((var_4) | (((/* implicit */unsigned long long int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5] [i_8 + 1] [i_7])))))) : (((((/* implicit */_Bool) arr_17 [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (2418574746U)))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
    var_19 = (unsigned char)1;
}
