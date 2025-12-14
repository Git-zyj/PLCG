/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168708
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max(((+(((((/* implicit */_Bool) (unsigned short)0)) ? (var_9) : (((/* implicit */int) (signed char)-58)))))), (((/* implicit */int) (unsigned short)1158)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (signed char)-58);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_2)), (arr_7 [i_2] [i_2] [i_2] [10U] [i_2]))), (((((/* implicit */_Bool) 1674026436U)) ? (1674026435U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) (signed char)127)))))))) : (((((/* implicit */_Bool) 2088960U)) ? (((((/* implicit */_Bool) (signed char)121)) ? (var_6) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_13)) / (var_1)))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)16))))) ? (((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_2 - 1])), (arr_4 [i_2 + 1] [i_3 + 1]))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) >= (min((4292878335U), (((/* implicit */unsigned int) var_1))))))), (arr_8 [9U] [i_1] [i_0] [i_0])));
            }
        } 
    } 
}
