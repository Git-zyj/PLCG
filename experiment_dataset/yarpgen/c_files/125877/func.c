/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125877
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
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (992509221U)));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (arr_1 [i_0]))), (min((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_16 = ((/* implicit */int) arr_0 [i_0]);
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (arr_0 [i_0])))))))) + (((((/* implicit */_Bool) ((((var_5) + (2147483647))) << (((arr_3 [i_0] [i_1]) - (945769008U)))))) ? (min((3442861299818563089ULL), (15003882773890988526ULL))) : (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))))));
            var_17 &= ((/* implicit */unsigned int) ((_Bool) ((max((((/* implicit */unsigned long long int) (unsigned short)63949)), (7066932340188966899ULL))) * (15003882773890988527ULL))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))) % (min((var_13), (((/* implicit */unsigned long long int) var_10)))))), (max((((((/* implicit */_Bool) 940194244U)) ? (((/* implicit */unsigned long long int) 0U)) : (15003882773890988519ULL))), (((((/* implicit */_Bool) var_8)) ? (15003882773890988508ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))))))))));
            arr_9 [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_2]))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)46928)))) << (((((/* implicit */int) (signed char)-60)) + (73)))))) : (max((((/* implicit */unsigned int) ((var_3) <= (((/* implicit */unsigned long long int) var_2))))), (max((((/* implicit */unsigned int) var_7)), (arr_3 [i_0] [i_0])))))));
        }
        for (int i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_5 [i_3 - 2] [i_3 - 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) ((unsigned short) var_8)))))));
            arr_13 [i_0] [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0]))))), (((((/* implicit */_Bool) var_2)) ? (2894723039U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))), (max((((/* implicit */unsigned int) min((((/* implicit */short) var_9)), ((short)16)))), (4294967295U)))));
        }
        var_19 = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) (signed char)-49)));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    arr_22 [i_4] = ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                    var_20 = ((/* implicit */short) var_6);
                    arr_23 [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_24 [(unsigned char)4] [i_5] [(unsigned char)4] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5] [i_6]))));
                    arr_25 [i_4] [i_4] [i_4] [i_4] &= ((/* implicit */int) ((unsigned int) (unsigned short)58112));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) (short)-4995);
            arr_29 [i_4] [i_7] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) + ((+(var_12)))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (long long int i_10 = 2; i_10 < 15; i_10 += 3) 
                {
                    {
                        arr_37 [i_4] [(unsigned char)2] [i_10] [i_4] = ((/* implicit */_Bool) arr_28 [i_4] [(signed char)11] [i_9]);
                        var_22 = ((/* implicit */int) (~(18446744073709551604ULL)));
                        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)240))));
                        arr_38 [i_10] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_5)) : (((unsigned int) arr_17 [i_4] [i_4]))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_4] [i_4] [(_Bool)1]))));
            /* LoopNest 3 */
            for (unsigned char i_11 = 2; i_11 < 13; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_25 = arr_20 [i_8] [i_11 - 2] [i_12] [i_13];
                            arr_47 [i_4] [i_8] [i_11 + 3] [i_8] [i_13] [i_8] = ((/* implicit */unsigned int) arr_30 [i_4] [i_4] [i_12]);
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned int i_14 = 2; i_14 < 18; i_14 += 1) 
    {
        arr_50 [i_14] [i_14] = ((/* implicit */int) var_6);
        var_26 = ((/* implicit */_Bool) var_0);
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned short) (short)27759)))));
        arr_51 [i_14 + 3] [(short)8] &= ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_49 [i_14])) : (((/* implicit */int) min((arr_48 [6]), (arr_48 [(_Bool)1])))));
    }
    for (unsigned int i_15 = 2; i_15 < 11; i_15 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((/* implicit */int) min((arr_33 [i_15 + 1] [i_15 + 1] [i_15 - 2]), (var_1))))));
                    arr_61 [i_15] [i_16] [i_17] [i_16] = ((/* implicit */unsigned char) arr_46 [i_15] [i_16] [i_16] [i_17] [i_17]);
                    arr_62 [i_17] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) arr_3 [i_15 - 1] [i_15 - 1]))), (max((((/* implicit */unsigned int) 675259261)), (2085953213U)))))), (max((((/* implicit */unsigned long long int) ((int) 3442861299818563102ULL))), (arr_40 [i_15] [i_15 + 1] [i_15 - 2] [i_15 + 1])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_18 = 4; i_18 < 11; i_18 += 3) 
        {
            for (signed char i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                {
                    var_29 = ((/* implicit */long long int) var_7);
                    arr_67 [i_15] [i_18 - 4] [i_18] = ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned long long int) arr_41 [i_15 - 1] [i_15 - 2] [i_18 + 1] [i_18 - 2])), (1919092962131754377ULL))));
                    var_30 = ((/* implicit */signed char) min((min((min((var_3), (((/* implicit */unsigned long long int) arr_34 [i_15 + 1] [i_18 - 4])))), (((/* implicit */unsigned long long int) min((arr_49 [i_15 - 2]), ((_Bool)0)))))), (((/* implicit */unsigned long long int) -675259257))));
                    var_31 |= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_44 [i_15] [i_15 + 1] [i_18 - 1] [i_18 - 1])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_20 = 4; i_20 < 11; i_20 += 2) 
        {
            for (signed char i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((max((max((arr_44 [i_21] [i_20 - 4] [i_15] [i_15]), (((/* implicit */unsigned long long int) arr_63 [i_21])))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */short) var_9))))))) != (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_15]))) ^ (2085953204U)))))))));
                    arr_73 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((unsigned int) arr_72 [i_21] [i_15])) : (var_2)))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_17 [i_15 - 2] [i_20 - 1])) : (1643874364U))))) : (min((arr_3 [i_20 - 1] [i_15 + 1]), (arr_3 [i_20 + 1] [i_15 + 1])))));
                }
            } 
        } 
        var_33 -= ((/* implicit */long long int) min((min((min((67108863U), (((/* implicit */unsigned int) arr_34 [i_15] [i_15])))), (((/* implicit */unsigned int) ((arr_56 [i_15] [(unsigned short)7]) ? (((/* implicit */int) arr_65 [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_42 [i_15]))))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_21 [i_15] [i_15])) ? (((/* implicit */int) arr_18 [i_15])) : (((/* implicit */int) arr_34 [i_15] [i_15 - 1])))))))));
    }
}
