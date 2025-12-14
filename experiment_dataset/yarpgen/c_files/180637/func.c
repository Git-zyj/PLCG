/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180637
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
    var_15 &= var_11;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((arr_1 [i_1] [i_1 - 2]), (arr_3 [i_1]))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) (unsigned short)65512))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) (+(((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)25))))) / (arr_4 [i_1 + 3] [i_3 + 1])))));
                            var_19 = arr_6 [i_3] [i_3];
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)44)), (((arr_6 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-2147483647 - 1)), (arr_9 [i_0] [i_0] [i_1] [i_0] [i_0])))) ? (((/* implicit */int) (unsigned short)0)) : (min((((/* implicit */int) (signed char)0)), (-2147483637)))))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_12)))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_8))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] [i_1 + 3] = ((/* implicit */_Bool) arr_2 [(unsigned short)5]);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_6 = 2; i_6 < 10; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */signed char) min(((~(min((((/* implicit */unsigned int) arr_13 [i_1 + 3] [i_5])), (1349083601U))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (-2147483640) : (((/* implicit */int) arr_0 [i_1 + 2])))))))));
                                var_23 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)186)) ? (var_3) : (((/* implicit */int) (signed char)0))))), (arr_6 [i_4] [i_4])))) ? (12827022587302036815ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) * (2265139786U)))));
                                var_24 ^= ((/* implicit */unsigned long long int) arr_4 [i_6 - 1] [i_1 + 1]);
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */long long int) arr_11 [i_6]);
                                var_25 = min((((1298352540U) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6 + 1] [i_4])))))))), (((max((arr_11 [i_0]), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_4] [i_0] [i_6])))) > (((/* implicit */unsigned long long int) var_12)))));
                            }
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                            {
                                var_26 = ((/* implicit */unsigned int) (((!(arr_14 [i_0] [i_0] [i_0] [i_5] [i_7]))) && (((/* implicit */_Bool) ((unsigned short) (signed char)-98)))));
                                var_27 -= ((/* implicit */long long int) ((var_10) && (((/* implicit */_Bool) var_7))));
                            }
                            var_28 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)88)) ? (max((arr_6 [i_1 + 3] [i_1 + 3]), (((/* implicit */unsigned long long int) (short)-19601)))) : (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
