/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173835
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
    var_10 &= ((/* implicit */unsigned char) (-((~(((/* implicit */int) (_Bool)1))))));
    var_11 = ((/* implicit */unsigned short) (+((((+(var_8))) / ((~(var_4)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */int) ((short) (((~(var_2))) >= (((((/* implicit */_Bool) var_1)) ? (var_7) : (var_7))))));
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (~(arr_6 [i_0] [i_1] [i_2] [i_3])))) + (((unsigned long long int) var_9)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))))))));
                                arr_12 [i_0] [i_0] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_2)))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_15 [i_5 + 1] [i_5 + 1] [i_2] [i_6 - 1] [i_6 - 1])))) ? (((var_8) / (arr_0 [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6] [i_1] [i_2] [i_5 - 1] [i_6])))))));
                                arr_17 [i_0] [i_1] [i_1] [i_6] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) % (((/* implicit */int) var_5))))))))) < (arr_6 [i_0] [i_1] [i_2] [i_5 - 1])));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2839255721909424023LL)) ? (665868596U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_15 [i_5 - 1] [i_1] [i_1] [i_5 - 1] [i_6])))));
                                arr_18 [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) var_3)) <= ((-(((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_3 [i_0] [i_1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) var_7);
                                var_17 = var_8;
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_7)))) ? (var_6) : (((/* implicit */unsigned int) var_2)))))));
                                var_19 = ((/* implicit */short) ((max((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18886))) & (9223372036854775807LL))))) != (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
