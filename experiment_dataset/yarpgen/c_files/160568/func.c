/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160568
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(2147483647)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned int) arr_2 [i_0] [i_2]);
                    var_13 += (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2])));
                    var_14 = ((/* implicit */unsigned int) ((signed char) arr_0 [i_2]));
                    var_15 += ((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)0)))) & (((((/* implicit */_Bool) (signed char)-68)) ? (arr_1 [i_0]) : (var_12)))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) (signed char)-62);
                        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_4 - 1] [i_1] [i_4 - 1])) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_3] [i_4]))));
                    }
                    var_18 ^= ((/* implicit */short) ((((-204987669132392561LL) ^ (((/* implicit */long long int) 1298484072)))) ^ (((/* implicit */long long int) ((1298484072) + (((/* implicit */int) (signed char)72)))))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 24; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (signed char)0))));
                                arr_21 [i_0] [8] [i_3 + 2] [i_5 - 1] [i_6] = ((/* implicit */int) (+(arr_12 [i_3 + 1] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */int) ((18014398509481983LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_1] [i_1] [i_0])))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) (~(1298511183258454977ULL)));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (short)4092))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_7]))) != (-204987669132392561LL)));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) (~(-6969616054849011969LL)))) ? (((unsigned int) 5916976359594934859LL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)20] [i_1] [i_0] [i_0])))))));
                }
            }
        } 
    } 
    var_25 ^= ((/* implicit */_Bool) var_1);
    var_26 |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)75)) < (((/* implicit */int) (_Bool)1))));
    var_27 *= ((/* implicit */unsigned long long int) var_0);
}
