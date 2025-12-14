/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118444
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
    var_10 |= ((/* implicit */unsigned int) ((min((var_2), (((/* implicit */unsigned long long int) var_3)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_11 -= ((/* implicit */signed char) arr_0 [(_Bool)1]);
        var_12 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_0 [i_0]) >= (min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))))), (arr_0 [i_0])));
        var_13 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1510003554)))) == (max((arr_0 [i_0]), (arr_0 [i_0]))))) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        arr_2 [(short)0] [(short)0] &= ((/* implicit */short) arr_0 [(signed char)6]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) (short)27210);
        arr_7 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27201)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : ((~(arr_0 [(short)2])))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            arr_11 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((long long int) ((unsigned short) (short)16937)));
            arr_12 [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((_Bool) arr_10 [i_1] [i_1 - 1] [i_2 - 1]));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (short i_4 = 3; i_4 < 17; i_4 += 4) 
            {
                {
                    var_15 = (-(((/* implicit */int) arr_16 [i_1] [i_3] [i_3] [i_3])));
                    arr_17 [i_1] [i_1] [i_3] [(short)18] &= ((/* implicit */unsigned char) arr_6 [i_4 - 2] [i_1 - 1]);
                }
            } 
        } 
        arr_18 [i_1] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [(signed char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(short)10] [i_1]))) : (arr_15 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_22 [i_5] = (short)16380;
        arr_23 [i_5] [i_5] &= ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5]))) : (((long long int) arr_0 [4LL])));
        var_16 = ((/* implicit */int) arr_4 [i_5]);
    }
    var_17 += ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) ((int) var_8))), (var_0))));
}
