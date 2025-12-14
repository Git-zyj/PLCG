/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143965
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) (~(arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) >> (((var_17) - (8486981261065344645LL)))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((int) var_8)) : ((-(((/* implicit */int) var_19))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))));
        var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (var_16)))) : (arr_6 [i_1 + 1])));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_1))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_6 [i_1])));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (arr_6 [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    }
    var_25 &= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned long long int) var_2))))))) ? (var_15) : (((/* implicit */unsigned long long int) ((unsigned int) min((var_3), (((/* implicit */unsigned short) (unsigned char)11))))))));
    var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))) : (((unsigned int) var_15)))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) (unsigned char)3)), (var_11))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_27 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30954))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)34572)) == (((/* implicit */int) (unsigned char)225))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    arr_18 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_16 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_4])) : (((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3]))));
                    arr_19 [i_2] [i_2] [i_2] = ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_17))));
                    var_29 += ((/* implicit */unsigned long long int) arr_13 [i_2] [i_3]);
                    var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 - 2] [i_3])) ? (arr_15 [i_3 - 1] [i_3 - 2] [i_3]) : (arr_15 [i_3 - 1] [i_3 - 2] [i_3 - 2])));
                }
            } 
        } 
        arr_20 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((signed char) var_11));
    }
}
