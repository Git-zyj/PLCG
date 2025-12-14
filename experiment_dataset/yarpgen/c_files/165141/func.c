/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165141
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) 0ULL);
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((unsigned long long int) ((var_1) & (var_7)))) | (((/* implicit */unsigned long long int) ((long long int) (~(var_4)))))));
                            var_18 = ((/* implicit */long long int) ((unsigned long long int) ((long long int) ((((/* implicit */int) var_16)) < (((/* implicit */int) (signed char)-16))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (short i_5 = 3; i_5 < 11; i_5 += 2) 
                    {
                        for (signed char i_6 = 3; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((unsigned long long int) (-(var_6))));
                                var_20 = max((var_0), (((/* implicit */long long int) var_8)));
                                arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((var_6), (((/* implicit */long long int) var_8)))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13))))));
                                var_21 = ((/* implicit */signed char) max((((((var_3) + (9223372036854775807LL))) << (((var_4) - (1259479122084663666LL))))), ((-(-6100961431600344848LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_29 [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) ((signed char) var_1))) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) var_13)))) : (((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) + (2147483647))) << (((((((/* implicit */_Bool) ((var_15) + (var_6)))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) var_11)))) - (114)))));
                            var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) / (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4)))))));
    var_24 = ((/* implicit */short) var_12);
}
