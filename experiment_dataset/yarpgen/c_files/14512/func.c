/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14512
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 3758096384U))));
                                arr_13 [i_0] [i_1] [i_2] [i_4] [i_4] [12ULL] [i_0] = ((/* implicit */unsigned char) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [7LL]))) ^ (var_7))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_8)), (arr_3 [i_0])))))), (((4778489551762886656ULL) * (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_20 [i_5] [(signed char)17] [(_Bool)1] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_6])) : (((/* implicit */int) (short)-19276))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_1] [i_2] [16U]))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_7 [i_1] [i_2] [i_5])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3))))) : (((/* implicit */unsigned long long int) ((((-1791827540) - (((/* implicit */int) arr_5 [i_0] [i_5] [i_6])))) / (((/* implicit */int) arr_3 [(unsigned short)17])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = max((((var_7) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 4778489551762886656ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_1)), (var_12)))))))) : (var_7)));
    var_18 *= ((/* implicit */unsigned char) var_3);
}
