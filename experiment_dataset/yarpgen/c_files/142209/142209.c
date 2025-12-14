/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (((((134217664 & ((29863 ? -21 : -1855743645659389657))))) ? -1 : 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [i_0] = 67108863;
                                var_17 = (((arr_0 [i_0]) ? 1 : 11734271041299341436));
                                var_18 = ((((((max(1, 30065))) == ((141 ? 1 : 1)))) ? ((168 ? -6475734537845796726 : 1905724867)) : -1875937307));
                                var_19 = (arr_1 [i_4]);
                            }
                        }
                    }
                    var_20 = ((((((((~(-127 - 1)))) ? 28275 : ((2970467948 ? 13610187132608341139 : 1))))) ? ((-527557187 ? (((min(var_5, 1)))) : 11867408578035920447)) : (((((-116 ? 14540793985248972566 : 367681854713098863))) ? 18446744073709551615 : (133 | 9223372036854775799)))));
                }
            }
        }
    }
    var_21 = (((((4201645766806573231 ? (!3538149813) : -var_1))) ? (((var_9 ? 17710 : ((max(var_13, var_0)))))) : 1));
    var_22 = ((0 ? 11263045210651092170 : var_9));
    #pragma endscop
}
