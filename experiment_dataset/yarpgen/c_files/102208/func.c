/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102208
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [(unsigned char)3] [i_2] [i_0] = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)2))))));
                        var_18 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_8 [(_Bool)1] [i_2 - 1] [(_Bool)1])) / (((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_2 - 1])))));
                        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) max((max((((/* implicit */short) var_0)), ((short)-27521))), (((/* implicit */short) var_17))))) % (((/* implicit */int) arr_0 [i_1] [i_1]))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((3846447173U), (((/* implicit */unsigned int) (short)-27521))))) ? ((+(var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))))));
        arr_12 [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (492976791U))))));
    }
    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3801990504U)) ? (((/* implicit */long long int) 1415472700)) : (9223372036854775807LL)));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 16; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) arr_13 [(_Bool)1]))))) ? (max((((/* implicit */long long int) arr_20 [i_4] [i_4] [i_4] [i_4])), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */int) (_Bool)0))))))))) && (((/* implicit */_Bool) ((short) arr_21 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 2])))));
                                var_23 = ((/* implicit */unsigned long long int) var_17);
                                arr_25 [i_4] [i_5] [i_5] [(short)0] [i_5] = ((/* implicit */long long int) ((3801990504U) < (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */int) ((unsigned short) 492976780U))) : (((/* implicit */int) arr_15 [i_6])))))));
                                var_24 &= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) max((((((/* implicit */int) var_5)) - (((/* implicit */int) var_15)))), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2257192625U)))))))) : ((~(((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7]))) : (var_8))))));
                                var_25 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 - 2])))))));
                            }
                        } 
                    } 
                    arr_26 [i_4] [i_4] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) ((min((3801990509U), (((/* implicit */unsigned int) (signed char)(-127 - 1))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))))))));
                    var_26 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-57)) + (2147483647))) >> (((((/* implicit */int) (signed char)-57)) + (72)))))) && (((/* implicit */_Bool) max((416974033177685705ULL), (((/* implicit */unsigned long long int) var_6))))))));
                }
            } 
        } 
        var_27 |= (((((~(((/* implicit */int) min(((unsigned short)7611), (((/* implicit */unsigned short) (short)27882))))))) + (2147483647))) << (((((/* implicit */int) var_1)) - (99))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            {
                                var_28 &= ((/* implicit */unsigned short) var_5);
                                var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_30 [i_4] [i_4] [(short)16] [i_4])), (((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)62)) : (((/* implicit */int) var_0)))))));
                                arr_39 [i_4] [i_9] = ((/* implicit */unsigned short) 0ULL);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) arr_27 [(_Bool)1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)31350)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (short)-27890))))) : (min((((/* implicit */long long int) arr_35 [11LL] [i_9])), (var_3))))), (((/* implicit */long long int) ((_Bool) arr_28 [i_10]))))))));
                    var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) -66494960))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_23 [i_10] [i_10] [i_10] [i_4] [i_4])));
                    arr_40 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */int) arr_29 [i_4])) : (((/* implicit */int) (short)27882)))), ((+(((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) ((((var_15) ? (arr_32 [i_4]) : (((/* implicit */int) arr_35 [1LL] [i_9])))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31350))) >= (1278422343932924045ULL))))))) : (((((/* implicit */_Bool) ((arr_18 [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4] [i_10] [i_10] [i_4]))) : (arr_28 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551592ULL)))));
                    var_32 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (6896577927094368640LL) : (((/* implicit */long long int) 1040187392)))))), (((((/* implicit */_Bool) 1265999421U)) ? (max((((/* implicit */long long int) arr_36 [i_4] [i_4] [i_9] [i_4] [i_4])), (66903938062470525LL))) : (1409902190740334353LL)))));
                }
            } 
        } 
    }
    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((-66903938062470526LL) + (9223372036854775807LL))) >> (((var_12) - (4816684282081094041LL)))))))))));
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                        {
                            arr_52 [i_17] [i_13] [i_15] [i_13] [i_13] = ((/* implicit */int) var_9);
                            arr_53 [(unsigned short)4] [i_13] [i_13] = (i_13 % 2 == zero) ? (((/* implicit */_Bool) ((((arr_23 [i_15 + 3] [i_15 + 3] [i_13] [i_15] [i_15 + 3]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_44 [i_13 + 1] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */int) arr_27 [i_13])) : (-1040187393))) - (30430)))))) : (((/* implicit */_Bool) ((((((arr_23 [i_15 + 3] [i_15 + 3] [i_13] [i_15] [i_15 + 3]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_44 [i_13 + 1] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */int) arr_27 [i_13])) : (-1040187393))) - (30430))))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_15 + 2])) << (((/* implicit */int) (_Bool)1))));
                            var_35 -= ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_20 [i_15 + 3] [i_13 + 2] [i_13 + 2] [i_13 - 1])));
                        }
                        for (short i_18 = 0; i_18 < 17; i_18 += 2) /* same iter space */
                        {
                            arr_56 [i_13 - 1] [i_14] [i_15] [i_13] [i_16] [(unsigned char)9] [(_Bool)1] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_57 [(signed char)0] [i_13] [i_13] [(signed char)0] [i_16] [i_13] = ((/* implicit */long long int) var_2);
                            var_36 = ((/* implicit */signed char) arr_36 [i_13] [i_14] [i_14] [i_14] [i_13]);
                        }
                        var_37 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) ((_Bool) (short)31341))), ((-(7320423776426197467ULL)))))));
                        arr_58 [i_13] [i_13] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) arr_14 [i_13])), ((+(4294967281U)))))));
                    }
                } 
            } 
        } 
        var_38 &= ((/* implicit */long long int) (_Bool)1);
    }
    var_39 = ((/* implicit */unsigned short) var_0);
}
