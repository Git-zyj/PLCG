/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172225
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) (unsigned short)0)), (arr_6 [i_0] [i_1 - 3])))))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17941))));
                var_18 = ((unsigned short) (~(arr_4 [i_0] [i_1])));
                var_19 = ((/* implicit */unsigned int) max((var_19), (min((((2165035416U) / (((/* implicit */unsigned int) 834544382)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned short)41427)))))))));
                var_20 = (((((~(((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_1 [i_1])))))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_1])), (-3640947712267823965LL)))) && (((/* implicit */_Bool) max((var_4), (var_6))))))) - (1))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_2] = min((var_12), (((/* implicit */int) ((((/* implicit */long long int) (~(451262629U)))) <= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_6)) : (arr_13 [i_0] [i_0] [i_2] [i_3])))))));
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) & (((long long int) (unsigned short)2047)))) == (((/* implicit */long long int) (~((~(3023280834U))))))));
                            var_22 = ((unsigned int) 96001203);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((int) (unsigned char)43)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 |= (unsigned short)22404;
    var_25 = ((/* implicit */unsigned char) var_16);
}
