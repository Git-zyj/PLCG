/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183384
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
    var_19 &= var_17;
    var_20 -= ((/* implicit */unsigned long long int) (+(var_6)));
    var_21 = ((/* implicit */unsigned int) ((((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)5688)) > (((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned long long int) min((((unsigned int) (unsigned short)16978)), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)16978))))))) : (var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_22 = arr_11 [i_0] [(unsigned short)1] [(unsigned short)14] [9ULL] [12] [i_4 + 2];
                                var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((int) arr_11 [i_0] [11LL] [5LL] [i_3 - 3] [(signed char)12] [20LL]))) ? (((/* implicit */long long int) -227137696)) : ((~(arr_2 [i_0 + 2] [13LL] [i_0])))))));
                                var_24 = ((/* implicit */int) (~(((unsigned long long int) ((short) arr_9 [i_0 - 1] [i_1 + 1] [i_2 - 1] [i_0] [i_4 - 1])))));
                                var_25 += ((/* implicit */_Bool) var_7);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */int) var_16);
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_0 + 2] [0ULL] [17LL])) ? ((-(((/* implicit */int) arr_13 [i_1] [16U] [i_5 - 1])))) : (((/* implicit */int) arr_5 [(unsigned short)4] [(unsigned short)9])))))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    arr_17 [16ULL] [i_0 - 1] [i_6] [6ULL] &= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_2 [(unsigned char)6] [i_1 - 1] [i_6])) > (arr_3 [5LL] [i_1 + 1] [(unsigned short)14]))));
                    /* LoopSeq 4 */
                    for (int i_7 = 2; i_7 < 20; i_7 += 1) 
                    {
                        var_28 = (unsigned char)74;
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_19 [(signed char)13] [i_1 + 1] [14U] [7ULL]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [0U]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (4575657221408423936ULL))))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 20; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned long long int) var_16)))));
                        arr_23 [18LL] [i_8 - 3] [i_0] [i_0] [10ULL] [4ULL] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((arr_16 [i_0]) >> ((((~(((/* implicit */int) var_16)))) + (27)))))) : (((/* implicit */unsigned short) ((((arr_16 [i_0]) + (2147483647))) >> ((((~(((/* implicit */int) var_16)))) + (27))))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) 5933242259956556998ULL)) ? ((+(arr_26 [i_0 + 2] [(unsigned char)12] [i_6 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15164)) ? (var_6) : (((/* implicit */int) arr_10 [(short)17] [(signed char)15] [i_6 + 1] [2LL]))))))))));
                        arr_27 [17LL] [i_1 - 2] [i_0] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (unsigned short)16978)))));
                    }
                    for (int i_10 = 2; i_10 < 19; i_10 += 3) 
                    {
                        var_32 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_3 [(signed char)15] [20ULL] [9]))) > (((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */unsigned long long int) var_14))))));
                        var_33 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_0 [(_Bool)1] [i_1 - 1]))))));
                    }
                }
            }
        } 
    } 
}
