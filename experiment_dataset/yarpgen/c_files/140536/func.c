/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140536
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
    var_11 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = var_9;
                var_13 = -2038587915;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 3; i_2 < 22; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */int) arr_5 [i_2]);
        var_14 = ((/* implicit */long long int) var_3);
    }
    for (int i_3 = 3; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((long long int) ((((/* implicit */_Bool) 1420951160)) ? (((/* implicit */int) (short)32740)) : (((/* implicit */int) (short)27277))));
        var_15 = ((/* implicit */int) arr_8 [i_3]);
    }
    /* LoopSeq 2 */
    for (long long int i_4 = 4; i_4 < 12; i_4 += 3) 
    {
        var_16 = ((/* implicit */int) (-(((long long int) var_3))));
        var_17 = max((max((((/* implicit */long long int) arr_13 [14])), (((long long int) arr_7 [i_4] [i_4])))), (((/* implicit */long long int) (-(arr_7 [i_4 + 1] [i_4])))));
        var_18 = ((/* implicit */int) max((((/* implicit */long long int) arr_7 [i_4] [i_4])), (((((/* implicit */_Bool) 1420951157)) ? (-6593025443886705818LL) : (-3939604691127428609LL)))));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) 1914036777)) & (6015317834489772930LL)))))) ? (max((((-1420951160) | (var_5))), (((/* implicit */int) ((((/* implicit */int) (short)-32740)) < (-1420951153)))))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_16 [i_5] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_4)) <= (var_0)))) : (((/* implicit */int) ((((/* implicit */long long int) 1420951152)) >= ((-9223372036854775807LL - 1LL)))))))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            for (short i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) 2147483647);
                    var_20 = ((/* implicit */int) max((arr_5 [i_5]), (max((min((var_0), (((/* implicit */long long int) arr_14 [i_5])))), (((/* implicit */long long int) arr_16 [i_6] [i_6 + 2]))))));
                    arr_24 [i_5] [i_6] [i_6] [i_7] |= ((/* implicit */int) ((((/* implicit */long long int) 1420951160)) | (-553396307692217826LL)));
                    var_21 = ((/* implicit */short) ((arr_17 [i_7 - 1] [i_6 + 2] [i_6]) >= (((/* implicit */long long int) ((int) arr_13 [i_5])))));
                }
            } 
        } 
    }
}
