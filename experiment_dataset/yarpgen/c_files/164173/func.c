/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164173
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] = max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 1])) < (((/* implicit */int) arr_4 [i_0 - 1]))))), ((-(var_7))));
                arr_6 [(unsigned short)3] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_10)), (1848129352476807979LL))), (((/* implicit */long long int) ((-2016814153) * (-1))))))) <= ((+(((unsigned long long int) (signed char)31))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? ((+(((/* implicit */int) arr_3 [i_0])))) : (((int) arr_3 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                arr_14 [i_2] [(signed char)8] [(unsigned short)6] = ((/* implicit */unsigned int) arr_10 [i_2] [i_3]);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_21 [i_2] [i_3] [6] = ((/* implicit */long long int) (-(18446744073709551615ULL)));
                            arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_0);
                            var_18 |= ((/* implicit */unsigned char) (signed char)31);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned char) (-(((int) 4464563313164413794LL))));
                            arr_27 [i_2] [i_3] [i_3] [i_6] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) var_5)))));
                            arr_28 [i_2] [i_2] [i_6] [(unsigned char)10] = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)0));
                            arr_29 [i_2] [i_3] [i_6] [(unsigned short)0] [i_7] = ((/* implicit */unsigned short) ((int) (~(arr_26 [i_3] [i_3]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))));
    var_21 = var_14;
}
