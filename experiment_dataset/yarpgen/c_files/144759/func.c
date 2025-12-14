/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144759
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)89)) || (((/* implicit */_Bool) var_8)))))));
    var_12 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)5428))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */short) ((unsigned short) (signed char)-52));
                                arr_14 [6U] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((4294967281U) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)60)) > (((/* implicit */int) (unsigned char)170))))))))) && (((/* implicit */_Bool) (unsigned char)51))));
                                arr_15 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)170)) ? (((int) min((((/* implicit */long long int) 0)), (var_9)))) : (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */int) ((unsigned short) 5));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    var_14 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)59039)) : (arr_22 [i_7] [i_6] [i_5 - 1] [i_5])))), ((-(var_9)))));
                    var_15 = ((/* implicit */long long int) ((unsigned short) arr_20 [i_5] [(short)13] [i_5]));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) (unsigned char)135);
}
