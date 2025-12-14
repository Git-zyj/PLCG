/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10732
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
    var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((208626165840437708LL) == (-208626165840437702LL))))) ? ((~(var_2))) : (((((/* implicit */_Bool) 221292286)) ? (-208626165840437692LL) : (208626165840437702LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (208626165840437700LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (unsigned short)65522))))) ? (((/* implicit */int) (unsigned char)114)) : ((~(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1634825465239478489LL)))) * (((((/* implicit */_Bool) 208626165840437706LL)) ? (-208626165840437701LL) : (((/* implicit */long long int) -496722725)))))))));
            var_13 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1634825465239478497LL)) ? (((/* implicit */int) (unsigned short)254)) : (((/* implicit */int) var_4))))) ? ((~(var_8))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned long long int) ((arr_13 [i_3] [i_2] [i_1] [i_0 + 1]) ? (((/* implicit */int) (unsigned char)30)) : (278959874)));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39029)) ^ (arr_10 [(unsigned char)1] [6LL])))) ? (((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0]))) : (((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned short i_6 = 3; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned short) -208626165840437701LL)))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? ((+(((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (unsigned short)26507))))));
                        }
                    } 
                } 
                arr_22 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) 6708411780160327033ULL));
            }
            for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                arr_26 [i_0] [i_1] [(unsigned short)2] = -208626165840437702LL;
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((int) arr_14 [i_7] [i_0] [i_1] [i_1] [i_0] [i_0])))))));
            }
            var_20 -= ((/* implicit */unsigned char) ((int) 22ULL));
        }
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            var_21 ^= ((/* implicit */unsigned long long int) ((3600694010U) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39029))))))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_0] [i_8]) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_8])) < (((/* implicit */int) (unsigned short)65528)))))));
        }
    }
    /* LoopSeq 4 */
    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_10 = 3; i_10 < 14; i_10 += 4) 
        {
            arr_34 [i_10] = ((/* implicit */_Bool) (+(var_5)));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_9 - 1])) ? (((((/* implicit */long long int) 2080374784)) & (-208626165840437691LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_16 [i_9] [(_Bool)1] [i_9] [2U] [i_9]))))))))));
        }
        /* vectorizable */
        for (unsigned char i_11 = 4; i_11 < 11; i_11 += 4) 
        {
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((4910729994162212849LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60497))))))));
            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65522))));
        }
        arr_38 [i_9] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((signed char) -12LL))) ? (((((/* implicit */_Bool) arr_32 [i_9] [i_9 - 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))))) : (((((/* implicit */_Bool) arr_37 [(unsigned short)3])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4088)))))))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                    var_27 |= ((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        arr_48 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned char)70))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (13877159487922531457ULL)))));
        arr_49 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1634825465239478492LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)6116))))) : (((/* implicit */int) (unsigned char)51))));
    }
    /* vectorizable */
    for (unsigned int i_15 = 1; i_15 < 13; i_15 += 4) 
    {
        var_28 += ((/* implicit */_Bool) ((arr_36 [i_15 - 1] [i_15 - 1] [i_15 - 1]) - (-4811392538934063680LL)));
        var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (6) : (((/* implicit */int) (unsigned char)83))))) == (((((/* implicit */_Bool) arr_24 [(unsigned char)18])) ? (((/* implicit */unsigned long long int) arr_24 [16ULL])) : (0ULL)))));
    }
    for (unsigned short i_16 = 3; i_16 < 15; i_16 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            arr_58 [(_Bool)0] [i_17] = ((/* implicit */unsigned short) ((arr_27 [9]) ^ (arr_27 [i_17])));
            arr_59 [i_16] [i_16] [i_17] = ((/* implicit */short) ((unsigned short) (unsigned short)21508));
            arr_60 [i_16 - 1] [i_16] [i_17] = ((/* implicit */signed char) 2593208572031876575LL);
            arr_61 [i_17] [(signed char)14] &= ((/* implicit */int) 3579048746U);
            var_30 ^= ((((/* implicit */_Bool) ((15ULL) / (13877159487922531458ULL)))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_7)));
        }
        for (short i_18 = 0; i_18 < 16; i_18 += 4) 
        {
            arr_64 [i_18] [i_16] = max((((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned short) var_0)), ((unsigned short)62076))))), (var_5));
            var_31 = ((/* implicit */unsigned char) 18446744073709551614ULL);
        }
        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_20 = 1; i_20 < 15; i_20 += 4) 
            {
                var_32 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 9223372036854775791LL)) >= (15ULL))) ? (((/* implicit */long long int) arr_24 [(unsigned short)14])) : ((-(var_2)))));
                var_33 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(587686677)))) ? (((long long int) (unsigned char)190)) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_16 - 3] [i_16 - 1] [i_16] [i_16 - 1]))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) == (((unsigned long long int) (signed char)-95))))))));
            }
            arr_72 [i_16 - 1] [13LL] [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((_Bool) var_4))) ^ (((/* implicit */int) var_1)))) * (min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) 13993876693237972598ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))));
            var_34 = ((/* implicit */long long int) max((var_34), (4291272158800753821LL)));
        }
        var_35 = ((/* implicit */unsigned char) var_5);
        arr_73 [i_16] = ((/* implicit */_Bool) min((min((((/* implicit */int) var_7)), (-1058711744))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < ((~(((/* implicit */int) arr_28 [i_16])))))))));
    }
}
