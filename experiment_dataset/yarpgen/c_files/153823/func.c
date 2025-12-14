/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153823
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
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((arr_3 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))));
            var_15 = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)22628)) >> (((/* implicit */int) (_Bool)1))))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (signed char)-4)) <= (((/* implicit */int) (signed char)70))))) >> (((/* implicit */int) (_Bool)1)))) ^ (max(((-(((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) ((unsigned char) (signed char)-113)))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_4 [i_0])));
            arr_9 [i_2] [i_2] [i_0] = ((/* implicit */signed char) (+(arr_0 [i_2] [i_0])));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) arr_7 [i_0 - 2] [i_0 + 1]);
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_0] [i_0]))));
            arr_13 [i_0] = ((((-12) + (2147483647))) >> (((((((/* implicit */_Bool) (short)30403)) ? (-8061579721626847412LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))))) + (8061579721626847432LL))));
            arr_14 [i_0] [i_0] = (~(arr_4 [i_0 + 2]));
        }
        for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_4] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)859))))))) ? (-152695643) : (((((/* implicit */int) (signed char)-111)) | (((/* implicit */int) (unsigned char)1))))));
            /* LoopSeq 3 */
            for (unsigned short i_5 = 4; i_5 < 20; i_5 += 1) 
            {
                arr_23 [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]);
                /* LoopSeq 4 */
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) (unsigned short)45271);
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_4 + 1] [i_5 - 1])) ? (6950010124696089782ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 2])))));
                        var_20 = ((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_0] [i_5]);
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_4] [i_4] [i_4])) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)19)))))));
                        arr_32 [i_5] [i_6] = ((/* implicit */short) (_Bool)0);
                    }
                    for (unsigned char i_9 = 4; i_9 < 23; i_9 += 2) 
                    {
                        arr_35 [i_0] [i_5] [i_0] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)48)) >> (((((((/* implicit */_Bool) arr_6 [i_0] [i_4] [i_4])) ? (((((/* implicit */_Bool) 3893974193U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_9])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0]))))) - (2741960284062162466ULL)))));
                        arr_36 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)15660)), (13872418912694127879ULL)));
                        arr_37 [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -152695647)) ? (5600815016386367695ULL) : (18125308757813106889ULL)))) ? (((/* implicit */int) (short)-12130)) : (((/* implicit */int) (unsigned short)65527))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6950010124696089783ULL)) ? (((/* implicit */unsigned long long int) -12)) : (11496733949013461834ULL)))) ? (max((arr_21 [i_5] [i_6] [i_5]), (((/* implicit */long long int) 2461304566U)))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) 4194288))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)60)) + (((/* implicit */int) (unsigned short)36906))));
                    arr_38 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = 13557302208403917259ULL;
                }
                for (unsigned long long int i_10 = 4; i_10 < 22; i_10 += 2) 
                {
                    arr_42 [i_0] [i_0] [i_4] [i_0] [i_4] [i_10] = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -720751254)) ? (((/* implicit */int) (short)-9833)) : (((/* implicit */int) (unsigned short)39962))))), (((((/* implicit */_Bool) (unsigned short)36906)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2000870195U))))) >> (((((((((992415487) / (((/* implicit */int) (signed char)-106)))) + (2147483647))) << ((((+(11496733949013461832ULL))) - (11496733949013461832ULL))))) - (2138121210)))));
                    var_22 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (signed char)-127)) + (((/* implicit */int) arr_7 [i_0] [i_0])))))), ((-(((35993612646875136ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_10])))))))));
                    /* LoopSeq 1 */
                    for (short i_11 = 1; i_11 < 23; i_11 += 1) 
                    {
                        var_23 ^= ((/* implicit */_Bool) (signed char)54);
                        var_24 = ((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-94))));
                    }
                    arr_46 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */int) ((((arr_30 [i_10 - 4] [i_10 + 2] [i_10 - 4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5 + 4] [i_5 - 1] [i_5 + 1] [i_5 + 4]))))) >> (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), (arr_6 [i_0] [i_0] [i_10])))) >= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned short)36906)))))))));
                    arr_47 [i_4] = ((/* implicit */signed char) (_Bool)1);
                }
                /* vectorizable */
                for (unsigned char i_12 = 3; i_12 < 23; i_12 += 2) 
                {
                    var_26 = ((arr_24 [i_0] [i_0] [i_4 - 1] [i_12 - 2]) ? (((/* implicit */long long int) 992415458)) : (4371758412125081494LL));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2442446744U)) ? (268435456) : (-644835166)));
                }
                for (unsigned int i_13 = 1; i_13 < 22; i_13 += 2) 
                {
                    var_28 = ((/* implicit */int) arr_0 [i_13] [i_0]);
                    arr_52 [i_13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1662413281)) && (((/* implicit */_Bool) (short)30645)))) ? (((/* implicit */int) (short)-372)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)30645)) : (arr_1 [i_0])))));
                }
            }
            /* vectorizable */
            for (unsigned short i_14 = 1; i_14 < 23; i_14 += 3) 
            {
                var_29 *= ((/* implicit */signed char) (~(arr_0 [i_4 - 1] [i_4 - 1])));
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_59 [i_14] [i_4] [i_14] [i_14] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3432002373908980935LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)69)) ? (1852520552U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28620))))))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-111)) / (-2048544840)))) ? (((unsigned int) 2442446749U)) : (2937030468U)));
                    var_31 = ((/* implicit */long long int) ((arr_53 [i_0] [i_4 - 1] [i_0 + 2] [i_14]) != (33423360LL)));
                    arr_60 [i_0] [i_14] [i_14] [i_15] = (unsigned short)37306;
                }
                arr_61 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) arr_44 [i_0] [i_0] [i_4 - 1] [i_4] [i_0] [i_4])) : (((/* implicit */int) (unsigned char)10))));
                arr_62 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */short) ((arr_25 [i_0] [i_0] [i_4 + 1] [i_14]) ^ (arr_1 [i_4 - 1])));
            }
            /* vectorizable */
            for (short i_16 = 1; i_16 < 20; i_16 += 1) 
            {
                var_32 ^= ((/* implicit */long long int) (short)-11986);
                /* LoopSeq 2 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    var_33 = ((long long int) 4682081834962702210LL);
                    arr_70 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1662413281)) ? (arr_53 [i_17 - 1] [i_16 + 3] [i_0 - 4] [i_0 - 4]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
                    var_34 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (((/* implicit */int) (short)-12702)) : (((/* implicit */int) (signed char)-69))))));
                    arr_71 [i_0] [i_0] [i_0] [i_16] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -424473989)) ? (((/* implicit */int) arr_7 [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))))));
                }
                for (short i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    arr_76 [i_0] [i_0] [i_16] [i_16] [i_16] = ((/* implicit */long long int) 171019868);
                    var_35 = arr_26 [i_18] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                }
                var_36 = ((arr_57 [i_4 + 1] [i_16 + 2] [i_4 + 1] [i_0 + 3]) != (((/* implicit */unsigned long long int) arr_65 [i_4 + 2])));
                arr_77 [i_16] [i_16] [i_16] = ((/* implicit */short) arr_16 [i_0] [i_0]);
            }
            var_37 ^= (signed char)-43;
        }
        arr_78 [i_0] = ((/* implicit */long long int) (short)11742);
        arr_79 [i_0] [i_0] = ((/* implicit */short) 171019868);
        arr_80 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3432002373908980921LL)))) ? (((/* implicit */int) arr_55 [(short)0])) : (-1103904694)));
    }
    var_38 = ((/* implicit */long long int) ((unsigned char) var_13));
}
