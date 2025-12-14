/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164815
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
    var_20 = ((/* implicit */unsigned int) var_19);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) var_14);
                arr_7 [1LL] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */signed char) (!((_Bool)1)))), (arr_2 [(unsigned char)10])))) <= (((/* implicit */int) max(((unsigned char)67), (((/* implicit */unsigned char) arr_2 [i_0 - 1])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            {
                                arr_21 [4] [(signed char)12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3502291758032203492LL))));
                                arr_22 [i_2] [i_3] [i_4] [i_5] [i_6] = (+((~(var_16))));
                                arr_23 [10ULL] [i_3 - 2] [i_3] [i_3 - 2] [i_5] [i_6 + 2] [4U] = ((/* implicit */_Bool) var_14);
                                arr_24 [i_4] [(short)3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) ((max((((((/* implicit */unsigned long long int) var_0)) > (arr_12 [15U] [7LL] [i_4]))), ((!(((/* implicit */_Bool) 12050889310102713059ULL)))))) ? (max((((((/* implicit */_Bool) 18446744073709551590ULL)) ? (((/* implicit */long long int) var_2)) : (arr_11 [(unsigned short)12] [i_3]))), ((-(arr_17 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_14 [i_6 + 3] [i_6 + 3] [(unsigned short)17] [i_6 - 1] [i_6 + 1] [i_6 + 3]) : (33554432U))))));
                                arr_25 [i_4] [(unsigned char)5] [i_4] [(unsigned char)5] = ((/* implicit */short) min((((((/* implicit */_Bool) (+(-3502291758032203492LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) -715528312324775671LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (7401303806078778418LL))))), (arr_11 [i_2] [i_2])));
                            }
                        } 
                    } 
                } 
                arr_26 [13U] = ((/* implicit */unsigned long long int) arr_10 [11LL] [11LL] [11LL]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_5);
}
