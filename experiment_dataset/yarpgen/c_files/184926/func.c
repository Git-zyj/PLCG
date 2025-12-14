/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184926
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                var_13 = arr_0 [(short)9];
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)234)), (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [(unsigned short)12]) : (((/* implicit */unsigned long long int) arr_5 [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8240952U))));
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned long long int) ((arr_6 [i_2 - 1]) > (((/* implicit */unsigned long long int) arr_9 [i_2 - 1]))))))));
                arr_12 [i_2] [3LL] [i_3] = ((/* implicit */unsigned int) arr_8 [i_2]);
                arr_13 [i_2] [1U] [(unsigned short)0] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3])) != (((/* implicit */int) (!(((arr_10 [i_3]) == (((/* implicit */long long int) arr_1 [i_3])))))))));
                /* LoopNest 3 */
                for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_17 |= ((/* implicit */long long int) (~((~(((unsigned int) var_7))))));
                                arr_23 [i_2] [i_3] [i_4] [i_4] [13LL] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) var_0))))) ? (max((arr_15 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) 2522363088U)))) : (14977830489537887332ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (arr_10 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_2 - 1])))))) : ((((-(arr_6 [i_2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max(((+(((long long int) arr_14 [i_3] [i_2])))), (((/* implicit */long long int) ((arr_9 [i_2 - 1]) - ((-(4294966784U)))))))))));
            }
        } 
    } 
}
