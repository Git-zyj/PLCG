/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153975
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min(((unsigned char)0), ((unsigned char)2))), (var_15)))) ? (min((18110025691577946823ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16128)))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_11))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */int) (unsigned char)2)) * (((((/* implicit */int) (unsigned char)62)) / (-683447652))));
        arr_4 [i_0] = ((/* implicit */int) min((min((var_16), (arr_0 [i_0]))), (((/* implicit */long long int) (~(((/* implicit */int) (short)25524)))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)2)) && (((/* implicit */_Bool) max(((unsigned short)25156), (((/* implicit */unsigned short) (unsigned char)62))))))))) & ((~((~(549755812864ULL)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) 14563431094170327864ULL);
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3569335332882543842LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))) : (4063536375877469834ULL)))) ? (((((/* implicit */_Bool) 13048851275975806574ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) : (3569335332882543842LL))) : (((/* implicit */long long int) -1069628199)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)25156)) != (((/* implicit */int) max((var_4), (((/* implicit */short) (unsigned char)0))))))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)53257)))) <= (((/* implicit */int) max(((unsigned char)173), (((/* implicit */unsigned char) var_1)))))));
                        arr_15 [i_1] [i_1] [i_1 - 2] [i_3] = ((/* implicit */int) 5312666416624919757ULL);
                        arr_16 [i_1] [i_3] [i_1 - 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_1 + 1])), (3116009355U)))) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_2 - 1] [i_1 - 2] [i_1] [i_3])) ? (((/* implicit */long long int) var_5)) : (var_13))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 + 1])) | (((/* implicit */int) (short)(-32767 - 1))))))));
                        arr_17 [i_3] = ((/* implicit */unsigned long long int) (unsigned short)39507);
                    }
                } 
            } 
        }
        for (short i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            var_25 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_8 [i_1 - 1]))))) : (max((var_5), (((/* implicit */int) arr_8 [i_1 + 1])))));
            arr_20 [i_5] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    arr_26 [i_1] [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(3263502235U)));
                    /* LoopSeq 2 */
                    for (short i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_9 = 3; i_9 < 21; i_9 += 4) 
                        {
                            var_26 |= var_10;
                            var_27 += ((((/* implicit */_Bool) 1971221245887208399ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2066818394U));
                            arr_33 [i_7] [9LL] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                        }
                        for (unsigned short i_10 = 3; i_10 < 21; i_10 += 1) 
                        {
                            arr_36 [i_7] [i_6] [(unsigned char)6] [i_8] [i_10 - 3] [i_7] = (~((+(((/* implicit */int) arr_28 [i_1 - 2] [i_6] [i_8 - 1] [17U] [(unsigned short)7] [i_8])))));
                            arr_37 [i_1] |= ((/* implicit */unsigned char) (signed char)65);
                            arr_38 [i_7] [i_8 + 1] [i_7] [i_6] [i_1] [i_7] = ((/* implicit */unsigned short) var_19);
                            arr_39 [i_10] [i_8] [i_7] [20LL] [i_1] = (_Bool)0;
                            arr_40 [i_7] = ((/* implicit */short) 564519279860399218LL);
                        }
                        arr_41 [i_7] = ((/* implicit */short) (~((+(min((((/* implicit */unsigned long long int) (unsigned char)177)), (1971221245887208399ULL)))))));
                        arr_42 [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_28 [22U] [i_6] [i_7] [i_8] [i_6] [i_8]), (((/* implicit */unsigned char) ((((/* implicit */int) (short)1023)) < (((/* implicit */int) (short)-16164))))))))));
                    }
                    for (unsigned short i_11 = 2; i_11 < 21; i_11 += 4) 
                    {
                        arr_45 [i_7] [i_6] [i_7] [22] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (336718382131604792ULL)))) ? ((~(1520392514))) : (((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) (unsigned char)2)))))));
                        arr_46 [i_11 + 1] [i_7] [i_7] [i_6] [i_7] [(short)0] = ((/* implicit */unsigned long long int) var_4);
                    }
                }
            } 
        } 
        var_28 = (~(((/* implicit */int) var_15)));
        arr_47 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_17))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_6)))) : ((~(min((9728726731778015490ULL), (((/* implicit */unsigned long long int) var_14))))))));
        /* LoopSeq 2 */
        for (unsigned int i_12 = 3; i_12 < 22; i_12 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) min((var_29), (((((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)0)), (1520392520))))))) == ((+(17186370517276654218ULL)))))));
            arr_52 [i_12] = ((/* implicit */int) arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 1]);
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 21; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) -8092491730870629727LL))));
                        arr_60 [i_12] [i_12] [i_12] = ((/* implicit */int) -1480493689830512987LL);
                        arr_61 [i_12] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (short)28634))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((1260373556432897403ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17607415182454438540ULL)) ? (((/* implicit */int) (unsigned short)37125)) : (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (max((((/* implicit */unsigned long long int) -752588136)), (max((17983504221513372221ULL), (16704335789866600218ULL))))))))));
                    }
                } 
            } 
            arr_62 [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (21))) - (8)))));
        }
        /* vectorizable */
        for (unsigned int i_15 = 3; i_15 < 22; i_15 += 4) /* same iter space */
        {
            arr_67 [i_1] [i_1] [i_15 + 1] = ((/* implicit */unsigned long long int) 0);
            arr_68 [i_1] [i_15] = ((/* implicit */int) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        }
    }
    var_32 ^= (short)-8639;
}
