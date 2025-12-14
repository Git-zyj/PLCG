/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159427
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_12 [(unsigned short)13] [i_3] = ((((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0] [i_1] [i_1] [i_3] [i_3]))) * (((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 2])));
                        arr_13 [i_3] [11] = ((/* implicit */unsigned short) arr_6 [i_0]);
                        arr_14 [(short)10] [(short)10] [i_2 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) 18446744073709551602ULL))) <= (((((/* implicit */_Bool) (unsigned char)224)) ? (arr_11 [i_0] [(unsigned short)4]) : (arr_6 [(unsigned short)14])))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            arr_18 [i_0] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_3] [i_1 + 3] [20] = ((/* implicit */unsigned char) (short)(-32767 - 1));
                            arr_19 [i_0] [i_1] [i_3] [i_1] [i_4] [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */int) (short)-31849)) <= (arr_11 [i_0] [i_3])))));
                            arr_20 [i_0] [i_3] [i_0] = ((/* implicit */int) (unsigned char)34);
                            arr_21 [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) ((int) arr_17 [i_0] [i_0] [i_0] [i_0]));
                            arr_22 [(short)10] = ((/* implicit */unsigned short) (((~(1010631135U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [i_3]))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            arr_26 [i_0] [14] [14] [i_5] = ((/* implicit */unsigned long long int) (short)25536);
                            arr_27 [i_0] [i_0] [i_2] [i_3] [i_5] [i_3] [i_0] = ((/* implicit */unsigned short) 2147483647);
                        }
                        for (short i_6 = 2; i_6 < 18; i_6 += 3) /* same iter space */
                        {
                            arr_30 [i_1 + 1] [i_0] [i_2] [i_3] [(short)0] = (_Bool)1;
                            arr_31 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_1 [i_2 + 1])));
                            arr_32 [i_0] [i_3] [i_2 - 2] [i_2 - 2] [i_3] = ((/* implicit */unsigned short) arr_15 [i_6 + 1] [i_2] [i_2] [i_3] [i_6] [i_2] [i_1 + 1]);
                            arr_33 [i_3] [i_1 + 1] [i_1 + 1] [i_3] [i_1 + 1] = arr_2 [i_6 - 1] [i_1 + 2];
                        }
                        for (short i_7 = 2; i_7 < 18; i_7 += 3) /* same iter space */
                        {
                            arr_38 [i_0] [i_3] [i_2] [i_3] [i_7 + 2] = ((/* implicit */unsigned long long int) ((arr_1 [i_2 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_17 [i_0] [18U] [(signed char)9] [18U]))))));
                            arr_39 [i_0] [i_1] [16] [i_3] [i_3] [i_7] = ((/* implicit */unsigned char) 9223372036854775807LL);
                            arr_40 [i_0] [i_1] [i_2] [(unsigned char)10] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_7 - 2]))) <= (arr_8 [i_1 - 1] [i_2] [i_3] [i_7])))) >> (((arr_36 [i_0] [(unsigned char)6] [i_1 + 1] [(unsigned char)6] [i_7 - 2]) - (239007652)))));
                            arr_41 [i_2 + 2] [i_1] [i_3] [i_3] [i_7] = (!(((/* implicit */_Bool) arr_29 [i_2 + 1] [i_2] [i_3] [i_2] [i_2 + 1] [i_2])));
                        }
                    }
                } 
            } 
            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) 9223372036854775807LL)))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                for (unsigned char i_9 = 2; i_9 < 19; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            arr_52 [i_0] [i_1] [i_10] [i_10] = ((((/* implicit */_Bool) arr_51 [i_0] [i_1] [i_8 - 1] [12ULL] [i_10] [i_9 + 1])) && (((/* implicit */_Bool) arr_51 [(unsigned char)17] [i_1] [i_8 + 2] [i_1 + 1] [i_10] [20U])));
                            arr_53 [i_0] [6LL] [6LL] [i_0] [i_10] = ((/* implicit */unsigned char) ((int) arr_29 [i_0] [i_1 + 3] [20ULL] [i_9] [i_10] [20ULL]));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 3) /* same iter space */
        {
            arr_56 [i_11] [i_11] [(unsigned short)17] = ((/* implicit */int) 742601144U);
            arr_57 [i_11] [i_11] = ((/* implicit */_Bool) arr_44 [i_0] [2U] [i_11]);
        }
    }
    var_20 = ((/* implicit */unsigned int) (unsigned short)19957);
}
