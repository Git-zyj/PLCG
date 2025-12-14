/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168229
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30298)) + (((/* implicit */int) (signed char)86))));
                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35238)) <= (((int) (signed char)86))));
                arr_7 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((0LL), (0LL)));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_9))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((max(((-(var_0))), (((((/* implicit */_Bool) (signed char)0)) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) var_15)))))), (((((/* implicit */_Bool) 16LL)) ? (arr_3 [i_2 + 2] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)35238))));
                    var_22 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47359)) ? (((/* implicit */int) ((unsigned short) (signed char)29))) : (arr_17 [i_4] [i_4] [i_4])))), (((unsigned int) (!(((/* implicit */_Bool) var_14))))));
                }
            } 
        } 
    } 
}
