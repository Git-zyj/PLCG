/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128699
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) var_8);
                            var_16 = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) (-2147483647 - 1));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (2062672656)))) && (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (-2147483647 - 1)))))))) * (((((/* implicit */int) var_5)) * (2147483647)))));
    /* LoopNest 3 */
    for (short i_4 = 3; i_4 < 19; i_4 += 4) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) var_8);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) -2147483636);
                                arr_26 [i_4 - 2] [3ULL] [3ULL] [i_4] [i_7] [(signed char)4] = ((/* implicit */signed char) var_12);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) 0ULL);
                    var_21 = ((((/* implicit */_Bool) 9051048553081285255ULL)) || (((/* implicit */_Bool) ((((var_8) / (((/* implicit */unsigned long long int) var_11)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-4733)) / (2147483635))))))));
                    var_22 = ((/* implicit */int) ((var_5) || (((/* implicit */_Bool) var_9))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (signed char)-2);
}
