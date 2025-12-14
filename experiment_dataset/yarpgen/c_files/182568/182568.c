/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (0 <= 112);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 ^= (max((max((((9223372036854775807 ? -10799 : 0))), ((18246012883905812229 - (-32767 - 1))))), ((((((-1939648110 ? 16383 : -457))) ? ((3480323097790224419 ? 50122 : 947336951)) : (1 - -32765))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_19 *= (((45093 * 0) >= (1272309594597176030 <= -1)));
                        var_20 = (max(var_20, (48 || 0)));
                        var_21 *= (2662285263875161392 % 7126945318679198675);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] = (max((min(-42, 9223372036586340352)), 4008387381773089019));
                                var_22 = 1;
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] = min((15484193975154456307 == 4361278685006171083), (max(20456, 31)));
                    arr_17 [i_0] [i_2] [i_1] [i_0] = (11284927490933187165 == 255);
                }
            }
        }
    }
    var_23 = (min(var_23, ((max((((((0 >> (-1 + 6)))) ? (28 > -1352835886) : (min(18446744073709551615, 0)))), ((max((max(80, 22272)), (26046 <= 122)))))))));
    #pragma endscop
}
