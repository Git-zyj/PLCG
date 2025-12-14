/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 171140006;
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 ^= (max(171139984, ((~((var_0 ? var_9 : var_5))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_10 [16] [i_1] [i_1] [i_1] = 171140017;
                    var_16 = ((((max(var_1, ((1 ? 1 : 3879056338))))) ? (((var_8 || (arr_6 [i_0 - 3] [i_1])))) : (((((max(30832, 854646588))) == (arr_8 [i_0] [i_0 - 3] [i_2 - 1]))))));
                    var_17 = 6764972935472575428;
                }
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    var_18 = (max(1507952147, 27975));
                    var_19 = (min(var_19, (arr_8 [i_0] [i_0] [i_0])));
                }
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_20 += max(var_8, 0);
                    arr_16 [i_1] [i_1] = 9018139113842484922;
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    var_21 = (min(var_21, (((((((5124243906299037770 - (arr_0 [i_0]))))) << (((((arr_18 [i_0] [i_0] [i_5]) + 1251802243)) - 20)))))));
                    var_22 = (max(var_22, 20906));
                }
                arr_20 [i_0] |= (max(2249600790429696, (~-18720)));
            }
        }
    }
    var_23 = (min(3034, 2787015145));
    #pragma endscop
}
