/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((((0 || 1) >= (var_1 >= var_4)))) - (((31 / 2007261094) >> (((-19055 % -19048) + 14))))));
    var_13 = (576384811 > 48);
    var_14 = (max(var_14, ((((185 && 1) % ((((var_5 && var_10) > (var_1 && var_4)))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 = (((((((-5 + 2147483647) << (195 - 195))) >> ((((1 * (arr_1 [i_0]))) - 5906281104945865137)))) <= (((var_2 - var_10) * (-2813287859422126284 && var_0)))));
        var_16 = (((-1451144622 > 158640760349939703) <= (((1 <= 7982674599127433252) % (var_7 * var_3)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 = (((((((((arr_1 [i_1]) < (arr_0 [i_1]))) && (((0 - (arr_3 [i_1])))))))) % (2162491462126343039 * 3817)));
        var_18 = ((((((var_2 % -19048) <= (16284252611583208594 / var_2)))) - (((((((var_9 < (arr_1 [i_1]))))) != ((-1930814548 / (arr_1 [0]))))))));
        arr_4 [6] [i_1] &= ((((((((arr_2 [1] [i_1]) > var_10))) | (var_1 == var_9))) >> (((((((arr_3 [6]) << (842339250907167419 - 842339250907167414)))) < (-19076 * 2293167452874793567))))));
    }
    #pragma endscop
}
