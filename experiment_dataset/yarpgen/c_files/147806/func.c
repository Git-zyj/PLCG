/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147806
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17301)) ? (max((13360861579220628698ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) min((1176215790), (((/* implicit */int) var_1))))) : (-5089973846496602440LL)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) (((((-(arr_3 [i_0]))) - ((-(16140901064495857664ULL))))) == (((/* implicit */unsigned long long int) (+(arr_0 [i_2] [(_Bool)1]))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */long long int) (~(-1043343337)))) ^ (((((/* implicit */_Bool) arr_12 [(short)9] [(short)9])) ? (arr_0 [(unsigned char)6] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0])))))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_16 += arr_12 [(_Bool)1] [i_4];
                                var_17 *= (+(((arr_11 [i_0]) * (((((/* implicit */int) (short)10960)) / (var_0))))));
                                var_18 -= ((/* implicit */_Bool) (unsigned short)8);
                                arr_15 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] [i_4] = (!(((/* implicit */_Bool) (-(-1043343351)))));
                                arr_16 [i_1] [7LL] [i_1] [i_1] = ((/* implicit */unsigned short) arr_12 [i_0] [i_0]);
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                            {
                                var_19 ^= ((/* implicit */unsigned short) arr_0 [(unsigned char)8] [(_Bool)1]);
                                arr_19 [i_0] [i_5] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((14026297072893154808ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))))));
                                arr_20 [i_1] [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 545238926))))));
                                arr_21 [i_0] [(_Bool)1] [i_5] [i_1] [i_5] = arr_1 [i_3];
                            }
                        }
                    } 
                } 
                arr_22 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) arr_3 [i_0]));
                arr_23 [i_0] [11] [i_1] = ((/* implicit */short) arr_9 [11ULL] [i_0] [i_1] [(_Bool)1]);
            }
        } 
    } 
    var_20 = max((((/* implicit */int) var_9)), ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) != (var_0)))))));
}
