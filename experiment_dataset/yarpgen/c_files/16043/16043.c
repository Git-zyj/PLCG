/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((-15001 & ((57669 ? -3702894821588574239 : 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = (((min(((-(arr_2 [i_1]))), -4096)) | (((min(-14996, (arr_0 [i_1])))))));
                    var_19 = (((min((((-15002 && (arr_4 [i_0])))), ((15 ? (arr_2 [i_1]) : -4113)))) <= 896011435));
                }
                var_20 = (max(var_20, ((((((arr_0 [i_0]) <= (arr_0 [i_1]))) ? ((~(!-28293))) : ((((arr_2 [i_0]) != ((((arr_7 [i_0] [i_0] [i_0]) >> (((arr_3 [i_0]) - 55)))))))))))));
            }
        }
    }
    #pragma endscop
}
