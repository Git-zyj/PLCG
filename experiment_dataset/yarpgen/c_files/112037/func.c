/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112037
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
    var_20 = ((/* implicit */_Bool) ((((_Bool) var_16)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73)))));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_1)), (((((_Bool) var_6)) ? (min((((/* implicit */unsigned long long int) var_19)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)183)) & (((/* implicit */int) (short)-21535)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_1 [i_1] [i_0 - 1])))))) ? (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (unsigned char)56)) : ((-2147483647 - 1)))) : (((((/* implicit */int) arr_5 [7] [i_1])) % (((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_5 [i_0] [i_0])) + (9)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_3] [i_2 - 2] [i_3] = ((/* implicit */signed char) ((((((((((/* implicit */_Bool) (-(-5270803423644380131LL)))) ? (min((((/* implicit */int) arr_4 [i_1] [i_2] [i_3])), ((-2147483647 - 1)))) : (((((/* implicit */int) (unsigned char)183)) + (((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_3] [i_4])))))) + (2147483647))) + (2147483647))) >> (((var_2) - (3814252961U)))));
                                arr_17 [i_3] = ((/* implicit */signed char) -1282343562);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((((/* implicit */_Bool) (unsigned char)73)) && (((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 508937336)))))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) * (0U)));
}
