/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156527
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-119))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)25)))))));
            arr_5 [i_1] [i_1] = 4294967295U;
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)20226)) ? (8511132655815995052ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45300)))))))));
                            var_18 = ((/* implicit */short) (-(((/* implicit */int) var_15))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_15 [i_5] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_0] [i_3] [i_5]);
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)82)) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [(_Bool)1] [i_2] [i_2] [i_5]))));
                        }
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (unsigned char)197);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((((4294967279U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_6]))))) * (((/* implicit */unsigned int) ((int) 0U)))));
            var_21 = ((/* implicit */long long int) var_12);
            arr_19 [i_6] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (4294967291U))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)197)) / (((/* implicit */int) (unsigned short)45310)))))));
        }
        for (int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_8 = 2; i_8 < 22; i_8 += 4) 
            {
                arr_25 [i_7] [i_0] [i_7] [i_8 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8] [(signed char)3] [12U] [i_8 - 1] [i_8 - 1] [i_7]))) : (4052081993755758913LL)));
                arr_26 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned short) (short)0));
                arr_27 [i_0] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_12)))));
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)29738), (var_6)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) min((var_6), ((short)19591))))))) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) ((((/* implicit */int) var_15)) == ((-(((/* implicit */int) (_Bool)1)))))))));
                        var_23 -= ((/* implicit */signed char) var_13);
                    }
                } 
            } 
        }
    }
    /* LoopSeq 4 */
    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        var_24 = ((/* implicit */short) min((var_24), (var_1)));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                {
                    arr_40 [i_11] [i_12] [i_11] [i_11] = ((/* implicit */int) arr_36 [i_13] [i_12]);
                    arr_41 [i_12] [i_12] [i_12] [i_13] = ((/* implicit */signed char) (unsigned char)189);
                    arr_42 [i_11] [i_11] [i_12] [i_13] &= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8))))) >> ((((+(((/* implicit */int) (unsigned char)63)))) - (34))))) * (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (short)19600))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((var_13) >> (((unsigned int) (_Bool)1)))))));
        arr_46 [i_14] = (~(((long long int) (unsigned short)55042)));
        arr_47 [(_Bool)1] [i_14] = ((/* implicit */long long int) var_10);
        arr_48 [i_14] [i_14] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_14])) ? (((/* implicit */long long int) var_2)) : (arr_24 [i_14] [i_14]))))));
    }
    /* vectorizable */
    for (long long int i_15 = 1; i_15 < 19; i_15 += 3) 
    {
        var_26 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_15 + 2]))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [21ULL] [i_15 + 1] [i_15] [21ULL])) ? (-6189913840829014270LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_5))))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_28 ^= ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)26214))))) / (((unsigned long long int) var_7)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_17 = 1; i_17 < 8; i_17 += 1) 
        {
            arr_58 [i_16] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_36 [i_16] [i_16])) | (((/* implicit */int) (short)-26214)))));
            var_29 = ((/* implicit */signed char) var_14);
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_30 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)150))));
            arr_61 [i_16] [i_16] = (i_16 % 2 == 0) ? (((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)0)), ((short)19553)))), (((arr_12 [i_16] [i_18] [11LL] [i_18] [i_18] [i_16]) >> (((((/* implicit */int) arr_59 [i_16])) + (3262)))))))) : (((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)0)), ((short)19553)))), (((arr_12 [i_16] [i_18] [11LL] [i_18] [i_18] [i_16]) >> (((((((/* implicit */int) arr_59 [i_16])) + (3262))) + (2714))))))));
        }
        arr_62 [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_16] [i_16])) % (((((/* implicit */int) (unsigned char)174)) >> (((((/* implicit */int) (signed char)120)) - (117)))))))) < (((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) * (var_2)))));
    }
    var_31 = ((/* implicit */long long int) ((unsigned short) (unsigned char)195));
}
