/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160428
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)255);
        arr_3 [i_0] [(unsigned short)2] = ((/* implicit */unsigned short) (((+(18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) % (min((var_8), (((/* implicit */unsigned long long int) arr_1 [12ULL] [i_0 - 1])))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_2)), (var_0))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (arr_0 [i_0] [i_0 - 1])))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_1] [11LL] [i_1] = ((/* implicit */unsigned short) 4ULL);
                        arr_14 [i_1] [2LL] [2LL] [i_1] = (((~(((/* implicit */int) ((unsigned char) var_5))))) & (((/* implicit */int) arr_9 [i_1] [i_1])));
                        arr_15 [i_1] [15LL] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((18446744073709551615ULL) << (((((/* implicit */int) var_5)) - (105)))))) ? (var_4) : (((/* implicit */unsigned long long int) var_7)))), (min((11437379667368232843ULL), (0ULL)))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] [(unsigned char)5] = ((/* implicit */_Bool) ((max((max((1ULL), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [1] [i_1])))), (min((((/* implicit */unsigned long long int) var_0)), (7ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)100)) ? (var_7) : (var_7))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            var_10 = ((((/* implicit */_Bool) ((unsigned char) (-9223372036854775807LL - 1LL)))) ? (((((/* implicit */_Bool) arr_12 [7ULL] [i_1] [7ULL] [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_5] [14ULL] [i_1])) + (((/* implicit */int) var_2))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 3; i_6 < 16; i_6 += 4) 
            {
                var_11 = ((/* implicit */unsigned long long int) var_9);
                var_12 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6))))));
                var_13 = ((/* implicit */unsigned char) ((arr_11 [i_6 + 1] [i_6] [i_6 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            }
            for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 14; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_14 = ((18446744073709551592ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            arr_31 [i_9] [i_5] [i_1] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((long long int) 18446744073709551609ULL))));
                            arr_32 [i_1] [i_8] [i_9] = ((/* implicit */short) var_5);
                            arr_33 [i_1] [i_5] [i_1] [i_7] [11LL] [(signed char)2] [(unsigned short)9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_8] [(_Bool)1] [i_7] [i_1])) ? (arr_25 [i_1] [i_1] [i_8] [i_8] [i_8 - 1] [i_5]) : (arr_25 [i_1] [i_1] [i_1] [i_8] [i_8 - 1] [0U])));
                            var_15 = ((/* implicit */unsigned int) arr_10 [(short)4] [0] [i_5 + 2]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) var_7)) - ((-(-8190853270726185671LL)))));
                    arr_37 [i_1] [i_1] [i_5] = var_3;
                    var_17 = ((/* implicit */unsigned long long int) var_7);
                }
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
            {
                arr_42 [i_1] = ((/* implicit */unsigned short) ((signed char) (unsigned char)156));
                arr_43 [i_1] [i_1] = ((/* implicit */unsigned char) ((0ULL) & (((/* implicit */unsigned long long int) var_0))));
                arr_44 [i_1] [i_1] [i_11] = ((/* implicit */unsigned int) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                arr_45 [i_1] [i_1] [i_1] [2LL] = ((/* implicit */signed char) var_5);
            }
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
            {
                arr_49 [i_1] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) > ((~(((/* implicit */int) arr_10 [i_1] [i_5 + 1] [12LL]))))));
                var_18 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_1] [i_5 + 1])) : (((/* implicit */int) arr_20 [15ULL] [i_5 - 1] [i_5] [i_5 + 1])));
                arr_50 [i_1] [i_5] [i_12] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
            }
            for (long long int i_13 = 2; i_13 < 16; i_13 += 2) 
            {
                arr_53 [i_1] [i_1] = ((/* implicit */unsigned short) -1667169462);
                arr_54 [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_23 [i_13] [i_5] [i_5] [i_1])))));
            }
            /* LoopNest 2 */
            for (unsigned int i_14 = 2; i_14 < 16; i_14 += 2) 
            {
                for (short i_15 = 3; i_15 < 15; i_15 += 2) 
                {
                    {
                        arr_60 [i_1] = ((/* implicit */unsigned int) (unsigned char)250);
                        arr_61 [i_1] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) | (4554362002365154601LL)));
                        arr_62 [i_1] [i_1] [(signed char)10] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (+(4554362002365154601LL))));
                        arr_63 [i_15] [i_1] [(unsigned char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_5 + 1] [5] [i_1] [13ULL])) - (((/* implicit */int) arr_39 [i_5 + 1] [(unsigned char)7] [i_1] [i_1]))));
                    }
                } 
            } 
        }
    }
    var_19 = ((/* implicit */unsigned char) var_7);
    var_20 = ((/* implicit */unsigned short) var_5);
}
