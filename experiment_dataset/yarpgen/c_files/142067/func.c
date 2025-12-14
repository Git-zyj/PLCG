/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142067
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
    for (int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) var_11);
                            arr_10 [i_0 - 3] [i_0 - 2] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_11)))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((signed char) -1630972334)))));
                            var_18 += ((/* implicit */_Bool) ((unsigned char) 3614136744U));
                            arr_11 [i_0 - 4] [i_1] [i_2 - 1] [i_2 + 2] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((int) var_15)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1 - 2] [i_1] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                                arr_22 [i_0] [i_0] [i_0 - 1] [i_1] [i_0] [(signed char)18] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) 760106397U));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned int i_10 = 2; i_10 < 20; i_10 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1799012449U)))) ? ((+(2495954834U))) : (((/* implicit */unsigned int) ((int) var_11))))))));
                            var_20 = ((_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10)))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) 2103267942U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        {
                            arr_39 [i_8] [i_11] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) : (((unsigned long long int) var_6))));
                            arr_40 [i_7 + 3] [i_8] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((int) ((unsigned int) 22)));
                            var_21 = ((signed char) ((int) (_Bool)1));
                        }
                    } 
                } 
            }
        } 
    } 
}
