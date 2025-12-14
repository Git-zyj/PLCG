/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183048
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-25026)) & (((/* implicit */int) (short)-25026)))))))) ? (max((((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_4))))))) : (((((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))))) + (var_6)))));
    var_14 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned long long int) ((int) ((var_7) == (3791695036U)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    var_15 |= ((/* implicit */int) ((unsigned char) ((unsigned long long int) -1881783932)));
                    arr_6 [(unsigned char)0] &= ((8192) * (((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_0])));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((long long int) (short)3));
        arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)-3)) : (-3)))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_1)));
        arr_8 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)-5)) / (((/* implicit */int) (short)-7)))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((short) arr_9 [i_3 - 2] [i_3 - 4]));
        arr_11 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 + 2])) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 3])) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1]))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    var_18 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 + 2] [i_3 - 1]))) <= (var_11)));
                    arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) var_1);
                    arr_18 [i_5] [i_3] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) ((var_7) != (((/* implicit */unsigned int) arr_13 [i_3 + 3] [i_3 + 3]))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            for (unsigned short i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                {
                    arr_25 [i_7] [i_6] [i_3 - 4] = ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 14059250072769146518ULL)))));
                    arr_26 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3 - 3] [i_7 + 2])) || (((/* implicit */_Bool) var_1))));
                }
            } 
        } 
    }
}
