/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (((((((arr_3 [i_0 + 4]) >> (((arr_2 [i_1]) - 4138104289880876685)))) * (((231 >> (((arr_1 [i_0] [i_1]) - 18))))))) == ((((13 - -804991785) * ((1 >> (((arr_1 [i_0] [i_0]) - 24)))))))));
                var_11 = (((((0 >> 1) * (var_5 == 27))) * ((((var_8 - 1) == (1 == -26599))))));
                var_12 *= (((((((((0 <= (arr_3 [i_0 - 2])))) == (var_9 % 1))))) == ((((((arr_0 [i_0] [i_0 - 1]) % 1))) - (((arr_3 [i_1]) >> 1))))));
            }
        }
    }
    var_13 = ((((((120 - 1) == (4579168310849436482 <= 229)))) >> ((27 - (65532 % 1)))));
    var_14 = ((((18 * 1) * (0 - 0))) % 1);
    var_15 = (((11 % -4612) * (((1514771118 - var_5) % (1 - 34359738367)))));
    #pragma endscop
}
