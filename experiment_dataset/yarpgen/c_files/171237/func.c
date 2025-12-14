/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171237
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
    var_16 = ((/* implicit */unsigned long long int) ((((((var_4) ? (((/* implicit */int) var_13)) : (var_11))) != (var_11))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) >= (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))) : ((-(((/* implicit */int) (unsigned char)96))))));
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7916))))) ? (((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) (unsigned short)7073)))) : (((/* implicit */int) ((unsigned short) var_14))))) << (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) > (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_9))))))));
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) (!(arr_2 [i_0] [(unsigned short)0] [i_0])));
            var_20 = ((/* implicit */int) (unsigned char)52);
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [(unsigned short)4] [i_0])) : (((/* implicit */int) arr_2 [0LL] [(_Bool)1] [(_Bool)1]))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [10ULL] [(unsigned short)4]))))) + (((((/* implicit */_Bool) var_13)) ? (arr_1 [(unsigned char)7]) : (var_10)))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58461)))))) ? (arr_1 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))));
                        arr_14 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 - 2] [8] [i_4 - 1])) ? (3764114019162960812ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    }
                } 
            } 
            arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_5 [i_0] [i_0])));
        }
        var_23 = ((/* implicit */unsigned char) ((7233809833825306709ULL) ^ (arr_5 [i_0] [i_0])));
        /* LoopSeq 4 */
        for (short i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))))))));
            var_25 *= ((/* implicit */unsigned int) var_13);
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                var_26 = (_Bool)1;
                arr_26 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16983)) ? (arr_4 [i_0] [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0])))))) ? (((/* implicit */long long int) arr_22 [i_7] [(unsigned short)6] [i_0])) : (arr_1 [i_0])));
            }
            arr_27 [i_0] [i_6] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
            arr_28 [i_0] = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_6])) ? (arr_4 [i_0] [i_0] [i_6]) : (arr_4 [i_0] [i_0] [i_6]));
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
        {
            arr_31 [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7643237944033787008LL)) ? (var_0) : (((((/* implicit */_Bool) arr_16 [i_0] [10U])) ? (var_11) : (((/* implicit */int) arr_3 [1ULL] [i_8]))))));
            arr_32 [i_8] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_9)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        }
        for (int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
        {
            arr_35 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (+(arr_24 [i_9] [i_9] [(unsigned short)3] [i_0])));
            arr_36 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) arr_17 [i_0]))));
            arr_37 [i_0] [i_9] [(_Bool)1] = ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (arr_22 [i_0] [(unsigned char)9] [(unsigned short)3])))) & ((+(9223372036854775807LL))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
            {
                arr_42 [i_10] [i_10] [i_10] [(unsigned short)5] = ((/* implicit */short) var_13);
                var_27 = ((/* implicit */long long int) arr_22 [i_0] [i_9] [i_0]);
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    for (unsigned short i_12 = 2; i_12 < 10; i_12 += 1) 
                    {
                        {
                            arr_50 [i_0] [i_10] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_11] [(unsigned char)9] [i_0]))))) ? (((((/* implicit */_Bool) arr_25 [i_0] [2LL] [2LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_9] [10LL] [1LL]))) : (2566941366828929111ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_10] [i_10] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_10] [i_0] [i_10] [i_11]))))))));
                            arr_51 [i_0] [i_10] = ((/* implicit */short) (~(((/* implicit */int) (short)-12487))));
                            arr_52 [i_10] [(unsigned short)10] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) 7754434752904360846LL)) ? (255U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58454)))));
                            arr_53 [(unsigned short)3] [7U] [(unsigned char)7] [i_11] [i_11] [3ULL] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_43 [i_0] [i_9] [i_10] [i_9] [(short)7])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_9] [(signed char)3]))) : ((+(var_9)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
            {
                arr_56 [i_0] [6LL] [i_9] [6U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_9] [i_13])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (_Bool)1))));
                var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned long long int) arr_38 [i_13] [i_13] [i_9] [i_0])) : (arr_7 [i_0] [i_0] [2ULL]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42732)) && (((/* implicit */_Bool) arr_45 [i_13] [(unsigned short)2] [i_13] [i_0]))))))));
                arr_57 [i_0] [i_9] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [9LL])) ? (arr_5 [i_0] [i_13]) : (arr_4 [i_9] [i_9] [i_9])));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (short i_15 = 1; i_15 < 10; i_15 += 2) 
                    {
                        {
                            arr_63 [2] [2] [2] [i_14] [i_14] [i_15] [i_14] = ((/* implicit */unsigned int) (~(arr_7 [1ULL] [i_9] [i_9])));
                            arr_64 [i_0] [8U] [i_13] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_15 - 1] [i_15] [i_0] [i_13] [i_9] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [(unsigned short)1] [i_9] [(unsigned short)1])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned char)215))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                for (short i_17 = 1; i_17 < 7; i_17 += 4) 
                {
                    {
                        arr_69 [i_17] [(unsigned char)10] [(unsigned char)5] [i_9] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_43 [(unsigned short)1] [i_9] [i_16] [(unsigned short)9] [i_17 + 1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_29 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [9ULL] [i_17 - 1] [i_16] [i_17 - 1])) * (((/* implicit */int) arr_47 [i_0] [1ULL] [6LL] [1LL] [i_17] [i_16] [i_17 + 1]))));
                            arr_74 [i_0] [i_9] [i_17] [i_17] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30067)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28699))) : (arr_70 [(unsigned short)10] [i_17] [i_16] [i_16] [1] [8ULL] [i_0])))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253)))))));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-30068))) / (6503414607900270777LL))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_9] [i_16] [1] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18515))) : (arr_65 [i_0] [i_17 + 4])))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 12650352723111294258ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_9 [i_16] [6U] [i_16] [(_Bool)1]))))))));
                        }
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_19 = 1; i_19 < 14; i_19 += 2) 
    {
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((max(((+(((/* implicit */int) arr_76 [i_19] [0ULL])))), (((/* implicit */int) ((arr_75 [10ULL]) <= (((/* implicit */unsigned long long int) var_11))))))) * ((-(((/* implicit */int) (!(((/* implicit */_Bool) 6310390654860856666LL))))))))))));
        arr_78 [(unsigned char)14] |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_0)) ? ((+(var_5))) : (((((/* implicit */_Bool) arr_75 [(unsigned short)12])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_10)))))));
    }
    var_33 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) (short)26029)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (1465856047) : (((/* implicit */int) var_3)))))))));
}
