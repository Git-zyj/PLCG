/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126771
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
    var_14 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (((~(2147483647))) != (((/* implicit */int) ((unsigned short) -5638721741381833204LL)))))) : (((/* implicit */int) ((((67108863LL) / (((/* implicit */long long int) ((/* implicit */int) var_12))))) > (var_13))))));
    var_15 = ((/* implicit */long long int) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) 2290991679U);
        arr_4 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
        arr_9 [(_Bool)1] = ((/* implicit */signed char) var_0);
        var_18 |= ((/* implicit */signed char) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57554)))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2120235392)))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_20 = arr_8 [i_2];
            var_21 = ((/* implicit */long long int) arr_6 [i_1] [1]);
        }
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (~(arr_15 [i_3 + 1])));
            var_22 = ((/* implicit */unsigned int) (!((!((_Bool)1)))));
        }
        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
        {
            var_23 = ((/* implicit */_Bool) arr_11 [i_1] [i_4 + 4] [5U]);
            arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((arr_12 [i_1] [i_4 + 2] [i_1]) != (1092036656)));
            arr_21 [i_4] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
            var_24 ^= ((/* implicit */unsigned short) ((arr_10 [i_4 - 1] [i_4 - 2]) << (((arr_10 [i_4 + 4] [i_4 + 1]) - (3164343939678165875ULL)))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_29 [i_4] [i_4 + 4] [i_5] [i_6] = ((/* implicit */unsigned char) var_6);
                        arr_30 [i_1] [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) 535730126)))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        var_25 = ((/* implicit */int) (~(arr_0 [i_7])));
        var_26 = ((/* implicit */unsigned int) arr_23 [i_7] [i_7] [i_7] [(_Bool)1]);
    }
    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_6 [i_8] [i_8]))) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_8])) - (((/* implicit */int) arr_33 [i_8])))))));
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_5 [i_8]))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((signed char) arr_8 [i_8]));
                    var_29 = ((/* implicit */signed char) (~(((/* implicit */int) (short)28540))));
                    arr_42 [i_8] [i_10] [15] = ((/* implicit */int) arr_23 [13ULL] [13ULL] [i_10] [i_9]);
                    var_30 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                }
            } 
        } 
    }
}
