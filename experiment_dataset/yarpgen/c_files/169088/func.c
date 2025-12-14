/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169088
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) -4823551165643226756LL))) ? (min((((((/* implicit */int) var_0)) / (var_4))), (((var_4) >> (((var_3) + (1696004740))))))) : (var_9)));
    var_11 &= ((/* implicit */short) ((var_0) ? (((/* implicit */int) var_2)) : (var_3)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((short) var_0)))));
                    var_13 = ((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */short) arr_0 [i_2]);
                                arr_13 [i_0 - 1] [i_1] [i_2] [8] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_2] [(unsigned char)7] [i_3] [7ULL] [i_2]);
                                arr_14 [i_0] [12U] [i_2 + 2] [i_0] [i_0] [12LL] [i_3] = ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [6] [i_3] [i_4] [i_4 + 2]);
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((arr_11 [i_0] [3LL] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_2 - 2]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((var_9), (var_9)))))) : (min((((((/* implicit */_Bool) var_8)) ? (-4823551165643226733LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) arr_9 [i_2 - 2] [(unsigned short)4] [i_0] [(unsigned short)4] [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */signed char) ((int) min((((/* implicit */long long int) arr_17 [0ULL] [i_0] [i_0 - 1] [i_0 - 1])), (var_6))));
                                arr_21 [i_6] [i_5] [i_0] [(short)8] [(unsigned char)3] = ((/* implicit */long long int) 14909031230045186090ULL);
                                var_17 = ((/* implicit */signed char) max((max((max((var_6), (((/* implicit */long long int) -1823319283)))), (((/* implicit */long long int) ((unsigned int) var_3))))), (((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((var_4), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [0] [i_1] [i_1] [12LL] [i_1 - 1])) : (var_9)))))) * (((((/* implicit */long long int) max((var_3), (arr_2 [i_0] [i_0])))) / ((~(var_6)))))));
                                var_19 = ((int) max((((/* implicit */unsigned long long int) ((_Bool) -4185903690966386456LL))), (((2507203608642783849ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = (!(((/* implicit */_Bool) 4185903690966386456LL)));
    var_21 &= ((/* implicit */int) var_8);
}
