/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168293
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_14 = 1709931943306110467LL;
                        arr_12 [i_0] [15LL] [i_3] = ((long long int) -8786241825815880884LL);
                        var_15 = arr_9 [i_0 - 3] [8LL] [i_2];
                        arr_13 [i_3] [i_0] [i_2] [7LL] [i_0] [i_0] = min((((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (max((1900633216001356899LL), (arr_4 [i_0] [i_3]))) : (max((arr_11 [i_0 - 3] [i_1] [14LL] [i_3 + 3]), (-6865027216806992671LL))))), (-8786241825815880884LL));
                    }
                    arr_14 [0LL] [i_1] [11LL] [i_0] = max((arr_7 [i_0 - 2] [i_1] [9LL] [i_1]), (6013352320006108572LL));
                    var_16 = ((long long int) max((arr_7 [i_0 + 2] [i_0] [i_0] [8LL]), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (1709931943306110467LL) : (4611685468671574016LL)))));
                }
            } 
        } 
    } 
    var_17 = 1709931943306110464LL;
}
