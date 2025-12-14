/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157626
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((var_4) > ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (67108863U))))))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (67108863U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [5LL] [i_1 + 2] [(unsigned char)21])))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) var_11))), (max((max((((/* implicit */unsigned long long int) arr_7 [20U] [i_3] [i_2] [i_1] [i_0])), (var_11))), (min((var_6), (((/* implicit */unsigned long long int) var_2))))))));
                                var_17 = ((/* implicit */_Bool) (+(max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (-1111066711)))))));
                                var_18 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)71)) ? (2671527808549890729LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)60))))))), (((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_1 - 1] [i_2] [i_3 - 1] [i_4 + 3])) ? (arr_7 [i_0] [i_1] [i_2] [i_3 + 3] [i_4]) : (arr_7 [i_4 + 2] [i_3] [i_2] [10ULL] [i_0 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (67108871U))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)156))))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) arr_2 [i_0]))))))))));
                                var_20 = ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */long long int) 67108871U)) : (-1972410008318326179LL));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_7 = 4; i_7 < 21; i_7 += 1) 
                {
                    var_21 += ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [(short)11] [7ULL]);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_7] [i_7 - 2])) ? (arr_1 [i_7] [i_7 + 1]) : (((/* implicit */unsigned long long int) -1LL))));
                    var_23 += ((/* implicit */unsigned int) arr_13 [i_1] [21] [i_1 + 3] [i_1] [i_1] [i_7] [20U]);
                }
            }
        } 
    } 
}
