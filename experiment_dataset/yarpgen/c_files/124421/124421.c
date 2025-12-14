/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (((((((((-307672701376877375 ? 2091761906 : -2091761920))) + var_8)) + 9223372036854775807)) << (((((arr_4 [i_2] [i_2] [i_1] [5]) - (min(3453822772440428100, var_11)))) - 18086312424282881744))));
                    arr_7 [i_2] [i_1] [i_2] [8] = ((((((min(var_15, 896052061)) - 41668))) || (~1157654692)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            {
                arr_12 [i_4] [4] [i_3] = (~2091761906);
                arr_13 [i_3] [i_3] [i_3] = ((((((-(arr_8 [i_3])))) ? (!3453822772440428100) : (1157654692 <= -2147483636))));
            }
        }
    }
    var_17 = (max((max((9968802031580965001 && 15971465327829016912), var_3)), (min(var_13, ((var_9 << (var_14 + 842390367)))))));
    #pragma endscop
}
