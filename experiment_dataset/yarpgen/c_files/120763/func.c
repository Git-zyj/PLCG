/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120763
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) (-(arr_3 [i_1])));
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((((/* implicit */int) min(((_Bool)1), (((((/* implicit */int) arr_6 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_1]))))))), (((((/* implicit */_Bool) (short)13299)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (short)13311)))))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_5);
                            arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3])))))) : (var_1)))) ? (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) var_11)), (var_9)))))) : (arr_4 [i_1 - 2] [i_1 + 2]));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) arr_8 [i_0] [i_1 - 3] [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_19 [i_4] [i_1] [i_1] [i_4 - 1] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((long long int) var_7)), (((/* implicit */long long int) ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))), (var_7)));
                            arr_20 [i_5] [0LL] [0LL] [i_0] &= ((/* implicit */unsigned short) var_7);
                            var_15 = ((/* implicit */long long int) var_9);
                            var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_4 + 1] [i_1 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)13299)))))))) : (var_4)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (long long int i_7 = 1; i_7 < 13; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_17 |= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_9] [i_8 + 1] [i_7 - 1])))))));
                            var_18 = var_6;
                            var_19 ^= ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) max((var_8), (arr_28 [i_6] [i_6] [i_6])))), (9813902368385423957ULL)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_10 = 4; i_10 < 13; i_10 += 1) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_20 = arr_36 [i_6] [i_6] [i_6] [i_11 - 1] [i_12];
                                arr_40 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6] [i_6] [i_6 + 1] = ((/* implicit */unsigned long long int) arr_15 [i_10 - 3] [i_10 - 3] [i_7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), (var_4)));
}
