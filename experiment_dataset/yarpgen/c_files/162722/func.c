/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162722
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (var_7))))))));
                var_18 = ((/* implicit */int) var_15);
                var_19 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_1 [i_0 - 2] [i_1])))), (((/* implicit */int) arr_1 [i_0 - 1] [i_1]))));
                var_20 &= ((/* implicit */unsigned short) max(((+(arr_3 [i_0 - 2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2])))))));
                var_21 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_5 [i_2 - 1] [i_3]))))))))));
                            var_23 += ((/* implicit */signed char) var_4);
                            arr_13 [i_2] [i_4] [i_2 - 1] [i_4] = ((/* implicit */unsigned long long int) arr_6 [(signed char)10] [i_5]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 3; i_7 < 19; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((signed char) max((arr_6 [i_7 - 2] [i_8 - 1]), (((/* implicit */unsigned short) arr_19 [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 1])))));
                                var_25 = ((/* implicit */long long int) var_8);
                                arr_22 [i_6] [21U] [i_6] [i_6] [i_6] [(unsigned char)13] = ((/* implicit */short) arr_2 [i_7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((unsigned long long int) var_14));
    var_27 = ((/* implicit */unsigned int) var_4);
    var_28 = ((/* implicit */int) var_4);
}
