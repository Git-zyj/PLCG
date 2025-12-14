/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15527
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] = 0LL;
                var_10 = var_3;
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [14LL] [i_3] = ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-3724055119154029341LL) : (4611686018427387904LL))) / (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]), (min((-46103335117800691LL), (-1682262543970436433LL))))));
                            var_11 = min((35046933135360LL), (-9223372036854775793LL));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 ^= var_5;
    var_13 = ((long long int) min((min((2859832163801745623LL), (var_5))), (min((var_8), (var_7)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_13 [i_4] [i_4] = var_5;
        arr_14 [9LL] = var_2;
        arr_15 [4LL] = ((long long int) arr_12 [i_4] [i_4]);
        /* LoopNest 3 */
        for (long long int i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        arr_26 [i_4] [i_4] [7LL] [5LL] [i_5] = ((long long int) arr_22 [i_5 - 2]);
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1682262543970436433LL)) ? (var_9) : (arr_22 [11LL])))) && (((/* implicit */_Bool) arr_11 [i_5 - 1] [3LL])))))));
                        arr_27 [i_5] [i_5] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_5]))));
                    }
                } 
            } 
        } 
        arr_28 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1682262543970436409LL) : (-1734677966912879943LL))))));
    }
}
