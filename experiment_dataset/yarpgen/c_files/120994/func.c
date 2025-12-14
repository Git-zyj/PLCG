/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120994
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 6; i_3 += 1) 
                {
                    for (unsigned char i_4 = 2; i_4 < 6; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [(unsigned char)4] [i_4] [i_3] [i_2] [i_1 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 415029826U)) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241)))))) || (((/* implicit */_Bool) 415029828U))));
                            var_20 += ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]);
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_2] [(short)9] = ((/* implicit */unsigned int) arr_9 [i_3 - 2] [i_3 - 2] [i_2] [i_1] [i_0] [i_0]);
                            arr_15 [i_0] [i_2] [i_1] [i_2] [(short)6] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)83)), (arr_6 [(unsigned short)4] [i_2 + 1] [i_3 + 3] [i_4 + 2]))))) / (min((3879937468U), (((/* implicit */unsigned int) arr_6 [i_2] [i_2 + 1] [i_3 + 1] [i_4 - 1]))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 3])) ? (arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]) : (arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]))))))));
                        }
                    } 
                } 
            } 
            var_22 *= ((/* implicit */unsigned long long int) 2554400056U);
            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9642)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52)))));
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 2) 
            {
                for (long long int i_7 = 4; i_7 < 9; i_7 += 1) 
                {
                    for (short i_8 = 3; i_8 < 8; i_8 += 3) 
                    {
                        {
                            var_24 *= ((/* implicit */_Bool) var_12);
                            var_25 = ((/* implicit */unsigned int) arr_21 [i_7 + 1]);
                            var_26 *= ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            } 
            arr_26 [i_0] [i_5] = ((/* implicit */unsigned char) -8697260437607818617LL);
        }
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned long long int) var_10)) ^ (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195)))));
        arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((-4378811453690076321LL) / (((/* implicit */long long int) 1740567239U))))), (((((/* implicit */unsigned long long int) 1054130997108398065LL)) * (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_20 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)210))))) || (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_29 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(2554400057U)))) - (max((var_5), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0]))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        var_28 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_9] [i_9])) || (((/* implicit */_Bool) var_6))))), (((((/* implicit */int) var_19)) | (((/* implicit */int) (short)-10511))))));
        arr_33 [i_9] = ((/* implicit */long long int) (-(5264834279362422072ULL)));
        arr_34 [i_9] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)16482))));
    }
    /* vectorizable */
    for (short i_10 = 3; i_10 < 11; i_10 += 2) 
    {
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)96)) || (((/* implicit */_Bool) 9485226938860008666ULL)))))));
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            var_30 = ((/* implicit */unsigned int) (unsigned char)154);
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    {
                        var_31 = arr_31 [0U] [i_11];
                        var_32 = ((/* implicit */long long int) 3879937469U);
                        arr_48 [i_12] [i_11] [(unsigned short)5] [8ULL] = ((/* implicit */long long int) (unsigned char)0);
                        arr_49 [i_10] [i_11] [i_12] [i_12] [i_11] [i_13] = ((/* implicit */unsigned char) 3879937470U);
                    }
                } 
            } 
        }
    }
    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((var_16) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (var_3)))))));
    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) var_13))));
}
