/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141703
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_4)) - (arr_6 [i_1] [i_3] [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) == (var_13))))))));
                                var_16 *= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) arr_1 [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (short i_6 = 2; i_6 < 7; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)8689)) / (-1586382136)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6 + 1]))) >= (var_5))))) : (max((((((/* implicit */unsigned long long int) arr_1 [i_6])) & (var_1))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)28672))))))))))));
                                var_18 += ((/* implicit */unsigned int) var_7);
                                arr_19 [i_5] = ((/* implicit */unsigned char) arr_1 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */int) (!((_Bool)1)))) : (var_6)));
    var_20 = ((/* implicit */unsigned int) var_0);
    var_21 = ((/* implicit */unsigned char) var_4);
    var_22 = ((/* implicit */unsigned char) (-((+(((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
}
