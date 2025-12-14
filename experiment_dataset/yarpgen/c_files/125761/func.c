/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125761
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_2);
        arr_4 [(_Bool)1] = ((/* implicit */unsigned int) var_1);
        arr_5 [i_0] = (_Bool)1;
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned int) ((short) arr_8 [i_1] [i_2]));
            var_10 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [(unsigned short)5])) >> (((arr_2 [i_2]) + (6404729331366104396LL)))));
            var_11 = ((/* implicit */_Bool) arr_2 [18ULL]);
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                for (int i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            arr_21 [12ULL] [i_1] [i_1] = ((/* implicit */short) ((7043724890925466956LL) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            arr_22 [11ULL] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((arr_2 [i_3 - 1]) + (9223372036854775807LL))) >> (((((long long int) var_7)) - (2752289784LL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1]))) + (arr_7 [i_1])));
            arr_26 [i_6] = ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_6));
        }
        arr_27 [i_1] [14ULL] = ((/* implicit */long long int) ((unsigned int) var_5));
        var_13 = ((/* implicit */signed char) -7043724890925466971LL);
        /* LoopSeq 4 */
        for (short i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            arr_30 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */_Bool) var_6)) ? (20ULL) : (((/* implicit */unsigned long long int) arr_7 [i_1]))))));
            var_14 = ((/* implicit */short) var_5);
            /* LoopNest 3 */
            for (long long int i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        {
                            arr_39 [i_1] [i_7] [(short)12] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((1800948061U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10 - 1] [i_8 + 2] [i_8 + 2] [i_9] [(unsigned short)11])))));
                            arr_40 [i_1] [i_7] [(signed char)16] = ((/* implicit */signed char) var_0);
                            arr_41 [i_1] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */unsigned long long int) (-(352999502U)));
                        }
                    } 
                } 
            } 
        }
        for (int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
        {
            arr_44 [14ULL] [i_11] [14ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_1] [i_11])) ? (((/* implicit */unsigned long long int) 1970324836974592LL)) : (arr_20 [i_1] [i_1])));
            arr_45 [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */long long int) 4099136708U)) ^ (7043724890925466970LL)));
            arr_46 [i_11] [i_11] = ((/* implicit */_Bool) ((int) arr_36 [i_11] [i_11] [i_11] [i_1] [18U]));
            arr_47 [i_11] [i_1] = arr_17 [19ULL] [i_11] [i_1] [i_1] [19ULL];
            /* LoopNest 2 */
            for (unsigned int i_12 = 3; i_12 < 20; i_12 += 3) 
            {
                for (long long int i_13 = 2; i_13 < 18; i_13 += 1) 
                {
                    {
                        arr_54 [i_12] [i_12 - 2] [i_11] [i_12] = ((/* implicit */unsigned short) var_7);
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_12 - 2] [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)2016))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1055061939)) || (((/* implicit */_Bool) arr_49 [i_12]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 1; i_15 < 21; i_15 += 4) 
                        {
                            arr_59 [i_12] = ((/* implicit */short) ((unsigned short) (unsigned short)2044));
                            arr_60 [i_1] [i_12] [i_12] [i_12] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_38 [i_1] [i_11] [i_12 - 2] [i_12 - 2] [i_13 + 2] [i_15 + 1] [i_12 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) var_7)) : (var_9)));
                        }
                        arr_61 [i_12] = ((unsigned long long int) 4294967295U);
                        arr_62 [i_13] [i_13 + 1] [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_8))))) * (var_9)));
                    }
                } 
            } 
        }
        for (int i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
        {
            arr_65 [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) arr_7 [i_1]));
            arr_66 [i_1] = ((/* implicit */signed char) var_3);
            arr_67 [i_1] [i_16] [i_16] = ((/* implicit */int) ((unsigned int) var_9));
            var_17 = ((/* implicit */int) 2673081719U);
        }
        for (unsigned long long int i_17 = 3; i_17 < 21; i_17 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_18 = 3; i_18 < 20; i_18 += 4) 
            {
                for (short i_19 = 2; i_19 < 20; i_19 += 1) 
                {
                    {
                        arr_76 [i_1] [i_17] [i_18] [i_1] [12ULL] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39006))) == (2959408252U)));
                        var_18 = ((/* implicit */unsigned int) var_8);
                        arr_77 [(signed char)9] [i_17] = ((/* implicit */long long int) ((-7043724890925466956LL) <= (((/* implicit */long long int) 7U))));
                        arr_78 [i_1] [i_1] [i_18 + 2] [i_18 + 2] [i_1] [i_17] = ((/* implicit */_Bool) 6677896678211141830LL);
                    }
                } 
            } 
            arr_79 [i_1] [i_17 - 2] [i_17] = ((/* implicit */long long int) arr_17 [i_1] [10U] [i_1] [i_17] [i_1]);
        }
    }
    var_19 = ((/* implicit */int) var_5);
    var_20 = min((var_5), (var_5));
}
