/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124823
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
    var_17 = ((/* implicit */signed char) (+(var_4)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-56))))));
                                arr_13 [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)220);
                                var_19 -= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [1U] [i_3] [i_2] [1U] [i_4]))) : (arr_9 [i_0] [i_0] [i_2] [i_3])))) ? (((/* implicit */int) (unsigned short)28587)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28587))) != (var_14))))))) | (((((/* implicit */long long int) ((((/* implicit */_Bool) -10LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)))) + ((-9223372036854775807LL - 1LL))))));
                                var_20 = ((/* implicit */long long int) ((min((4503599627370495ULL), (((/* implicit */unsigned long long int) var_1)))) ^ (((unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_1 + 1] [i_4 - 1]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) var_13);
                    var_22 += min((min((((/* implicit */unsigned long long int) ((arr_10 [i_0] [8LL] [i_1] [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) 460411433)) ? (15130251766267325414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)7636)) : ((-2147483647 - 1)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) <= (((/* implicit */int) (unsigned short)15872)))))))));
                }
            } 
        } 
    } 
    var_23 = ((long long int) (+(((/* implicit */int) var_1))));
}
