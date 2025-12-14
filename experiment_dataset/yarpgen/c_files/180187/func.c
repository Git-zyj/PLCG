/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180187
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
    var_10 = ((/* implicit */_Bool) ((1155873329) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 1155873329)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned short i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_11 [(_Bool)1] [7] [10LL] [i_0] [3LL] [i_3] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */int) var_6)), (arr_0 [i_0]))));
                            arr_12 [i_0] [i_1] [(short)11] = min((var_7), ((-(1155873329))));
                        }
                    } 
                } 
                var_11 = ((/* implicit */short) arr_10 [i_0] [i_0] [(_Bool)1] [1LL] [i_1] [i_1]);
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 1U);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? ((+(var_7))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (short)27458))))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) min(((short)27438), (((/* implicit */short) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */signed char) (unsigned short)13062);
                    arr_20 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35036))))) ? (((/* implicit */int) ((unsigned char) -1117187851))) : (var_5)))) < (min((((((/* implicit */_Bool) var_9)) ? (2847479907081501999ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) var_2))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_8 = 3; i_8 < 13; i_8 += 4) /* same iter space */
                        {
                            arr_28 [11LL] [11LL] [11LL] [i_4] [11LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1])) ? ((~(9223372036854775803LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8] [(unsigned char)8] [i_6] [i_5] [i_4])))));
                            arr_29 [i_6] [i_4] = ((/* implicit */signed char) ((2147483647) ^ (1155873353)));
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((3558994902U) + (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))))));
                        }
                        for (long long int i_9 = 3; i_9 < 13; i_9 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) arr_17 [i_7] [i_6 + 4])) ? (((/* implicit */int) (short)-27438)) : (((/* implicit */int) (short)27438))))));
                            arr_33 [i_4] [i_4] [i_4] [i_7] [5U] = ((/* implicit */long long int) ((unsigned long long int) var_8));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_5 - 1] [i_5] [(unsigned char)8] [i_5] [i_5] [i_7] [(unsigned short)10])) ? (arr_32 [i_5 - 1] [(signed char)6] [i_5] [(signed char)6] [i_5] [i_7] [12LL]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                            var_17 *= ((/* implicit */_Bool) var_4);
                        }
                        arr_34 [(unsigned char)0] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) var_6);
                        var_18 ^= (((_Bool)1) ? (((int) (unsigned short)30500)) : (((/* implicit */int) (_Bool)1)));
                        arr_35 [i_4] [i_4] [11] [i_4] [i_4] = ((/* implicit */short) (_Bool)1);
                    }
                }
            } 
        } 
    } 
}
