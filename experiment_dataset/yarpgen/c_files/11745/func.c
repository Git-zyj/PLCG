/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11745
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
    var_16 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (unsigned short)65535);
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((long long int) arr_6 [i_2] [(_Bool)1]));
        arr_9 [i_2] [(unsigned char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65535))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27497))) : (((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) ((unsigned char) arr_0 [i_3]));
        var_18 = ((/* implicit */unsigned char) ((((var_9) ? (arr_0 [i_3]) : (var_2))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65535))))));
    }
    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_7)))) ? (arr_15 [i_4] [i_4]) : (max((arr_15 [i_4] [i_4]), (((/* implicit */long long int) var_3))))));
        arr_16 [i_4] [i_4] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) (unsigned short)38014)) ? (var_2) : (arr_15 [i_4] [i_4]))), (min((((/* implicit */long long int) arr_13 [i_4] [i_4])), (var_7))))), (var_14)));
        arr_17 [(signed char)11] [(unsigned char)15] |= ((/* implicit */unsigned int) (unsigned short)1);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_15 [(signed char)22] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((((/* implicit */int) arr_13 [i_4] [(_Bool)1])) != (((/* implicit */int) var_0)))) ? (arr_15 [i_4] [i_4]) : (arr_15 [(unsigned short)18] [i_4]))))))));
    }
    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        arr_21 [(_Bool)0] [i_5] &= ((/* implicit */short) (-((~(((/* implicit */int) arr_19 [(unsigned short)8]))))));
        var_21 -= ((/* implicit */long long int) (((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)96)))))) % (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_6 [i_5] [13LL]))))));
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            {
                arr_27 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_4 [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [0]))))));
                var_22 -= ((/* implicit */_Bool) ((unsigned char) min((((arr_4 [(unsigned short)3] [i_7]) | (((/* implicit */long long int) arr_23 [i_7])))), (((long long int) arr_4 [i_6] [i_6])))));
                var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_6] [i_7])) / (((/* implicit */int) arr_6 [i_6] [i_7]))))), (var_8)));
            }
        } 
    } 
}
