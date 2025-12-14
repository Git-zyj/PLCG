/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140904
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_4 [i_1] [i_1] [i_3]))))) : (var_5))) & (((((((var_5) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1] [i_2] [i_3])) - (48672))))) | ((~(1908798088))))))))));
                            arr_11 [i_0] [i_0] [i_2] [i_3] [4U] &= ((((unsigned int) 1776747241)) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) -996949026)) ? (((/* implicit */int) (unsigned short)17238)) : (-1776747242)))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = var_1;
                            arr_13 [i_0] [i_1] = ((/* implicit */signed char) ((12003056519855597654ULL) <= (((/* implicit */unsigned long long int) -3503462836692294262LL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 4; i_5 < 7; i_5 += 3) 
                    {
                        {
                            arr_20 [i_4] [i_1] [i_4] [i_5] = ((/* implicit */int) ((min((arr_19 [i_1] [i_1 + 2] [(short)4] [(short)4] [i_1 - 1] [i_1]), (arr_19 [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 2] [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -1776747255)) > (-5247885248443380179LL)))))));
                            var_13 = ((((((/* implicit */_Bool) 868554884587741547ULL)) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_14 [i_0])))) >= (((/* implicit */int) arr_5 [(unsigned char)6]))))) : (((((arr_10 [(_Bool)1] [i_1] [i_1] [(unsigned char)8] [i_1]) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (unsigned short)48297)))) << (((((((/* implicit */_Bool) var_4)) ? (arr_3 [i_1]) : (((/* implicit */int) (_Bool)1)))) - (2119543216))))));
                            arr_21 [i_0] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((arr_10 [i_1] [i_4] [i_4] [i_0] [i_1]) ? (var_7) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1776747257)) ? (1776747234) : (((/* implicit */int) (short)8120)))), (((/* implicit */int) (signed char)12)))))));
                            var_14 = ((/* implicit */signed char) var_1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_7]))));
                            var_16 = min((((/* implicit */unsigned long long int) ((unsigned char) (signed char)42))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) / (868554884587741539ULL))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_18 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2]))));
                            arr_28 [i_0] [i_6] [i_6] [i_7] [i_1] = ((/* implicit */unsigned short) arr_15 [i_1] [i_1] [4U]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (-(var_10)));
}
