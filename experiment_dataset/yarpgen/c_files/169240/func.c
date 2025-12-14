/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169240
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
    var_12 = ((/* implicit */unsigned int) ((var_11) < ((((!(((/* implicit */_Bool) (signed char)-21)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    var_13 = ((/* implicit */unsigned short) (signed char)8);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)8)) - (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) : (arr_9 [i_1] [i_2] [i_1] [i_0])));
                                var_14 = ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 1])));
                                var_15 ^= ((/* implicit */unsigned short) (-((+(173482150U)))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) -5410760087122293548LL))))) || (((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 - 3] [i_2 + 1]))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_2 - 3] [i_1] [i_0] = ((/* implicit */int) ((short) 4121485141U));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)31463))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)24333);
                }
            } 
        } 
    } 
}
