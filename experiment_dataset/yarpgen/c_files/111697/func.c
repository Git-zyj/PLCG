/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111697
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [8] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_2 [i_0]))))) >= (((/* implicit */int) var_6))))) != (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) arr_2 [10ULL])))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((var_16), (((/* implicit */short) arr_0 [i_0]))))) : (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((unsigned char) (unsigned char)47));
                                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) (short)-27498)) ? (524287ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_20 [(short)9] [16LL] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_6 [i_6 + 1]);
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_9 [(short)17] [3U] [i_1] [i_1])))) == (((/* implicit */int) arr_18 [i_0] [(signed char)10] [i_6 + 1] [5LL] [9ULL]))))));
                                arr_21 [i_0] [(unsigned short)10] [i_2] [(unsigned short)15] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (short)8))));
                            }
                        } 
                    } 
                    var_22 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24798)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(short)5] [i_1] [2ULL] [i_1] [i_1])))))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) (unsigned char)209))))) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((short) (~(((/* implicit */int) var_14)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)49))))) * (((long long int) var_3))));
                    arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_19 [i_0] [i_0] [12U] [(unsigned char)4] [(unsigned char)14]))))))) ? ((+(((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24772)))))))) : (((/* implicit */int) arr_17 [15] [15] [i_0]))));
                    var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */unsigned int) ((var_10) / (((/* implicit */int) var_5))))) : (arr_26 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_7 - 1] [i_7 + 1] [i_7 + 1])) / ((-(((/* implicit */int) (short)32767)))))))));
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned char) arr_14 [(short)9] [11ULL] [11ULL]);
    }
    var_26 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        for (unsigned char i_10 = 2; i_10 < 16; i_10 += 4) 
        {
            {
                arr_33 [i_9] [i_9] [2ULL] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_24 [2U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752))) : (arr_13 [18ULL] [(signed char)7] [i_9] [i_9] [i_9]))))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_10])) ^ (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) arr_18 [i_9] [8LL] [i_9] [(short)4] [13U])))) - (18446744073709523228ULL)))));
                arr_34 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_24 [i_10 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_10 - 2]), (arr_22 [i_10 + 1])))))));
                arr_35 [0LL] [i_10] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [6] [(unsigned short)18]))))) ? (arr_32 [i_10 - 2] [(signed char)14] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [12])) || (((/* implicit */_Bool) arr_28 [i_9])))))))), (((/* implicit */unsigned long long int) (unsigned char)16))));
                arr_36 [4LL] [i_10] [4LL] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_16 [(unsigned short)12] [3ULL] [i_10 - 2]) < (arr_16 [i_10] [i_10] [i_10 - 2]))))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) ((short) (~((~(var_2))))));
}
