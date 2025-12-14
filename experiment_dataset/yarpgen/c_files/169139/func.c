/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169139
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
    var_18 &= ((/* implicit */unsigned short) var_10);
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1986512186))))), (((((((/* implicit */_Bool) -33554432)) ? (3369493471U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) - (((/* implicit */unsigned int) var_3))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned short) (-(min((arr_5 [i_0 - 2] [i_0 + 3] [i_1] [i_2 + 1]), (((/* implicit */unsigned int) (unsigned char)28))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((var_21), ((((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned short)38132))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (var_14))))) : (max((var_0), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) (unsigned short)44047))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))))))));
                                arr_13 [i_0] [i_0] [i_0 + 3] [i_0 + 3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_4 [i_1] [i_2] [(_Bool)1])) ? (-500538020) : (((/* implicit */int) var_16)))) + (2147483647))) >> (((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */signed char) (+(3369493450U)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (unsigned short)38138))));
}
