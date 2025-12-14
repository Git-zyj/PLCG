/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143137
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)11))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -655227816)) ? ((-2147483647 - 1)) : (-655227806)));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((min(((+(var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (arr_4 [i_1])))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_3 [i_1])))) ? (min((-4949203239862308009LL), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) 3351413809U)))))));
        var_15 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -1))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_11 [i_2] [i_3] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned short)65526))))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3])) ? (5854492593370638662LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194)))));
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (655227815) : (((/* implicit */int) (unsigned char)76))));
            var_17 = ((/* implicit */unsigned short) (_Bool)0);
        }
        arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-24403)) ? (arr_4 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2])))));
        var_18 = ((((arr_9 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3097989851U)) ? (((/* implicit */unsigned int) 528209144)) : (0U)))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) arr_0 [i_2])) : (2449424258537217763LL))));
        arr_14 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        var_19 = ((/* implicit */unsigned char) (~(((1887190659) << (((((/* implicit */int) arr_10 [i_2] [i_2])) - (179)))))));
    }
    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_4])) >> (((9223372036854775807LL) - (9223372036854775803LL)))))), (arr_15 [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (short)-24406)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((-9223372036854775807LL) | (((/* implicit */long long int) 655227805))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-24406))))) : (max((((/* implicit */long long int) arr_0 [i_4])), (5136187750989453939LL)))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 4; i_5 < 19; i_5 += 3) 
        {
            arr_22 [i_4] [i_5 - 3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            var_20 = ((/* implicit */signed char) (+(655227819)));
        }
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((signed char) -864054666));
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 1]))));
    }
    var_23 = ((/* implicit */unsigned int) var_4);
    var_24 = ((/* implicit */long long int) ((_Bool) 4294967295U));
    var_25 = ((/* implicit */unsigned char) (((-(-407837583))) ^ (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) -8078504323066988076LL))))), (var_5))))));
}
