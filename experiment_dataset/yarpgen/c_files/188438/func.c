/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188438
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */int) (signed char)8)), ((~(((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_2] [i_2] [i_4])))))))));
                                arr_13 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), (arr_4 [i_0] [i_1] [i_2] [i_3])))) ? (((((/* implicit */_Bool) (short)-21577)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31468))) : (var_15))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)26916))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_4 - 1] [i_3])) ? (((/* implicit */int) (unsigned short)46801)) : (((/* implicit */int) (short)32744)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_0] = max((((/* implicit */int) (signed char)-97)), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_8 [i_6] [i_5] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_6] [i_6] [i_5] [i_6])))));
                            var_21 = arr_16 [i_6] [i_5] [i_1] [i_0];
                            arr_20 [i_6] [i_0] [i_0] [i_0] = (~(0));
                            var_22 = ((/* implicit */signed char) (~(((arr_5 [i_0] [i_5] [i_6]) ? (var_9) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_5] [i_1]))))));
                            var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_7), (((((/* implicit */_Bool) (unsigned short)28896)) ? (((/* implicit */int) arr_8 [i_6] [i_5] [i_1] [i_0])) : (((/* implicit */int) (signed char)-43))))))) ? (((/* implicit */long long int) ((var_14) ? (arr_10 [i_6] [i_6] [i_5] [i_1] [i_6]) : ((~(arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_5])) : (((/* implicit */int) (signed char)-16))))), (min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_5] [i_6])), (var_8)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_7);
}
