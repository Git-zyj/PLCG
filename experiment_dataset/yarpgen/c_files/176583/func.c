/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176583
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
    var_19 = ((/* implicit */unsigned short) ((var_18) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)59))))))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_0))));
    var_21 += ((/* implicit */short) (+(562403624)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_1])));
            var_23 = ((/* implicit */unsigned short) (+(-1521056628)));
            arr_6 [i_0] = (signed char)(-127 - 1);
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)126)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))));
            var_25 = ((/* implicit */short) (-(((/* implicit */int) (!(var_12))))));
        }
        var_26 = ((/* implicit */int) arr_5 [i_0] [i_0]);
        var_27 &= ((/* implicit */short) (!(((/* implicit */_Bool) min((min((var_1), (-1521056628))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) min((-1521056628), (((/* implicit */int) (signed char)-20)))))));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) ((int) var_18));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (min((((((/* implicit */int) (signed char)111)) ^ (((/* implicit */int) (short)-23602)))), (((/* implicit */int) ((signed char) var_2))))) : ((~(arr_3 [1] [i_2] [1])))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_31 = ((/* implicit */int) min(((((-(1802000235U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-22103))))), (((/* implicit */unsigned int) min(((short)-23602), (max((((/* implicit */short) var_2)), (arr_10 [i_3]))))))));
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)829)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : ((~(((/* implicit */int) arr_8 [i_3])))))), (((/* implicit */int) (unsigned short)23169)))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_33 = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) (signed char)-72)))));
            arr_15 [i_2] = ((/* implicit */unsigned char) ((arr_8 [i_2]) ? (((/* implicit */unsigned long long int) var_1)) : (var_8)));
            var_34 = ((/* implicit */_Bool) arr_7 [i_2] [i_4]);
        }
        var_35 = ((/* implicit */int) (!(((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (short)20073))))));
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_36 = ((/* implicit */int) ((((/* implicit */int) (signed char)-72)) != (((/* implicit */int) (signed char)127))));
        var_37 = ((/* implicit */signed char) (unsigned short)0);
    }
    var_38 = ((/* implicit */int) ((short) var_3));
}
