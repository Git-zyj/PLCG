/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172023
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) arr_0 [i_2]);
                                arr_12 [i_0] [11] [i_0] [i_0] [i_0] [i_0] [11] = ((/* implicit */unsigned char) arr_6 [3U] [3U] [(short)3]);
                                arr_13 [(signed char)2] [i_1] [i_1] [(unsigned short)7] [(signed char)2] = ((unsigned int) max((((/* implicit */unsigned long long int) 0U)), (arr_4 [i_0] [i_0] [(unsigned char)9])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_19 [i_6] [i_5] [i_1] [i_0] = 1764040478;
                            arr_20 [i_0] [i_0] [(unsigned short)0] [(unsigned short)1] = ((/* implicit */unsigned long long int) min((0U), (4294967295U)));
                            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)496)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_4 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) 4325660475522947746ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)0])))))) : (((unsigned long long int) 4325660475522947729ULL)))) : (((/* implicit */unsigned long long int) (+(((unsigned int) -4870412975800226658LL)))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((4870412975800226658LL), ((-9223372036854775807LL - 1LL))))))) ? (-4870412975800226636LL) : (-395358369432679578LL)));
                var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [0LL] [(_Bool)1] [1])) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (arr_16 [9U] [(unsigned char)8] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_9 [0] [9ULL] [i_0] [i_0] [i_0] [8U])))) : (max((arr_4 [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_3)));
    var_15 ^= ((/* implicit */signed char) var_7);
}
