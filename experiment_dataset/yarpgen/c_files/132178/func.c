/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132178
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) (+(var_9)));
        var_15 ^= ((/* implicit */unsigned char) var_3);
        arr_2 [i_0 + 2] [i_0] = ((/* implicit */short) ((arr_0 [i_0 + 1]) ? (((/* implicit */int) var_13)) : (((var_13) ? (((/* implicit */int) arr_0 [(signed char)6])) : (((/* implicit */int) var_3))))));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 4; i_3 < 18; i_3 += 1) 
            {
                {
                    arr_12 [i_1] = ((/* implicit */unsigned int) var_11);
                    var_16 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1]))) ^ (var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) ((1118378484U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_2] [14U] [i_3] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) >> (((((/* implicit */int) arr_4 [i_3])) - (21528)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))) : (((1118378484U) | (arr_14 [i_1]))))), (((3176588799U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 + 1] [i_1])))))));
                        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)6] [(unsigned short)6])) ? (((/* implicit */int) arr_5 [i_1 - 1] [20U])) : (((/* implicit */int) arr_5 [i_1 - 3] [6U]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_1 + 1] [(unsigned short)2])))) : (((/* implicit */int) min((var_3), (var_3))))));
                        var_18 ^= ((/* implicit */_Bool) max((max((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2281153909800414893LL))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_11))))))))));
                        arr_17 [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */_Bool) max((((max((0U), (((/* implicit */unsigned int) arr_8 [i_1])))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)5)))))), (((/* implicit */unsigned int) ((unsigned short) (~(13552784031760794243ULL)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)47929)) : (((/* implicit */int) var_5))))));
                                var_20 += ((/* implicit */unsigned int) (_Bool)1);
                                var_21 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_13 [i_2] [i_1] [i_1] [i_1 - 1])) & (((var_11) ? (arr_13 [(short)8] [i_1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 - 2] [i_1 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_1]))))) ? (((/* implicit */int) ((signed char) var_9))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_18 [i_1]))))));
    }
    var_22 += ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)109)) == (((/* implicit */int) var_6))))), (min((((/* implicit */unsigned int) (short)-22191)), (var_7))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
}
