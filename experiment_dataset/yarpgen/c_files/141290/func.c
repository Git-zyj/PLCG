/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141290
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
    var_15 = ((/* implicit */long long int) (+(var_13)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */unsigned short) max((4294967295LL), (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_0] [i_1]))) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_17 ^= ((((/* implicit */_Bool) var_5)) ? ((~(9223372036854775807LL))) : ((((~(9223372036854775807LL))) & (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)46266), (((/* implicit */unsigned short) arr_1 [i_1])))))))));
                            arr_10 [i_1] [0U] [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_3]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_1] [i_1] [i_0]) : (arr_9 [i_0] [i_0] [i_1] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (-(((unsigned int) (+(arr_13 [i_5]))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_12 [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6853903101667480413LL)) ? (4294967283U) : (2147483648U)));
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (-6853903101667480399LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_1] [(unsigned char)5] [i_6] [i_6])))))))) / (var_12)));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [(unsigned char)1] [i_7])) ? (arr_3 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) / (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)19285), (((/* implicit */unsigned short) (short)-32761)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
