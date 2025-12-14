/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171516
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
    var_18 += ((/* implicit */short) ((min((((/* implicit */unsigned long long int) 1765651279U)), (var_5))) >> (((((((/* implicit */_Bool) var_17)) ? (4211739063U) : (((((/* implicit */_Bool) (unsigned short)61687)) ? (240298837U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) - (4211739038U)))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_8))));
    var_20 = (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3848))) : (1ULL));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned char) (((!(((/* implicit */_Bool) 3383257244U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (4211739063U))))))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))));
                        var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) | (4211739063U)));
                        var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */signed char) var_4)), (arr_6 [i_2] [i_2 - 1] [i_2] [i_2 + 2])))) ? (((/* implicit */int) arr_9 [i_0] [9LL] [9LL] [i_3 + 1])) : (((/* implicit */int) var_4)))), ((-(arr_8 [i_2 - 1])))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) 18446744073709551614ULL);
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 38572799)) : (var_5))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))) - (38572782ULL)))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (unsigned short)61687))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (short i_8 = 3; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_28 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_15 [i_4])))));
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61687)) ? (((/* implicit */int) (unsigned short)64343)) : (((/* implicit */int) (short)5356)))))));
                            }
                        } 
                    } 
                    var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17479))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)117)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_32 = (~(((/* implicit */int) var_2)));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (18446744073709551614ULL)));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_7))));
                    }
                } 
            } 
            arr_35 [i_4] [i_9] |= ((/* implicit */unsigned long long int) (+(83228235U)));
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)0)))) <= ((~(((/* implicit */int) (unsigned char)224)))))))));
        }
    }
    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            for (unsigned int i_14 = 2; i_14 < 19; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    {
                        arr_48 [i_12] [i_12] [i_15] = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned char)238)) >> (((((/* implicit */int) var_10)) - (30405))))))) > (((long long int) arr_44 [i_14] [i_14] [i_14 - 1]))));
                        var_36 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)4551))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)17924))))) : (((/* implicit */int) (unsigned char)235))));
                    }
                } 
            } 
        } 
        var_37 &= ((/* implicit */signed char) 12);
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (short i_19 = 4; i_19 < 19; i_19 += 3) 
                        {
                            {
                                arr_62 [i_18] [i_16] [i_17] [i_12] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) 3358204368U))));
                                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (unsigned char)21))));
                            }
                        } 
                    } 
                    arr_63 [i_12] = ((/* implicit */int) ((short) (+(arr_49 [i_12] [i_12]))));
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        for (short i_21 = 0; i_21 < 21; i_21 += 3) 
                        {
                            {
                                arr_71 [i_16] [i_20] [2ULL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-1648)) ^ (((/* implicit */int) (unsigned char)152))))) : (arr_59 [i_20]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) min((15077881589627470990ULL), (((/* implicit */unsigned long long int) arr_45 [i_12] [i_16] [i_17]))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((unsigned short) var_10))))))));
                                var_39 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_12] [i_16] [i_12] [i_20]))));
                                var_40 *= arr_60 [1];
                                arr_72 [i_12] [i_16] [i_17] [i_17] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) >> (((arr_51 [i_12]) - (6888380079711686396ULL)))));
                                arr_73 [9] [(short)6] [i_20] [i_16] = ((/* implicit */unsigned long long int) arr_38 [i_21]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
