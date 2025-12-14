/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17543
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [1U] [i_3] [i_4 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_11 [i_4] [i_4 - 1] [12U] [i_4 - 3] [i_4 + 1] [i_4]), (arr_11 [i_4] [4U] [(unsigned char)9] [i_4 - 3] [i_4 + 1] [0])))) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((signed char) arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 3] [8ULL])))));
                                var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-87)), (-2888337951735320988LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 - 2] [i_4 - 1] [i_4 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (arr_11 [i_0] [i_1] [i_2] [(unsigned char)4] [i_3] [14]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_3)))))))))));
                                var_14 = ((/* implicit */unsigned char) arr_9 [i_1] [i_1] [(signed char)12]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_2])), (var_0)))) ? (3172499922500498939LL) : (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_0] [(signed char)2])))), (((/* implicit */long long int) arr_11 [i_1] [0ULL] [2LL] [i_1] [i_0] [0ULL]))));
                    arr_16 [i_0] [i_0] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [14ULL] [(unsigned char)6] [i_1] [14ULL] [i_2]))))), (((((/* implicit */_Bool) (+(2442325918U)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [11] [i_0] [i_0] [11] [i_2])) ? (var_5) : (((/* implicit */long long int) arr_6 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-(var_0)));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1852641400U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)23477)))))) || (max((arr_18 [i_5] [i_5]), (arr_18 [i_5] [i_5]))))))));
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) ((var_11) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)23477))))) : (((((/* implicit */_Bool) arr_17 [i_5])) ? (max((((/* implicit */long long int) arr_18 [7ULL] [7ULL])), (var_6))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)17)), (var_8))))))));
        arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4285842386U)))))) & ((+(arr_17 [i_5])))));
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) 14304936298172815539ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23472))) : (max(((((_Bool)0) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 15537349864264092356ULL)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)-23503))))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_19 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1426443631U)), (-26746177136522291LL)))) ? (((int) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_8])) : (((/* implicit */int) var_1))))) ? ((~(((((/* implicit */int) arr_7 [10] [10])) << (((((/* implicit */int) arr_24 [i_6])) - (124))))))) : (((/* implicit */int) var_10)));
                    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_29 [i_8] [i_7] [1ULL] [1ULL]) % (arr_22 [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_7]))) : (max((arr_5 [i_6]), (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (var_3)))))))) : (arr_8 [i_6] [i_7] [i_8] [i_8])));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(arr_4 [12LL] [13ULL] [(unsigned char)4]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned char)242))));
        var_23 ^= ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) 1668226387834297382LL))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_9])) ? (var_3) : (((/* implicit */int) arr_31 [i_9]))));
        arr_34 [(short)15] = ((/* implicit */short) (+(var_9)));
    }
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        arr_37 [7] = ((/* implicit */unsigned char) ((((long long int) (unsigned char)122)) >> (((((((/* implicit */_Bool) arr_14 [i_10] [i_10] [i_10] [(signed char)0] [i_10])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_14 [i_10] [i_10] [i_10] [i_10] [i_10]))) - (17564273018942692562ULL)))));
        var_25 = max((((/* implicit */int) var_10)), ((~(var_4))));
        arr_38 [i_10] = ((/* implicit */signed char) var_10);
        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9))))));
    }
}
