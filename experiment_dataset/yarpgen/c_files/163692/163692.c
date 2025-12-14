/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (((((4281444845 ? 495711290 : var_0))) ? ((((14965 ? (arr_3 [i_0] [i_0] [1]) : (arr_8 [i_1] [i_1]))))) : ((((var_0 ? (arr_3 [i_0] [i_0] [i_2]) : (arr_8 [i_0] [i_1])))))));
                    var_14 = ((((((((14965 ? var_9 : 17592186044415))) ? 18014398442373120 : (((arr_7 [i_0] [15]) ? 90 : var_9))))) ? ((90 ? -30783 : 127)) : var_4));
                    var_15 = ((-2718890341332723308 ? (((arr_8 [i_2] [i_2]) ? 136339441844224 : (((arr_8 [i_0] [16]) ? 9223372036854775807 : var_3)))) : ((38917 ? -2559005950023308705 : -77))));
                    arr_9 [i_2] [i_2] [i_1] [i_0] = ((((((((var_7 ? var_3 : 9216396924142239941))) ? var_1 : ((14965 ? 136339441844224 : 18014398442373120))))) ? (((((((arr_5 [i_0] [i_0] [1]) ? var_9 : var_5))) ? (((arr_7 [i_0] [i_2]) ? var_11 : 59847)) : ((-90 ? (arr_1 [i_0]) : (arr_1 [i_1])))))) : (((arr_6 [6] [i_0]) ? (((arr_7 [10] [4]) ? 1339026104 : 61)) : (((38917 ? (arr_7 [i_0] [i_2]) : 38917)))))));
                    var_16 = ((((((var_8 ? (arr_4 [i_0] [i_1]) : (arr_3 [6] [6] [i_2])))) ? ((var_7 ? var_1 : (arr_8 [i_2] [8]))) : -3321393509703999495)));
                }
            }
        }
    }
    var_17 = ((((((2827345946 ? var_1 : 38917))) ? var_0 : ((226 ? var_5 : var_11)))));
    #pragma endscop
}
