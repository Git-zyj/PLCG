/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14157
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_13))));
            var_16 &= ((/* implicit */short) ((arr_2 [i_0]) >= (arr_3 [i_0] [i_1])));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) (short)-32761));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */int) (short)32767)) % (((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) % (((/* implicit */int) var_14))))));
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_13 [i_2] [i_3 + 1] [i_2] [i_1] [i_2] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])))));
                            var_17 = ((/* implicit */short) ((unsigned long long int) (short)32761));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
                        {
                            var_18 = arr_12 [i_0] [i_2] [i_1] [i_2] [i_3 + 1] [i_5];
                            arr_16 [i_1] [i_2] [i_2] [i_2] [i_0] = var_13;
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_6 + 1] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            arr_20 [i_1] &= ((/* implicit */_Bool) arr_0 [i_0]);
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (18446744073709551615ULL)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9086)) ? (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_1] [i_1]) : (6710354658080348455ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3 + 1]))))))));
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)270))) - (arr_18 [i_0] [i_2] [i_1] [i_2])));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 3; i_9 < 12; i_9 += 3) 
                {
                    {
                        arr_31 [i_0] [i_1] [i_8] [i_9] [i_1] = var_0;
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_8] [i_8 - 1] [i_0] [i_9 - 3]))));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) arr_7 [i_9] [i_8 - 1] [i_1] [i_0])) <= (((/* implicit */int) arr_7 [i_9 + 2] [i_8 - 1] [i_1] [i_0])))))));
                        arr_32 [i_0] [i_1] [i_8] [i_9] [i_9] = ((short) 13754532216336695185ULL);
                    }
                } 
            } 
        }
        for (short i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    {
                        arr_42 [i_12] [i_11] [i_0] [i_0] [i_0] = arr_25 [i_0] [i_10] [i_11] [i_10];
                        arr_43 [i_10] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)16320))));
                        arr_44 [i_0] [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) 9223371899415822336ULL);
                    }
                } 
            } 
            arr_45 [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4173)))));
            arr_46 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0]))) & ((-(arr_40 [i_10] [i_10] [i_0] [i_0])))));
        }
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)4088)))))))))));
    }
    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                for (short i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    {
                        arr_58 [i_13] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4692211857372856453ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) >= (arr_53 [i_13] [i_13] [i_13])))) & (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)22632))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) var_13);
                            arr_62 [i_15] [i_14] [i_14] &= arr_52 [i_16] [i_15] [i_14];
                            arr_63 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_14] [i_14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_56 [i_14] [i_15]))));
                            var_27 = ((/* implicit */unsigned short) ((short) arr_52 [i_13] [i_15] [i_16]));
                            var_28 = ((/* implicit */_Bool) ((unsigned short) arr_60 [i_13] [i_15] [i_17]));
                        }
                        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 4) 
                        {
                            arr_66 [i_13] [i_14] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) var_6);
                            arr_67 [i_13] [i_14] [i_15] [i_15] [i_18] [i_16] [i_14] = ((/* implicit */unsigned short) (short)8);
                        }
                    }
                } 
            } 
        } 
        arr_68 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) & (((/* implicit */int) (short)10644))));
        arr_69 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_13] [i_13] [i_13])) % (((((/* implicit */int) (short)4100)) / (((/* implicit */int) (short)-4088))))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (short)4096)), (((unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))));
        var_30 = ((/* implicit */_Bool) var_12);
        arr_72 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)18)) >> (((((/* implicit */int) var_2)) + (11106)))));
        var_31 = ((/* implicit */_Bool) var_10);
    }
    for (short i_20 = 3; i_20 < 10; i_20 += 3) 
    {
        var_32 = ((/* implicit */unsigned int) (short)8382);
        arr_76 [i_20] [i_20 + 3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)32760)), ((unsigned short)51381))))) / ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27084))) : (6710354658080348450ULL)))));
        var_33 = ((/* implicit */short) ((arr_18 [i_20 - 1] [i_20] [i_20] [i_20 - 1]) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)1))))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_21 = 0; i_21 < 11; i_21 += 1) 
    {
        for (short i_22 = 0; i_22 < 11; i_22 += 1) 
        {
            {
                arr_82 [i_21] [i_22] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)11798))));
                var_34 &= (-((-(arr_60 [i_21] [i_22] [i_21]))));
                arr_83 [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) min((max((arr_18 [i_22] [i_21] [i_21] [i_21]), (((/* implicit */unsigned int) ((unsigned short) arr_48 [i_21] [i_22]))))), (((/* implicit */unsigned int) arr_22 [i_21] [i_21] [i_21] [i_21]))));
            }
        } 
    } 
    var_35 = var_12;
}
