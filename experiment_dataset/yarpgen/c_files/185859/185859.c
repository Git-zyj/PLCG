/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((65535 ? 156 : 4294967273)) | ((((!var_4) ? (var_4 >= var_4) : var_9)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_12 = ((~((((((arr_1 [i_0] [i_0]) ? var_3 : 189)) > 22)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = 7713;
                    arr_6 [i_0] [i_1] [i_1] [i_0] = (((((((var_0 ? var_10 : var_5))) ? (111 - 252) : 65))) ? var_1 : 566);
                    var_14 ^= ((var_9 * (arr_0 [i_0])));
                    var_15 ^= ((+((var_5 ? (arr_0 [i_1 - 1]) : var_8))));
                    arr_7 [i_0] [i_1] [i_1] [i_0] = (((((var_2 ? ((var_4 ? 127 : -17226)) : -240))) ? (((arr_2 [i_0] [i_1] [4]) / ((65535 ? var_5 : (arr_1 [1] [1]))))) : var_6));
                }
            }
        }
        arr_8 [i_0] = ((((!((max(8144246241900708543, 807191474756633200))))) ? (var_8 >= var_0) : (!1885156058)));
    }
    #pragma endscop
}
