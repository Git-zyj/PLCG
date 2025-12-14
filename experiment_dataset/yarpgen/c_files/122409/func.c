/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122409
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
    var_17 = (_Bool)0;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_3] [(short)0] [(short)0] [i_0] = ((/* implicit */_Bool) ((long long int) (+(arr_9 [i_2] [i_4]))));
                                var_18 = ((/* implicit */short) -8213657703317414789LL);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) max((var_19), (arr_4 [i_0] [(unsigned short)5])));
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_24 [i_7] [i_7] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_8 [15LL] [i_0] [i_5])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))), (((/* implicit */int) (_Bool)1)))), (((((((/* implicit */int) arr_2 [(_Bool)1])) & (((/* implicit */int) (short)30245)))) << (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                                arr_25 [i_7] [i_7] [i_5] [i_7] [i_0] = ((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) (short)-19533))));
                                var_20 = var_13;
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) arr_19 [i_0] [i_1] [i_1] [i_1]);
            }
        } 
    } 
}
