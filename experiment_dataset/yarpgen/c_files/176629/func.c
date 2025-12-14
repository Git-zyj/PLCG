/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176629
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
    var_11 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) (signed char)1)) ? (18014398442373120LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [i_2] [(_Bool)1] [i_2] [i_1] [(unsigned short)10] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_2)))) : (((/* implicit */int) var_2))))) != (var_9)));
                                arr_15 [i_0] [i_3] [i_0] |= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (((unsigned long long int) 67108863LL)))), (((/* implicit */unsigned long long int) var_8))));
                                var_12 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)81))))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (unsigned char)246))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) > ((-2147483647 - 1))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((0U) << (((((/* implicit */int) (signed char)122)) - (98)))));
    var_14 *= ((/* implicit */unsigned long long int) var_0);
    var_15 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((signed char) var_2))))));
}
