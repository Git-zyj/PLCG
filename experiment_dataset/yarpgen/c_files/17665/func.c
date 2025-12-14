/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17665
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((long long int) ((unsigned long long int) (!(((/* implicit */_Bool) var_2)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) min((var_11), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_2])) ? (min((((/* implicit */unsigned long long int) ((long long int) arr_6 [i_0] [i_2] [i_2] [i_0]))), (arr_1 [i_0] [i_2]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (((0LL) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_3]))))))))));
                                var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_0] [i_2] [i_2] [i_1 + 1])), ((short)21752)))) ? (min((((/* implicit */unsigned int) arr_3 [i_4] [i_2] [i_0])), (arr_9 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [i_2] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_11 [i_0] [i_0])))))))) << (((((/* implicit */int) (signed char)(-127 - 1))) + (153)))));
                                var_14 = var_2;
                                var_15 |= ((/* implicit */unsigned int) ((_Bool) ((signed char) arr_3 [i_1] [i_3] [i_4])));
                            }
                        } 
                    } 
                    arr_12 [i_2] [(short)12] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_7 [i_2] [i_1 - 1] [5] [i_2]))) * ((~(((/* implicit */int) arr_3 [2U] [i_1] [i_2]))))))), (((unsigned long long int) ((((/* implicit */_Bool) (short)-21753)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_16 &= ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_2] [(short)2]);
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1725016587)) ? (2702148783U) : (((/* implicit */unsigned int) -1725016587))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6)));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21752))) : (-8935063337175166178LL)));
}
