/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106808
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
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((var_1), ((_Bool)0))))));
    var_13 = ((/* implicit */unsigned long long int) (short)6542);
    var_14 = (signed char)-5;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [3U] [i_3])) ? (arr_6 [15] [i_1] [i_2] [i_3]) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) (signed char)55)))))));
                            var_16 = ((/* implicit */unsigned int) (+(((unsigned long long int) (unsigned short)42502))));
                            arr_11 [i_2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
                        }
                    } 
                } 
                var_17 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((var_3) < (((((-638123189) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)17] [i_0])) + (20045))))))))))) : (((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((var_3) < (((((-638123189) + (2147483647))) >> (((((((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)17] [i_0])) + (20045))) + (9841)))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((unsigned char) var_2));
}
