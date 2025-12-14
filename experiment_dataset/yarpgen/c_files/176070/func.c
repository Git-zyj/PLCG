/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176070
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
    var_10 ^= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-13)) / (((/* implicit */int) var_8))));
    var_11 = ((/* implicit */unsigned long long int) -2147483640);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)60))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned short) max((0LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61)))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)45819)) ? (((/* implicit */int) (unsigned short)65535)) : (1073741823)))))))));
            var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-60)) || (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) 6228748150988175786LL)))))))), (max((max((-9223372036854775789LL), (((/* implicit */long long int) (signed char)-58)))), (((/* implicit */long long int) (_Bool)1))))));
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 11; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 12; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (-1034544824))))));
                            var_15 = ((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_5] [i_4 - 2] [i_4] [i_4] [i_4] [i_0]));
                        }
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned int) (signed char)65);
                            arr_17 [i_0] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_14 [i_6 - 1] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) -9223372036854775778LL)) : (arr_14 [i_6 - 1] [i_6] [i_6] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) (_Bool)1))));
                            arr_18 [i_0] [i_2] [i_2] [i_3] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (unsigned short)31394);
                            arr_19 [i_0] [i_2] [i_2] [i_3] [i_4] [i_6] [i_6] = ((((/* implicit */_Bool) arr_10 [i_6 - 1] [i_4] [i_4 + 1])) ? (max((((/* implicit */unsigned long long int) (signed char)58)), (arr_8 [i_4 + 2] [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))));
                        }
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775790LL))))), (arr_2 [i_4 + 1])))) : (((((/* implicit */_Bool) var_1)) ? ((+(var_4))) : (((/* implicit */unsigned long long int) 9223372036854775790LL))))));
                        arr_20 [i_0] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) (unsigned short)10441);
                        arr_21 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (unsigned short)65535);
                    }
                } 
            } 
            var_18 = ((/* implicit */_Bool) 724290059U);
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned char) var_3);
        var_19 = ((/* implicit */unsigned long long int) 3570677237U);
        /* LoopNest 2 */
        for (unsigned int i_8 = 3; i_8 < 7; i_8 += 2) 
        {
            for (unsigned int i_9 = 2; i_9 < 6; i_9 += 1) 
            {
                {
                    arr_29 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((2145206381524489043ULL) | (((unsigned long long int) (signed char)-51))));
                    var_20 -= ((/* implicit */int) ((unsigned short) arr_28 [i_7] [i_8] [i_8] [i_9]));
                }
            } 
        } 
        var_21 &= max((((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-42)), (arr_25 [i_7])))), (arr_15 [i_7] [i_7] [i_7] [i_7] [i_7]));
    }
}
