/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107328
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
    var_12 = ((/* implicit */long long int) var_9);
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) 7340032))) * (((var_2) >> (((303602843U) - (303602781U)))))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) max((((/* implicit */unsigned int) (unsigned short)65535)), (3555285989U))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 - 1])) || ((!(((/* implicit */_Bool) 4048240180U)))))))));
                            var_14 = ((((/* implicit */int) max((arr_10 [i_1] [i_3 + 1] [i_1] [6LL]), (((/* implicit */unsigned short) (signed char)71))))) / (((((/* implicit */int) (signed char)71)) | (((/* implicit */int) (signed char)68)))));
                            var_15 = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((arr_2 [(short)1] [i_0]) + (2147483647))) >> (((arr_9 [i_0] [i_1] [i_1] [i_3 + 1]) - (12334177755710356783ULL)))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) ^ (arr_7 [i_3])))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)96)), (4331240447548297216ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-58))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((arr_2 [(short)1] [i_0]) + (2147483647))) >> (((((arr_9 [i_0] [i_1] [i_1] [i_3 + 1]) - (12334177755710356783ULL))) - (18133050962411831652ULL)))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) ^ (arr_7 [i_3])))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)96)), (4331240447548297216ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-58)))))));
                            var_16 = (i_1 % 2 == zero) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [2ULL] [i_1])) << (((arr_9 [i_0] [(unsigned char)0] [i_1] [i_0]) - (12334177755710356804ULL)))))) || (((/* implicit */_Bool) ((arr_9 [i_3 + 1] [i_3] [i_1] [i_3 - 1]) / (arr_9 [i_3 + 1] [i_3] [i_1] [i_3])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [2ULL] [i_1])) << (((((arr_9 [i_0] [(unsigned char)0] [i_1] [i_0]) - (12334177755710356804ULL))) - (18133050962411831609ULL)))))) || (((/* implicit */_Bool) ((arr_9 [i_3 + 1] [i_3] [i_1] [i_3 - 1]) / (arr_9 [i_3 + 1] [i_3] [i_1] [i_3]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((((int) (signed char)-72)) + (((arr_2 [i_0] [i_1]) - ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6))))))));
                var_18 = ((/* implicit */_Bool) var_5);
                var_19 = ((((/* implicit */_Bool) 6810482048953051910ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) : (max((((/* implicit */unsigned long long int) (unsigned char)16)), (min((((/* implicit */unsigned long long int) 140737219919872LL)), (5671110485974707313ULL))))));
                arr_12 [i_1] [i_1] = (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)227)) : (arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */unsigned int) ((/* implicit */int) ((var_11) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))))))) % (((2273380621U) << (((((/* implicit */int) (signed char)58)) - (30)))))))));
}
