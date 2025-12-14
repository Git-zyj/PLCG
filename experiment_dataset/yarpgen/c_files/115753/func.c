/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115753
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
    var_17 = ((/* implicit */unsigned char) var_15);
    var_18 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((~(((/* implicit */int) (short)22163))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) arr_3 [i_1]);
            var_20 ^= ((var_0) & (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_1] [i_0 - 2])))));
            var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 15948781469256559179ULL))));
            arr_6 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            var_22 |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 - 1]))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_18 [i_3] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2 + 1] [i_2 + 3] [i_3] [i_5 - 1] [i_5] [(unsigned char)3])) ? (((((/* implicit */int) (short)-14357)) / (((/* implicit */int) (short)-14357)))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (short)10064))))));
                            arr_19 [i_0 + 2] [i_2 - 1] [i_3] [i_3] [5LL] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_3] [i_4 - 2]))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5476929697651356644LL)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_2))))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    for (unsigned char i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        {
                            var_24 *= ((arr_17 [i_0] [i_6] [i_7] [i_9] [i_9 - 1]) && (((/* implicit */_Bool) (unsigned short)5815)));
                            var_25 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_23 [i_0 + 1] [i_0])) + (((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_7])))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0 - 1] [i_0] [i_6] [i_0])) & (((/* implicit */int) min((arr_28 [i_0 - 2] [i_6] [i_0] [i_0 - 2] [i_6] [i_6]), (var_8))))));
        }
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((unsigned short) arr_27 [i_0 + 1] [i_0] [i_0])));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5818)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (_Bool)1))))), (max((2338302060U), (((/* implicit */unsigned int) var_10))))))))))));
        /* LoopSeq 2 */
        for (long long int i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            var_28 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_20 [i_0 + 1])) ? (arr_20 [i_0 - 2]) : (arr_20 [i_0 - 2])))));
            arr_34 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_10 + 2] [i_10 + 4])) >> (((((/* implicit */int) ((unsigned char) arr_31 [i_10 - 1] [i_10 + 3]))) - (188)))));
        }
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [4ULL])) & (((/* implicit */int) var_16))));
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 4547179225433424245LL)) ? (-4821169008895699456LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (arr_21 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((arr_12 [i_0 + 2] [i_0] [i_0 - 1]) & (arr_7 [i_11])))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_17 [3U] [i_0 - 1] [i_12] [i_0] [i_12])), (var_4)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 + 1] [i_11] [13U] [i_0] [i_12]))) & (var_9)))))));
            }
            arr_40 [i_0] = ((/* implicit */unsigned int) arr_29 [i_11] [i_11] [(unsigned char)7] [i_11] [(unsigned char)7]);
        }
    }
    for (unsigned int i_13 = 1; i_13 < 21; i_13 += 2) 
    {
        var_31 -= (~(((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_42 [i_13] [i_13])))) + (arr_41 [i_13] [i_13]))));
        arr_43 [i_13 + 2] [i_13] = ((/* implicit */unsigned char) ((unsigned short) arr_41 [i_13] [i_13]));
        var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)220))));
    }
}
