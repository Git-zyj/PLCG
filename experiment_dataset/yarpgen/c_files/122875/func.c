/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122875
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) min(((unsigned char)171), ((unsigned char)85)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_6))))) % (((int) var_1))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    var_10 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)84)) - (((/* implicit */int) arr_0 [i_2]))))) ^ (max((arr_10 [i_0] [12ULL]), (((/* implicit */unsigned long long int) (unsigned char)103))))))) ? ((+(((/* implicit */int) var_5)))) : (((arr_8 [i_0 - 1] [i_0 - 1] [i_2 + 1]) % ((+(((/* implicit */int) var_6))))))));
                    var_11 = ((max((((int) var_8)), (((((/* implicit */_Bool) arr_4 [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (arr_3 [(unsigned char)20] [i_1] [4ULL]))))) << (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17743309295012352011ULL)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned short)60989))))), (max((var_7), (((/* implicit */unsigned long long int) var_2)))))) - (133ULL))));
                    arr_11 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)116)), (min((((/* implicit */int) ((1408042121) < (((/* implicit */int) (unsigned char)116))))), (((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)153))))) || (((/* implicit */_Bool) min(((unsigned short)64911), (((/* implicit */unsigned short) (signed char)7)))))))) % (max((((/* implicit */int) (unsigned char)153)), (arr_8 [i_0] [i_1] [i_2 - 1])))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 8; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                for (short i_6 = 1; i_6 < 7; i_6 += 4) 
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_5] [(unsigned short)2]))) : (var_9))));
                        arr_23 [i_3] [i_4] [(unsigned char)5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (arr_13 [i_6 + 2])));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)27685)) < (((/* implicit */int) arr_20 [i_3] [i_3 + 2] [i_3] [i_4 + 1] [i_4]))));
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_3 [i_4 + 2] [i_6 + 3] [i_3 - 1])) == (arr_1 [i_4 - 2] [i_6])));
                    }
                } 
            } 
        } 
        var_16 = ((int) var_6);
        var_17 = ((arr_9 [i_3 + 1]) * (arr_9 [i_3 - 1]));
    }
    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (short i_9 = 1; i_9 < 11; i_9 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((max((max((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_7] [i_8]))), (((/* implicit */unsigned long long int) arr_28 [i_8] [i_9 + 2])))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) % (((/* implicit */int) (unsigned char)97)))))));
                    var_19 += ((/* implicit */long long int) (_Bool)1);
                    var_20 = ((/* implicit */unsigned char) arr_26 [i_7] [7]);
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) arr_26 [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_22 = ((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))));
        var_23 = ((/* implicit */long long int) (~(arr_8 [i_10] [i_10] [i_10])));
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_8)), (var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_8)), (0ULL)))))) : (var_9))))));
    var_25 = ((/* implicit */unsigned short) var_7);
}
