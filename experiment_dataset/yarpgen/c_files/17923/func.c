/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17923
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
    var_15 &= ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [7] [i_2] [i_0] [i_3] [13LL] = ((/* implicit */short) arr_8 [i_0] [i_0]);
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_11 [i_0] [10ULL] [i_2] [i_3]))));
                                var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_3]))))) ? (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_10 [20ULL])))) : (((((/* implicit */int) arr_10 [i_2])) & (((/* implicit */int) arr_10 [(signed char)16]))))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_4] [i_0] [i_2] [(_Bool)1])) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [18]))))) & (arr_7 [(short)21] [i_1] [i_2] [(_Bool)1]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_8 [i_0] [i_2])), (var_14))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) max(((unsigned short)38893), (((/* implicit */unsigned short) (signed char)-117))))), (arr_9 [(short)2] [i_1] [(unsigned char)14] [i_2]))) : (((/* implicit */unsigned long long int) min((4822822701139259057LL), (-4822822701139259058LL))))));
                    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [(_Bool)1]))) : (max((var_11), (((/* implicit */unsigned int) arr_11 [12] [i_1] [i_2] [i_2]))))))), (min((((/* implicit */unsigned long long int) ((var_13) != (arr_6 [(signed char)4] [i_0] [i_2])))), (((((/* implicit */_Bool) arr_0 [i_1] [(unsigned char)1])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_6 [i_0] [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_14);
}
