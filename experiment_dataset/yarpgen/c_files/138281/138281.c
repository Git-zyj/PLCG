/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 -= (arr_0 [i_0]);
                var_16 -= 16233;
                var_17 = (((((6842578749107317017 < (((4540478102520805194 ? 60536 : 317694795)))))) <= ((min(-21924, var_0)))));
                arr_7 [21] = (arr_5 [1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 += (-32767 - 1);
                            var_19 = ((14800579789576088231 && (((-21924 | ((60 ^ (arr_3 [i_0] [i_0]))))))));
                            var_20 *= ((((max((max((arr_6 [i_1] [i_1]), var_12)), 253))) ? (((arr_3 [i_0] [i_0]) & (var_11 ^ var_5))) : (arr_1 [i_2])));
                            var_21 += ((-(((arr_8 [i_0] [i_1] [i_2]) ? (arr_1 [i_0]) : (arr_1 [i_3])))));
                            arr_12 [i_0] [8] [8] [8] [i_0] &= (16 <= -13085);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 7;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 6;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_22 &= 59;
                                var_23 += (max((((arr_5 [12] [i_6] [i_4]) & (arr_5 [i_5 - 2] [i_6] [0]))), (((16 >> (((arr_11 [i_8] [i_8 + 2]) - 479451737)))))));
                                var_24 = (max(var_24, var_11));
                                arr_29 [i_6] [i_5] [i_5 - 1] [i_5 - 1] [1] = ((max(706997188713865190, (((var_14 ? 2147483647 : 2147483636))))));
                            }
                        }
                    }
                    var_25 = (min(var_25, ((((((((-82 ? var_10 : var_2)) / var_10))) ? 197 : (arr_6 [i_5] [i_5]))))));
                }
            }
        }
    }
    var_26 = 2517335169;
    var_27 = 69;
    #pragma endscop
}
