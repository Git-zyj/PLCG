/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134082
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) arr_7 [i_1] [(short)3] [i_1] [i_2]);
                    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [10ULL] [i_1])) ? (((/* implicit */unsigned long long int) (-(arr_3 [(signed char)4])))) : (var_17)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) * (((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_3)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (long long int i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (signed char i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_22 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */short) arr_12 [i_3] [i_5] [i_7]);
                                arr_23 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((var_3) >> (((((/* implicit */int) (unsigned char)118)) - (112)))))))));
                            }
                        } 
                    } 
                    arr_24 [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_3] [i_4] [(unsigned short)22] [i_4 + 3] [i_3]);
                    arr_25 [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_15 [i_5] [i_4] [i_5]))))), (arr_12 [i_3] [i_3] [(short)17])));
                }
            } 
        } 
    } 
}
