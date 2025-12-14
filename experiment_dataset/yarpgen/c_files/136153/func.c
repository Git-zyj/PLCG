/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136153
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
    var_18 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) >> (((((/* implicit */int) var_14)) - (15380)))));
    var_19 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) var_14))))))) >= ((-(((/* implicit */int) max((((/* implicit */short) var_2)), ((short)16383))))))));
                                arr_14 [i_4] [(signed char)3] [i_4] [(short)6] [i_4] [i_4] [6] = ((/* implicit */int) (short)0);
                                var_21 = ((/* implicit */long long int) ((min((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)1))))), (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (var_17) : (((/* implicit */int) (unsigned short)1)))))) >> (((((/* implicit */int) (short)21957)) - (21931)))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] [i_2] &= min((((((/* implicit */int) max((var_6), (((/* implicit */short) var_15))))) ^ (((-141929234) | (1373839572))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (arr_5 [i_0] [(unsigned char)5] [(unsigned char)5])))) ? (((((/* implicit */int) arr_3 [(short)9])) & (((/* implicit */int) (signed char)63)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_3)), (((((/* implicit */int) var_16)) & (((/* implicit */int) var_2)))))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) <= (max((var_17), (((/* implicit */int) var_10)))))))));
}
