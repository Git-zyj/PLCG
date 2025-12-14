/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148311
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
    var_13 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_12))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1]);
                                var_15 = ((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4]) || (((/* implicit */_Bool) min((arr_10 [i_1] [i_1] [i_4 + 3] [i_4] [i_4 + 4] [i_4 + 4] [i_4 + 4]), (arr_10 [(signed char)4] [i_0] [i_4 - 2] [i_4 - 2] [i_4] [i_4 + 4] [i_4 + 3]))))));
                                var_16 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_0 [i_4 - 2]), (arr_0 [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_9))));
                        arr_16 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) max((((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((arr_14 [i_0] [i_1] [i_1] [i_5]) - (1348433318260926357LL))))), (max((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_2] [i_5]))))));
                        arr_17 [i_1] = ((/* implicit */_Bool) arr_10 [i_5] [i_2] [i_2] [i_2] [i_1] [i_0] [i_0]);
                    }
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                    {
                        var_18 = min((max(((+(arr_1 [14ULL] [14ULL]))), (max((((/* implicit */long long int) arr_4 [i_2] [i_6])), (arr_14 [i_0] [i_0] [i_2] [i_0]))))), (max((arr_7 [i_2] [i_1] [i_2] [i_1]), (((/* implicit */long long int) min(((short)-24547), (((/* implicit */short) var_5))))))));
                        arr_20 [i_1] = ((/* implicit */signed char) ((short) (short)-24571));
                        var_19 = ((/* implicit */unsigned short) (short)-24534);
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min(((((((-(((/* implicit */int) var_11)))) + (2147483647))) << (((((min((((/* implicit */long long int) (short)-24561)), (-2452064036199824786LL))) + (2452064036199824805LL))) - (19LL))))), (((/* implicit */int) (unsigned short)44846)))))));
                        arr_25 [i_1] [i_1] [i_2] [i_7 + 1] = ((/* implicit */long long int) ((((unsigned long long int) var_8)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7 + 1])))));
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((var_2), (((/* implicit */long long int) arr_23 [i_0] [i_1] [i_2] [(short)5])))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))))));
                    }
                }
            } 
        } 
    } 
}
