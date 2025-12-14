/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128975
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
    var_11 = ((/* implicit */unsigned long long int) 4294967295U);
    var_12 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_16 [(unsigned short)9] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = 699760350U;
                                arr_17 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) (unsigned short)36937));
                            }
                        } 
                    } 
                    arr_18 [i_0 - 3] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned int) arr_1 [i_0 - 3])) : (var_6)))), (((1713565322604858889LL) >> (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 22; i_9 += 2) 
                        {
                            {
                                arr_33 [i_5] [i_6] = ((/* implicit */_Bool) ((long long int) min((arr_26 [i_7] [i_9] [i_6]), (((/* implicit */unsigned int) (unsigned char)131)))));
                                var_13 = ((/* implicit */unsigned long long int) max((-2LL), (((/* implicit */long long int) (!(((((/* implicit */int) (signed char)-119)) >= (((/* implicit */int) (unsigned char)255)))))))));
                                arr_34 [i_5] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */unsigned char) var_4);
                            }
                        } 
                    } 
                    arr_35 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)350))));
                }
            } 
        } 
    } 
}
