/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124112
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_11))))) ? (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21447))))) : (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (17031775543214346575ULL)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) 4200051667U)), (4088587391072987899LL))) <= (((/* implicit */long long int) var_0))))))));
    var_14 = ((/* implicit */short) var_4);
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_12)) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3)))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_8)))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_1 [i_0]))))))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_17 += ((/* implicit */unsigned int) (-(((/* implicit */int) min((((unsigned short) (_Bool)1)), (((unsigned short) arr_6 [i_0] [i_1] [i_2])))))));
                        arr_10 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) ((max((var_2), (((/* implicit */unsigned long long int) var_8)))) < (((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 - 1] [i_1 + 1] [i_2])))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) ((unsigned short) ((short) var_11)));
                        var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (short)21439)) : (arr_7 [i_3 - 1] [i_1] [i_2] [(_Bool)1])))));
                    }
                } 
            } 
            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_0] [i_1] [8ULL])), (-1892918223)))), (max((arr_4 [(unsigned short)8] [i_1]), (((/* implicit */unsigned int) var_1)))))));
        }
        for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (min((4200051663U), (((/* implicit */unsigned int) arr_8 [i_4 + 1] [i_4 - 2] [i_0] [i_4] [i_0] [i_0]))))))) == (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_4] [i_0]))));
            arr_15 [i_0] = ((/* implicit */long long int) 4200051663U);
            arr_16 [i_0] [i_4 + 2] [i_0] = ((/* implicit */_Bool) (~(((94915628U) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)39709)) | (((/* implicit */int) arr_0 [i_0])))))))));
        }
        for (signed char i_5 = 3; i_5 < 13; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                arr_22 [i_0] [6LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_6 [i_0] [i_5] [i_0])) & (((/* implicit */int) (_Bool)1)))))))));
                var_20 |= ((/* implicit */long long int) (~(((/* implicit */int) ((short) -9223372036854775807LL)))));
                var_21 = ((/* implicit */int) ((4200051667U) % (((/* implicit */unsigned int) ((arr_7 [i_5 + 3] [i_5 + 3] [i_5 - 3] [i_5 - 3]) / ((~(((/* implicit */int) (signed char)-66)))))))));
            }
            var_22 = ((/* implicit */short) min(((-(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) ((short) var_10))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])))) : ((-(((/* implicit */int) var_10))))))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_14 [i_5 + 2] [(unsigned char)14])) : (((((/* implicit */_Bool) 6755399441055744LL)) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_14 [i_0] [i_5])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) (short)16481))))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        arr_25 [i_7] [i_7] = ((/* implicit */long long int) var_2);
        var_24 &= ((/* implicit */signed char) (((-(((/* implicit */int) (short)21446)))) ^ (((/* implicit */int) var_1))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_7] [i_7])) ? ((~(arr_24 [i_7] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-9223372036854775807LL)));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                for (unsigned int i_11 = 4; i_11 < 12; i_11 += 4) 
                {
                    {
                        arr_37 [i_10] = ((/* implicit */unsigned int) ((unsigned short) ((short) var_7)));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10]))) | (94915632U)))) ? (((/* implicit */int) arr_9 [i_11 - 1] [i_9] [i_10] [i_9] [i_8])) : (((/* implicit */int) var_10)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 1) 
                        {
                            arr_41 [i_10] [(unsigned short)4] [(unsigned short)4] [i_10] [i_10] [i_9] [i_8] = ((/* implicit */unsigned char) arr_21 [i_12] [i_11] [i_9] [i_8]);
                            arr_42 [i_11] [i_9] [i_9] [0ULL] [i_9] [i_9] [i_9] &= ((/* implicit */signed char) ((((/* implicit */int) (short)-21439)) ^ (((/* implicit */int) arr_27 [i_8]))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_11] [i_12 - 1] [i_12 + 1])))))));
                            var_29 = ((/* implicit */unsigned int) ((((_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) arr_5 [i_10] [i_10] [(short)3])))));
                        }
                        /* LoopSeq 3 */
                        for (int i_13 = 4; i_13 < 15; i_13 += 4) 
                        {
                            var_30 = ((/* implicit */_Bool) ((arr_30 [i_8] [i_9]) ^ (arr_30 [i_10] [i_13 + 1])));
                            arr_45 [i_10] [i_9] = ((/* implicit */short) (-((~(arr_35 [i_8] [i_9] [i_10] [i_11] [i_13] [i_8])))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_10] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_14 [i_11 + 3] [i_13])) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_38 [4U] [i_8] [4LL] [i_10])))) : (((/* implicit */int) ((_Bool) var_12)))));
                            arr_46 [i_11] [i_11 - 3] [i_13] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4200051667U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_11]))) : (((((/* implicit */_Bool) 1536)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                            arr_47 [i_8] [i_9] [i_10] [i_11] [2ULL] &= ((/* implicit */unsigned int) arr_24 [(signed char)17] [i_9]);
                        }
                        for (unsigned int i_14 = 1; i_14 < 15; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((signed char) arr_48 [i_11 - 2] [i_11 + 2] [i_11] [i_11] [i_11 - 3] [i_11 + 2])))));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [4LL] [i_9] [i_11 + 2] [i_11 - 2] [i_14] [i_14 + 1])) ? (((/* implicit */int) ((_Bool) -1536))) : (((((/* implicit */int) arr_6 [i_8] [i_8] [i_8])) / (((/* implicit */int) arr_32 [i_8] [i_8] [i_8] [i_8])))))))));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 1) 
                        {
                            arr_53 [i_15 + 1] [i_8] [i_10] [i_9] [i_8] [i_8] &= ((/* implicit */short) ((arr_6 [i_9] [i_10] [i_11 - 2]) ? (var_2) : (((/* implicit */unsigned long long int) arr_17 [i_8] [i_10]))));
                            arr_54 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_11 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-4088587391072987899LL)));
                        }
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        } 
        arr_55 [i_8] [i_8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_34 [i_8] [i_8] [i_8] [i_8])))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_19 [i_8] [i_8] [i_8]))));
        var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
        /* LoopSeq 1 */
        for (int i_16 = 0; i_16 < 16; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 4; i_18 < 13; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        {
                            var_36 *= ((/* implicit */short) arr_59 [i_19] [i_18 - 4] [i_8] [i_8]);
                            var_37 = ((/* implicit */unsigned short) ((long long int) arr_64 [i_18] [i_18] [i_18 - 3] [i_18 + 1] [i_18 + 2]));
                            var_38 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28190))) == ((-(arr_36 [i_16] [i_16] [i_16] [i_16])))));
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) <= ((~(((/* implicit */int) arr_58 [i_8] [i_8] [i_8] [(unsigned short)2]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    {
                        var_40 += ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (short)28184)) > (((/* implicit */int) var_10)))));
                        arr_74 [15U] [i_16] [i_20] [i_16] [i_16] [i_20] = ((/* implicit */unsigned long long int) 3628578941U);
                        arr_75 [i_20] [i_20] [i_21] = ((/* implicit */unsigned short) 1390255985);
                    }
                } 
            } 
            arr_76 [i_16] = ((/* implicit */short) var_5);
            arr_77 [i_16] [i_16] [i_8] = ((/* implicit */long long int) var_9);
        }
    }
    var_41 &= ((/* implicit */short) (-(max((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_8))))))));
}
