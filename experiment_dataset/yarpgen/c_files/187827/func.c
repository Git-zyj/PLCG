/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187827
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-9223372036854775797LL) > (((/* implicit */long long int) var_1)))))) : (max((var_0), (var_5)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) arr_7 [i_1 - 1]);
                var_12 ^= ((/* implicit */short) var_5);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_14 [i_1] [i_2] = (-(((/* implicit */int) arr_3 [i_2])));
                            var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_5 [i_1 - 1])))) ? (((/* implicit */unsigned int) -1186053233)) : (((arr_5 [i_1 - 1]) - (arr_5 [i_1 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (-1473884244) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_6] [i_5] [i_4] [(signed char)7] [(unsigned short)5])) - (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)113)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6] [i_4] [(unsigned short)8] [(unsigned short)8]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967289U))))))));
                                arr_22 [i_0] [i_1] [i_5] [i_5 - 1] [i_6] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))) : (((/* implicit */int) (unsigned short)8046)))) : (max((max((arr_6 [i_4]), (((/* implicit */int) var_7)))), ((~(((/* implicit */int) arr_0 [(unsigned char)1] [i_1]))))))));
                                var_15 = ((/* implicit */short) (-(arr_13 [i_6] [i_1 - 1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
}
