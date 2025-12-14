/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((((((((var_12 ? var_17 : var_17))) ? ((1 ? 9769664929195421151 : var_9)) : (((var_11 ? var_5 : 1)))))) ? (((((-61 ? var_16 : var_7))) ? ((var_6 ? var_11 : -61)) : ((9223372036854775807 ? 17391 : var_11)))) : ((-1436657579 ? 1786498639 : (-32767 - 1)))));
    var_20 = ((((((((1 ? 3586974727 : -1))) ? ((var_0 ? var_2 : var_15)) : (((var_0 ? var_16 : var_4)))))) ? (((((7472 ? var_13 : var_5))) ? (((var_0 ? var_17 : -1))) : ((-14390 ? var_4 : var_8)))) : ((((((var_17 ? 0 : 27832))) ? ((var_8 ? var_3 : 1)) : ((var_15 ? var_17 : var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((((((((arr_5 [i_0 - 1] [2]) ? (arr_5 [i_1] [i_0]) : var_14))) ? ((var_7 ? var_0 : var_10)) : (((var_12 ? 3586974721 : (arr_0 [i_0 + 3]))))))) ? (((((((arr_4 [i_1] [i_1] [6]) ? var_7 : 9223372036854775807))) ? (((0 ? var_6 : (arr_1 [i_1])))) : ((var_10 ? var_8 : var_7))))) : (((((var_3 ? 18446744073709551615 : var_1))) ? ((511 ? var_0 : var_18)) : (((1672189003465752447 ? var_16 : (arr_1 [i_0]))))))));
                var_22 += (((((((((arr_2 [i_0] [i_1]) ? var_16 : 5680871410359284035))) ? ((2083 ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0]))) : ((var_17 ? (arr_1 [i_1]) : (arr_5 [i_0] [i_1])))))) ? ((((((arr_5 [i_0] [i_1]) ? var_0 : -1191497367309878904))) ? (((var_18 ? (arr_3 [i_0]) : var_14))) : ((var_13 ? var_15 : 16774555070243799169)))) : ((((((1672189003465752447 ? var_10 : var_18))) ? (((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_1]))) : ((var_17 ? 1 : (arr_5 [i_0] [1]))))))));
            }
        }
    }
    #pragma endscop
}
