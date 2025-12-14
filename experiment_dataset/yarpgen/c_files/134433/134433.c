/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 ^= (((((~51353) ? (((arr_1 [i_0] [i_2]) ? (arr_4 [i_0]) : (arr_2 [i_0]))) : (arr_7 [i_1 - 4] [i_2]))) | ((~(((arr_4 [i_0]) | (arr_7 [i_2] [i_2])))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_19 = (max(var_19, ((((((~(arr_12 [i_0])))) ? ((max(((!(arr_8 [i_1] [i_1]))), ((!(arr_1 [i_0] [i_1])))))) : (((((-573861505 ? 14174 : 0))) ? (arr_3 [i_2]) : ((14182 ? (arr_8 [i_1] [i_1]) : (arr_7 [i_2] [i_1]))))))))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_20 = (((((((((arr_2 [i_0]) % (arr_6 [i_0])))) ? ((~(arr_5 [i_0] [i_2]))) : ((((arr_2 [i_1 + 3]) * (arr_10 [i_0] [i_2] [i_3] [i_4]))))))) || ((!((((arr_1 [i_0] [i_1]) ? (arr_2 [i_4]) : (arr_8 [i_0] [i_3]))))))));
                            arr_15 [i_0] [i_1] = ((!((((min(58720256, (arr_3 [i_2])))) != (arr_4 [i_3])))));
                            var_21 *= ((arr_0 [i_1 + 2]) ? (min(27477, ((((arr_9 [i_1] [i_2] [i_3] [i_3]) < -32423))))) : ((((((((arr_12 [i_0]) ? 14186 : (arr_12 [i_4])))) || ((((arr_12 [i_4]) ? 0 : (arr_7 [i_1 + 3] [i_3])))))))));
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = (arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_22 += ((!(arr_6 [i_0])));
                        }
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            var_23 = ((-((44109 ? (((51354 ? (arr_2 [i_1]) : (arr_6 [i_3])))) : (arr_5 [i_0] [i_0])))));
                            var_24 = 14182;
                        }
                    }
                }
            }
        }
    }
    var_25 = var_13;
    var_26 = ((((((((14174 ? var_13 : 4121941716))) ? ((2125698624 ? 32 : 1886)) : 51853))) ^ ((((max(899953508, 51362))) ? 5280109507417215754 : var_2))));
    #pragma endscop
}
