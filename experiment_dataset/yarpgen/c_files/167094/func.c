/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167094
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned char) var_2);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_1] = ((/* implicit */unsigned int) min((var_1), (((/* implicit */long long int) ((unsigned short) var_1)))));
                                var_17 *= ((/* implicit */signed char) (~(((var_2) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_6 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1]))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))) : (arr_9 [i_0] [i_2] [i_0])))) ? (-1481789860) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) && (((/* implicit */_Bool) (unsigned short)3847))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) var_12);
                    arr_15 [i_0] [(unsigned char)10] [i_2] [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2097151)) ? (((/* implicit */int) var_2)) : (arr_3 [i_2] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 3304992571U)) : (368422556034044331ULL))))) == (18078321517675507285ULL)));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) var_7);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */_Bool) 18078321517675507293ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18078321517675507285ULL))) << ((((~(((/* implicit */int) var_2)))) + (49))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 368422556034044322ULL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
}
