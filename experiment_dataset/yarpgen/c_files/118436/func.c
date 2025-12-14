/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118436
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [20])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])))), (((int) var_4))))) ? (max(((-2147483647 - 1)), (9713281))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_0 [i_1 - 2]))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_1)))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 2147483647))))), (min((((/* implicit */int) (signed char)31)), (arr_5 [i_0] [i_0] [i_0]))))) : (min(((+(((/* implicit */int) arr_3 [i_0] [i_0] [(signed char)12])))), (((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0]) < (arr_5 [11] [11] [11]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = var_12;
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) -1717006038));
                    var_13 = ((signed char) arr_3 [i_1] [i_1] [i_1]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23; i_3 += 1) 
    {
        for (signed char i_4 = 2; i_4 < 22; i_4 += 2) 
        {
            {
                arr_16 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_4 + 2] [i_4 + 1])) : (((/* implicit */int) arr_14 [i_4 + 2] [i_4 - 1] [i_4 - 1]))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3 - 1])) ? (var_8) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)15)) ^ (arr_13 [i_3])))) ? (arr_12 [i_3 - 1]) : (((var_8) | (2147483647))))))))));
                arr_17 [i_3 - 1] [i_4] [i_4 + 2] = (signed char)-90;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                {
                    var_15 += ((((/* implicit */int) ((((-2147483647) & (-1963019319))) <= (886361670)))) & (((((/* implicit */int) var_4)) >> (((1205284622) - (1205284621))))));
                    var_16 = ((/* implicit */int) arr_9 [i_7] [i_7 + 2] [i_7 + 3] [i_7 + 3]);
                }
            } 
        } 
        arr_27 [i_5] [i_5] = ((/* implicit */int) var_1);
        var_17 = ((/* implicit */signed char) max((min((((2147483647) + (((/* implicit */int) (signed char)(-127 - 1))))), (((886361670) ^ (((/* implicit */int) arr_0 [i_5])))))), (min((((/* implicit */int) min((arr_23 [i_5]), (arr_22 [i_5] [i_5])))), (127)))));
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 20; i_8 += 4) 
        {
            for (signed char i_9 = 2; i_9 < 21; i_9 += 1) 
            {
                {
                    arr_33 [i_9] [i_9] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) var_10))) ? (var_12) : (min((((/* implicit */int) var_7)), (-1848496721))))) > (((((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) + (2147483647))) << (((/* implicit */int) arr_31 [i_8 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]))))));
                    arr_34 [i_5] = ((/* implicit */signed char) (-(var_8)));
                    var_18 = ((/* implicit */signed char) ((min((((/* implicit */int) (signed char)-14)), (((((/* implicit */_Bool) arr_4 [i_8] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_32 [i_8] [i_8] [i_8 - 1])))))) / (((-846276657) + (arr_28 [i_8 - 1] [21])))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_15 [i_5] [i_5])) | (arr_13 [i_5]))) : (arr_5 [i_5] [i_5] [i_5])))) ? (((-128) | (((/* implicit */int) arr_20 [i_5] [i_5])))) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_9)))), (((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)-37))))))));
    }
}
