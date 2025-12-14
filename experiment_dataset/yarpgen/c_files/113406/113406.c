/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 > (((var_6 > (max(var_2, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 ^= (((max(17741, (arr_1 [i_0 - 1]))) >> (var_9 - 9777)));
                var_13 *= ((var_0 < (((~1) - (arr_3 [0])))));
                arr_5 [i_0] = (((((var_4 & (arr_1 [i_0 - 2])))) ? (-9223372036854775806 != 17741) : (((arr_1 [i_0 + 3]) ^ (arr_1 [i_0 - 2])))));
                arr_6 [i_0] [i_0] [i_0] = (((var_8 / (arr_2 [i_0 - 2] [i_0 + 1]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_14 *= 92;
        var_15 = ((((-(-50 / 146))) == ((((arr_0 [i_2]) != var_7)))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_16 *= (min(((((10544799375669863470 && -3687532272268642384) || ((max(17749, 9627)))))), var_5));
        var_17 = ((((max(-6181265480083713291, (arr_10 [i_3]))) + (arr_4 [i_3]))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_18 *= (((((arr_11 [i_4]) + (arr_11 [i_4]))) % 20));
        var_19 = (((54 | (arr_3 [i_4]))));
    }
    var_20 = var_6;
    #pragma endscop
}
