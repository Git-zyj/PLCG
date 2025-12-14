/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144529
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
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_5)) < (var_9)))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (9061564927681202105ULL))))))), (var_18)));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_20 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((arr_0 [i_0 + 1] [i_0]) >> (((arr_0 [i_0 + 1] [i_0]) - (1127632962))))) << ((((+(var_16))) - (3014766192U)))))) : (((/* implicit */short) ((((((arr_0 [i_0 + 1] [i_0]) + (2147483647))) >> (((((arr_0 [i_0 + 1] [i_0]) - (1127632962))) + (1142167350))))) << ((((+(var_16))) - (3014766192U))))));
        arr_4 [4LL] |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (9385179146028349509ULL))) ? (((/* implicit */int) ((signed char) arr_3 [i_0 + 3] [(unsigned short)18]))) : (arr_0 [4ULL] [4ULL])));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)74))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_3] [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((arr_10 [i_1] [i_4 - 1] [i_3 + 1]) >> (((arr_11 [i_1] [i_4 - 1] [i_3 - 1]) - (8627688024509370020LL))))) <= (((/* implicit */unsigned long long int) min((arr_11 [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((arr_13 [i_1] [i_1] [i_1] [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) arr_12 [i_3 - 1] [i_3 - 1] [i_4 - 1]))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_4])) > (9061564927681202123ULL)))), (arr_14 [i_3 - 1] [i_4 - 1] [i_2] [i_4 - 1] [i_4 - 1]))))))));
                        arr_16 [i_3] [i_2] = ((/* implicit */long long int) ((unsigned int) max((arr_13 [i_1] [i_4 - 1] [i_1] [i_1]), (536838144U))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1])) > (((/* implicit */int) (unsigned short)0))))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_7 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)0))))))) ^ (((((((/* implicit */_Bool) var_12)) ? (arr_14 [i_1] [i_1] [i_7] [i_1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >> (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) 18014397435740160LL)))))))));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) / (3758129152U)))) + (min((arr_22 [i_1]), (((/* implicit */long long int) arr_26 [i_8] [i_8] [i_8] [i_7] [i_8]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)-15114)) < (((/* implicit */int) arr_7 [i_6] [i_5]))))) * ((+(((/* implicit */int) arr_7 [i_1] [i_1])))))))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            for (short i_11 = 3; i_11 < 13; i_11 += 3) 
            {
                {
                    arr_34 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_25 [i_10] [i_11] [i_10] [i_9] [i_9] [i_9] [i_10]), (max((((/* implicit */long long int) var_3)), (arr_11 [i_9] [i_9] [i_11])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */unsigned long long int) ((arr_9 [i_9] [i_9] [i_9]) - (var_16)))) ^ (max((arr_14 [i_9] [i_9] [i_10] [i_9] [i_9]), (((/* implicit */unsigned long long int) (signed char)60))))))));
                    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((467439933) << (((((((/* implicit */int) var_3)) + (31521))) - (3)))))), (min((((/* implicit */unsigned long long int) arr_30 [i_9] [i_9])), (arr_10 [i_9] [i_9] [i_9]))))))));
                    arr_35 [i_11] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((long long int) arr_30 [i_11 + 1] [i_10])) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_11 - 1] [i_10] [i_11 - 1])) >> (((((/* implicit */int) arr_20 [i_9] [i_11 + 2] [i_11])) + (17272))))))));
                }
            } 
        } 
        arr_36 [i_9] [i_9] = ((/* implicit */short) arr_1 [i_9] [i_9]);
    }
    var_28 = ((/* implicit */int) (-((+(var_16)))));
}
