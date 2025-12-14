/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172124
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
    var_16 = ((/* implicit */_Bool) var_15);
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (14563518653238825884ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22427)))))))) ? (((((/* implicit */_Bool) ((3883225420470725749ULL) ^ (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)22]))) : (14563518653238825874ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
        arr_4 [12U] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_5 [i_0] = ((/* implicit */_Bool) var_14);
        var_19 = ((/* implicit */int) var_12);
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) 268435424)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))) : (((arr_0 [i_1]) ? (((/* implicit */unsigned long long int) 521596285U)) : (var_14))))), (((/* implicit */unsigned long long int) (_Bool)1)))))));
        arr_9 [i_1] [i_1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1144296968)))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_15 [i_2] [i_3] = (+(((/* implicit */int) var_2)));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) ((arr_0 [i_2 - 1]) ? (arr_14 [i_2 + 1]) : (((/* implicit */int) var_1))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? (arr_2 [i_2 + 2]) : (arr_2 [i_2 + 2]))))));
                var_23 -= ((/* implicit */_Bool) var_7);
                var_24 = (((((~(((/* implicit */int) (unsigned short)32512)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))));
                arr_19 [i_2] [i_2] [(short)2] = ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2 - 1])) == (((/* implicit */int) (_Bool)1)));
            }
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                arr_22 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5]))) : (arr_3 [i_2 + 2] [i_2 - 1])));
                var_25 |= ((/* implicit */long long int) ((((83359596U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)51)) ? (1860939320U) : (((/* implicit */unsigned int) 416502644)))) : ((-(var_11)))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_26 *= (!(((/* implicit */_Bool) 4294966272U)));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_27 += ((((/* implicit */_Bool) (~(arr_25 [16LL])))) ? ((~(var_14))) : (((/* implicit */unsigned long long int) var_0)));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_14))));
                            arr_31 [i_2] [(_Bool)1] [i_2] [14] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)44)) ? (-1144296963) : (((/* implicit */int) var_4))));
                            var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_2 + 1]))));
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_2 + 2])) * (((/* implicit */int) arr_10 [i_2 - 1])))))));
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) -8026813570616562586LL))));
            var_32 = ((/* implicit */_Bool) min((var_32), ((!(((/* implicit */_Bool) arr_25 [0ULL]))))));
        }
        /* LoopSeq 2 */
        for (short i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            var_33 = ((/* implicit */short) var_13);
            arr_34 [i_2] [i_2] [3] = var_11;
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    {
                        arr_39 [i_2] [i_2] [0U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (3719905189616776155ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3584)))))) ? (((((/* implicit */_Bool) -4101697393472148203LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))) : (((/* implicit */unsigned long long int) 7U))));
                        arr_40 [i_2] [i_2] [i_2] [(unsigned short)16] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_2 + 1] [i_10] [i_9 + 2] [i_11])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (14563518653238825884ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2048))))) : (((/* implicit */unsigned long long int) 2434027973U))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_2 + 1] [i_9 - 1] [i_9] [i_9 + 2])) < (((/* implicit */int) var_4))));
                        var_35 = ((/* implicit */short) 1144296949);
                        var_36 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) : (var_11)));
                    }
                } 
            } 
            var_37 = ((/* implicit */_Bool) arr_33 [i_9] [i_2] [i_2]);
        }
        for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)211))));
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_10))) ? (((((/* implicit */_Bool) arr_49 [i_2] [i_2] [i_14] [i_15])) ? (var_8) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_2 - 1] [i_2 - 1] [20U] [i_2 + 1])))));
                arr_51 [i_2] [i_14] = (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (-268435425));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    var_40 = ((/* implicit */long long int) arr_56 [i_2] [i_2 + 1]);
                    var_41 -= ((/* implicit */unsigned char) (-(var_0)));
                }
                arr_58 [i_2] [i_2] [i_2] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_1 [i_2 + 1])));
                arr_59 [i_2] [i_2] = (+(((/* implicit */int) (_Bool)1)));
                var_42 = ((/* implicit */unsigned int) var_8);
                var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_32 [(short)3])))));
            }
            for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
            {
                var_44 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_29 [8U])))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    for (int i_20 = 2; i_20 < 19; i_20 += 2) 
                    {
                        {
                            arr_66 [i_2] [i_2] [i_18] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)7))));
                            var_45 = ((/* implicit */unsigned char) arr_35 [i_2] [i_14] [(_Bool)1] [i_19]);
                        }
                    } 
                } 
                var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)249))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41747)))) : ((+(((/* implicit */int) var_15))))));
            }
            arr_67 [i_2] [14ULL] [i_2] = ((/* implicit */unsigned char) arr_38 [i_14]);
            arr_68 [i_2] [i_2] = ((/* implicit */_Bool) -980361879);
            arr_69 [(short)16] [i_2] = ((((/* implicit */_Bool) -1734574860)) ? (4227858432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))));
        }
    }
}
