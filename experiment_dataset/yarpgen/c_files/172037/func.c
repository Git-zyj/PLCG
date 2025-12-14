/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172037
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
    var_15 = 14835194147538172986ULL;
    var_16 = ((((/* implicit */_Bool) 9201952752795958588ULL)) ? (((/* implicit */unsigned long long int) 8048242886620791788LL)) : (14835194147538173000ULL));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (9244791320913593028ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? ((~(9244791320913593028ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : (14835194147538172967ULL)));
                }
                for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_18 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_3])), (var_5))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                arr_16 [i_5] [(signed char)3] [i_0] [i_5] [i_0] [i_0] [i_0] = arr_3 [i_4];
                                arr_17 [i_1] [i_1] [i_3] [i_5] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) arr_14 [i_5] [i_5] [i_3] [i_5] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_5] [i_5])) ? (arr_10 [i_4] [i_5]) : (17560372891811372011ULL))))));
                            }
                        } 
                    } 
                }
                arr_18 [i_0] [i_1] &= ((/* implicit */long long int) ((((arr_2 [i_0] [i_1] [i_1]) ^ (var_3))) << (((arr_2 [i_0] [i_0] [i_0]) ^ (arr_2 [i_0] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        {
                            arr_23 [i_6] [i_0] = ((unsigned long long int) max((var_3), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                            var_19 += var_3;
                            arr_24 [i_0] [i_1] [i_7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_6] [i_1]))))));
                            var_20 = var_14;
                            var_21 = ((/* implicit */_Bool) 9201952752795958588ULL);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) 3611549926171378622ULL);
                                arr_35 [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((3611549926171378616ULL) - (3611549926171378589ULL)))))) ^ ((~(var_14)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
