/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_5, (~var_10)))) ? (((var_6 || 1) ? var_12 : -5147215470515293)) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((((((((arr_2 [11] [i_1]) + 1))) ? (arr_3 [i_1]) : (var_12 > 1514777496175871736))) ^ (max(9223372036854775784, ((((arr_1 [i_0] [i_1]) ? var_9 : 161)))))));
                var_18 = arr_2 [i_0] [i_0];
                var_19 = (-908492985881252810 <= -591204678903535960);
            }
        }
    }
    var_20 = (max(var_20, ((((max(var_12, (1 && 1)))) ? (((min((var_2 > 17), var_3)))) : var_13))));
    #pragma endscop
}
