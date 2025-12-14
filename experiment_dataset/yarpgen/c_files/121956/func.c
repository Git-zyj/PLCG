/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121956
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
    var_12 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2] [i_2]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7883516282467972082LL)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (unsigned char)169))))))))));
                    var_14 = ((/* implicit */long long int) (unsigned char)92);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned char i_6 = 3; i_6 < 19; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_15 = var_0;
                                var_16 += ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) arr_18 [i_3] [i_7] [i_5] [i_3] [i_3])), (((arr_16 [i_3] [i_4] [i_3] [i_6 - 3]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_8 = 2; i_8 < 19; i_8 += 3) 
                {
                    for (unsigned char i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            {
                                arr_27 [i_3] [i_3] [i_4] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (((long long int) var_3)))))));
                                var_17 = ((long long int) (!((!(((/* implicit */_Bool) var_9))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
