/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162695
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
    var_11 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [17LL] [(unsigned char)11] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9)))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) arr_7 [16LL] [i_2] [i_1] [i_0]);
                                var_13 = ((/* implicit */short) min((var_9), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-111)), (arr_11 [i_0] [(short)2] [i_3] [i_4]))))));
                                arr_15 [(unsigned short)0] [i_1] [(short)0] [i_3] [i_4] = ((/* implicit */signed char) (+((~(((/* implicit */int) (signed char)110))))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) arr_5 [i_4])) ? (18270053537443169355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_11 [18ULL] [i_3] [i_1] [i_0])))))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) ((signed char) (~(((unsigned int) var_0)))));
                }
                for (short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (short i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_8))));
                                var_17 = arr_23 [i_0] [i_1] [18ULL] [(unsigned char)3] [(unsigned char)19];
                                arr_25 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_23 [i_7 - 1] [i_7] [i_7] [(signed char)8] [i_7]), (((/* implicit */unsigned long long int) (signed char)96))))) ? ((~(arr_23 [i_7 - 2] [i_7] [i_7] [11ULL] [i_7]))) : (arr_23 [i_7 + 1] [1ULL] [16ULL] [i_7] [(short)9])));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_24 [(signed char)20] [(unsigned char)10] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_8)))) : (((/* implicit */int) max((((/* implicit */short) arr_19 [i_0] [i_0])), (arr_24 [1U] [(short)17] [i_5] [4LL]))))));
                    arr_27 [i_0] [i_1] [(_Bool)1] [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0] [(unsigned short)12]))) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [14LL])))))) ? (((((/* implicit */_Bool) (signed char)111)) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)53610)) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (unsigned char)192)))) : (((/* implicit */int) arr_12 [i_0] [(unsigned short)19] [i_0] [i_0] [i_0]))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (var_3) : (((/* implicit */int) (unsigned char)198))));
                }
                for (short i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                {
                    var_19 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1]))) : (arr_14 [i_0] [(_Bool)1] [i_1] [2ULL] [17ULL])))))));
                    var_20 = arr_18 [i_1];
                }
            }
        } 
    } 
}
