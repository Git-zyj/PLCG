/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171124
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] [i_2] [(_Bool)1] [i_3] [i_4] [i_1] = (i_2 % 2 == 0) ? (((/* implicit */int) (((+(arr_6 [i_4] [i_1 + 2] [i_1 + 3]))) << (((((unsigned long long int) min((arr_13 [i_2] [(unsigned char)13]), (var_10)))) - (5526282433632387659ULL)))))) : (((/* implicit */int) (((+(arr_6 [i_4] [i_1 + 2] [i_1 + 3]))) << (((((((unsigned long long int) min((arr_13 [i_2] [(unsigned char)13]), (var_10)))) - (5526282433632387659ULL))) - (2108724231091220467ULL))))));
                                var_19 = ((/* implicit */unsigned int) arr_12 [i_0] [i_2] [i_2] [i_3] [i_4]);
                                var_20 = ((/* implicit */_Bool) max((arr_5 [i_2 + 1] [i_1 + 3] [i_1 - 1]), (arr_5 [i_2 + 1] [i_1 + 3] [i_1 - 1])));
                                var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -1929480423661991637LL)) ? (((/* implicit */int) (unsigned short)19502)) : (-991916372)))));
                            }
                        } 
                    } 
                } 
                var_22 = var_12;
                var_23 = ((/* implicit */_Bool) ((939524096) & (((/* implicit */int) (unsigned short)46038))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((-697175101744490699LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))))))));
}
