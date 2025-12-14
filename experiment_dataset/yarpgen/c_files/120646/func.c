/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120646
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_3]))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */long long int) (((+(arr_9 [i_3] [i_2] [i_2] [i_3]))) + (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) - (arr_9 [i_0] [i_0] [i_0 - 1] [(unsigned short)10])))))) : (((((long long int) arr_8 [i_0 + 1] [i_1] [i_2] [i_2] [i_2])) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-91))))));
                                arr_14 [i_2] [i_3] [9LL] [i_0 + 1] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) ((unsigned char) var_6));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0 - 1] [i_0 - 1])))) && (((/* implicit */_Bool) ((short) (~(arr_6 [i_0] [10U] [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 2) 
        {
            {
                arr_21 [11U] [i_6] [i_5] = ((/* implicit */short) arr_6 [i_5] [(signed char)1] [i_5] [i_5]);
                var_21 = ((/* implicit */int) max((var_21), ((+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (unsigned short)41258))))))))));
                var_22 |= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6 - 2] [8U] [8U] [i_5 + 1])) ? (((/* implicit */int) arr_17 [i_5 + 1])) : (((/* implicit */int) arr_17 [i_5 - 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2790633419U)) ? (arr_9 [i_5 + 1] [i_6] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24284)))))) ? (arr_9 [i_5 - 1] [i_6 - 1] [i_6 - 3] [i_6 + 2]) : (((unsigned int) var_5))))));
                var_23 = (unsigned char)127;
            }
        } 
    } 
    var_24 = ((/* implicit */short) -12LL);
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 21; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (long long int i_9 = 1; i_9 < 20; i_9 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) (unsigned char)128);
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) var_5);
}
