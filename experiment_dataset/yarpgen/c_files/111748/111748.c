/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 ^= var_10;
    var_19 = var_7;
    var_20 ^= var_2;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((17076 ? 9981 : 10038590805968558638));
        arr_4 [i_0] = -17055;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_21 ^= var_13;
            var_22 -= (arr_5 [i_1]);
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        var_23 ^= 55548;
                        var_24 = var_3;
                    }
                }
            }
            var_25 = ((!(arr_1 [11] [i_3 - 2])));
            var_26 = (max(var_26, (arr_0 [i_1])));
            var_27 ^= (arr_11 [i_3 + 1] [i_1]);
        }
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            arr_22 [i_6] = (((arr_10 [i_1]) <= (arr_12 [i_6 + 1] [i_6 - 1] [i_1])));
            var_28 &= (~9975);
        }
        arr_23 [i_1] = 55557;
    }
    #pragma endscop
}
