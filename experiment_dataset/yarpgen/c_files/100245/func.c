/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100245
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
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_16)), (-615779773085373630LL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */unsigned long long int) arr_2 [4LL] [(short)12] [i_2]);
                    arr_6 [i_0] [i_1] [(short)1] [i_0] = ((/* implicit */long long int) (short)-16);
                    var_20 ^= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_7)))) ^ (((((/* implicit */_Bool) 16777215LL)) ? (((/* implicit */int) arr_4 [(signed char)0] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_4 [(unsigned char)0] [i_1 - 2] [i_1 + 2]))))));
                    var_21 = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (short)-16)), (615779773085373630LL))) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((arr_7 [i_3]) + (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) arr_12 [i_3] [(signed char)18] [i_3])) : (((/* implicit */int) arr_14 [i_3]))))))) : ((-(max((arr_15 [12ULL] [i_4] [i_4]), (((/* implicit */long long int) var_17))))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_23 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) max((((/* implicit */short) arr_14 [i_3])), ((short)17961)))))) && (((/* implicit */_Bool) var_13))));
                                arr_21 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) max(((+(((((/* implicit */int) arr_9 [i_3])) * (((/* implicit */int) var_9)))))), (var_12)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)224))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_10)))) || (((/* implicit */_Bool) min((68719476735ULL), (((/* implicit */unsigned long long int) 0U)))))))), ((~((-(((/* implicit */int) var_7))))))));
}
