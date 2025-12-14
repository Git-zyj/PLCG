/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115427
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((min((min((3641663166403090418ULL), (((/* implicit */unsigned long long int) (unsigned char)204)))), (((/* implicit */unsigned long long int) (short)23359)))), ((+(var_11))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_21 -= ((arr_1 [i_0]) / ((-(((((/* implicit */_Bool) arr_1 [(short)3])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_22 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)252)), (((unsigned int) var_17))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14805080907306461197ULL)) ? (((3641663166403090412ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35632))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(1565130758986515623LL))))))));
                            arr_13 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */int) arr_2 [i_0] [i_0]);
                            var_24 -= ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) (-2147483647 - 1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) 
            {
                for (signed char i_6 = 1; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (max((arr_11 [(unsigned short)6] [i_6] [i_1] [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned int) arr_8 [i_0])))))))));
                        var_26 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_0]))));
                        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_18 [i_5 - 2] [i_0] [i_6 - 1] [i_1 - 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_5 - 2] [i_0] [i_6 - 1] [i_1 + 1]))))) ? (min((((/* implicit */unsigned long long int) arr_15 [i_0] [i_6])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23359))) + (var_5))))) : (((((/* implicit */_Bool) (~(-764739522)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [11ULL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_1] [i_5 + 1] [i_5] [i_5] [i_6 + 1]))))) : (max((var_14), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) arr_9 [i_0] [i_7]);
            var_29 = ((/* implicit */unsigned short) (+(((((var_1) + (9223372036854775807LL))) << (((((/* implicit */int) arr_6 [i_7] [i_7] [7] [i_7])) - (190)))))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((arr_4 [i_0]) % (((/* implicit */int) ((signed char) 18446744073709551615ULL))))))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))))) ? (arr_20 [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_7] [(signed char)8] [i_0] [i_0] [i_7] [i_0])))))));
        }
        /* vectorizable */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [5U] [i_0] [i_0])) << (((arr_16 [i_8]) - (17254847381264161201ULL))))))));
            var_33 = ((/* implicit */short) ((arr_17 [i_0] [i_0] [i_8 - 1] [i_8]) && (((/* implicit */_Bool) arr_5 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
        }
        arr_25 [i_0] = ((/* implicit */int) max((((max((((/* implicit */long long int) var_18)), (arr_20 [i_0]))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((var_10) % (((/* implicit */int) arr_12 [0ULL] [(unsigned short)4] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (short i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */long long int) (-(((/* implicit */int) (short)32747))));
        var_35 *= ((/* implicit */unsigned int) (_Bool)0);
    }
    var_36 = ((/* implicit */unsigned short) var_14);
}
