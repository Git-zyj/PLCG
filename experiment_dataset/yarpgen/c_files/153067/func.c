/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153067
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                var_15 = var_13;
                var_16 = ((/* implicit */short) arr_3 [(unsigned char)15]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] [i_0] [i_1 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)-46)) ? (arr_3 [(unsigned short)17]) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                            arr_11 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((int) var_14));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [(unsigned char)15])) : (((/* implicit */int) var_11))))))) != (max((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_6 [7U]))), ((~(arr_6 [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_1 [i_4]))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_4] [i_4] [i_5] [i_6] [(short)0] [i_7] = ((/* implicit */long long int) var_12);
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_12)))));
                            arr_26 [i_4] [i_4] [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_8 [i_7] [i_4] [i_4] [i_5] [i_4] [i_4]);
                            arr_27 [i_4] [i_4] [i_4] [7LL] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)11)))) > (((/* implicit */int) ((unsigned char) ((arr_24 [i_4] [i_4] [i_5] [i_6] [i_7]) ? (arr_14 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7])))))))));
                            var_21 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned short)48987)))));
                        }
                    } 
                } 
                arr_28 [i_4] [i_4] = ((/* implicit */int) var_6);
                var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))));
                var_23 = ((/* implicit */unsigned char) min((max(((-(14620617901859053763ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)45))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_23 [7LL] [7LL] [7] [i_5] [7LL])))), (((/* implicit */int) ((_Bool) var_1))))))));
            }
        } 
    } 
}
