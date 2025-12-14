/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130487
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
    var_17 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))), (var_5))), (((/* implicit */unsigned int) ((((var_0) / (((/* implicit */int) (unsigned short)10)))) * (((/* implicit */int) ((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_5 [i_1]))))), (max(((unsigned short)65525), (((/* implicit */unsigned short) (signed char)32))))))), (((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) (unsigned short)6))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17))) : (arr_1 [i_0 + 1]))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */int) (unsigned short)29);
                    var_20 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) arr_3 [i_0])) : (arr_7 [i_0] [i_1] [i_0 + 1] [i_0]))), (((arr_7 [i_0] [i_1] [i_0 + 1] [i_1]) % (arr_7 [i_0] [i_1] [i_0 + 1] [(short)16])))));
                }
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)65509))));
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_8 [8] [i_1] [i_0] [(signed char)7]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */unsigned int) var_16)) : (((((/* implicit */_Bool) ((((var_10) + (2147483647))) << (((((/* implicit */int) (unsigned short)65535)) - (65535)))))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */unsigned int) var_3)) & (var_8)))))));
}
