/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151676
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
    var_14 = (-(var_8));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_6 [8LL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(4169112317U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13003))) : (arr_1 [i_1])));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] = ((/* implicit */long long int) (~(-115591749)));
                        arr_13 [(unsigned short)5] [i_0] [i_3] [i_3 - 1] [i_2] [i_1] = ((/* implicit */unsigned char) 3875271140245604547ULL);
                    }
                } 
            } 
            arr_14 [i_1] [i_1] [i_1] = 1595087460;
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                arr_17 [i_1] [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((arr_15 [i_4] [i_1] [i_4] [i_4]) ? (1595087460) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_4] [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 12; i_5 += 4) 
                {
                    arr_20 [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-13229)) + (2147483647))) >> (((779704511775251342ULL) - (779704511775251331ULL)))));
                    arr_21 [i_5 + 1] [2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_18 [i_4]);
                }
                arr_22 [i_0] [i_0] [i_0] [i_1] = arr_15 [i_1] [i_1] [i_0] [i_4];
            }
        }
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 2) 
        {
            arr_27 [i_0] [(short)9] [i_6] = ((/* implicit */int) 14920758788902509832ULL);
            arr_28 [i_0] [i_0] [(short)8] = ((/* implicit */unsigned long long int) min((min(((~(252U))), (((/* implicit */unsigned int) arr_16 [i_0] [i_6 + 1])))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 253U)))))))));
            arr_29 [i_0] [i_6] = ((_Bool) min((min((arr_2 [1]), (((/* implicit */unsigned short) (_Bool)1)))), ((unsigned short)5223)));
            arr_30 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) arr_16 [i_0] [i_6 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_6 - 1] [i_6 - 2])))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            arr_33 [i_7 - 1] = ((/* implicit */unsigned int) var_13);
            arr_34 [i_7] = min(((!(((/* implicit */_Bool) arr_4 [i_7 + 1] [i_7 + 1])))), (((arr_4 [4U] [i_7 - 1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned short)10] [i_7 + 1] [i_7 - 1] [i_7 + 1]))))));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_10 = 1; i_10 < 18; i_10 += 3) 
            {
                arr_47 [i_10] [i_10] [i_10] |= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)34053))));
                arr_48 [5ULL] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            }
            arr_49 [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */long long int) 3568158996U)) : ((-9223372036854775807LL - 1LL))));
        }
        for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            arr_53 [i_8] [i_8] [i_11] = (_Bool)0;
            arr_54 [i_8] [(unsigned short)9] [13U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_51 [i_8] [i_11])))))));
            arr_55 [i_11] [(short)7] = ((/* implicit */signed char) 14571472933463947083ULL);
            arr_56 [13] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
            arr_57 [(unsigned char)10] [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) min((3568158996U), (((/* implicit */unsigned int) (unsigned char)221)))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
            {
                arr_65 [i_8] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 14571472933463947065ULL))))))), (((/* implicit */int) ((unsigned short) var_6)))));
                arr_66 [i_13] [18] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) == (((((/* implicit */int) arr_50 [i_13] [i_8])) & (((/* implicit */int) arr_50 [i_8] [i_8]))))));
                arr_67 [i_8] [i_12] [i_13] [(unsigned short)14] |= ((/* implicit */unsigned short) ((((3525985284807041784ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -17592186044416LL)) ? (((/* implicit */unsigned int) 115591749)) : (1048560U)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3336677054U))))));
                arr_68 [(short)3] [i_12] [i_13] = ((/* implicit */long long int) (~(((-645155350) & (((/* implicit */int) (_Bool)1))))));
                arr_69 [6ULL] [i_12] [(short)13] = ((/* implicit */short) arr_35 [i_12] [i_13]);
            }
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
            {
                arr_73 [16LL] [i_8] [(signed char)12] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [1ULL] [i_12] [i_12] [i_12])) ? (arr_42 [i_8] [(unsigned short)0] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        {
                            arr_80 [i_16] [16ULL] [i_14] [i_12] [i_12] [i_8] [i_8] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) 1770514652)) : (3568158996U)));
                            arr_81 [i_8] [8LL] [i_14] [i_15] [i_16] = ((/* implicit */int) ((unsigned long long int) (-(14571472933463947061ULL))));
                        }
                    } 
                } 
            }
            arr_82 [i_12] = ((unsigned short) (!(((/* implicit */_Bool) var_13))));
        }
    }
}
