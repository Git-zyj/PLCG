/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175063
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 = (((((-(((/* implicit */int) (unsigned short)29469)))) + (2147483647))) << (((((((/* implicit */_Bool) var_8)) ? (4135672309U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) - (4135672309U))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) arr_1 [(short)1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_15 = ((/* implicit */short) -1770575597);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3])) | (((((/* implicit */int) (unsigned char)207)) | (((/* implicit */int) (unsigned short)26734))))))) ? (arr_9 [i_2 + 1] [i_2 - 1] [16ULL]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_9 [i_1] [i_2] [4ULL]))))))));
                    var_18 -= ((/* implicit */unsigned char) (!((((+(((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [i_2])))) <= (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1]))))));
                    arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)26734))))) : (((unsigned int) arr_9 [i_1] [(unsigned short)15] [i_2])))) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */signed char) min(((+((~(((/* implicit */int) (short)-19538)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11338)))))));
        var_19 ^= ((/* implicit */unsigned short) (~((~(-4365271852492308662LL)))));
    }
    for (long long int i_4 = 3; i_4 < 11; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4])))))) ? (arr_14 [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4 + 1]))))), (((/* implicit */unsigned long long int) ((arr_8 [8ULL]) % (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_7 [10ULL] [i_4] [10ULL])))))))));
        arr_16 [i_4 + 3] [i_4 + 3] = ((/* implicit */short) var_3);
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (min(((+(((/* implicit */int) (unsigned char)43)))), (((/* implicit */int) arr_4 [i_4])))) : (((/* implicit */int) arr_6 [i_4] [i_4 - 1] [i_4])))))));
        arr_17 [i_4 + 3] = min(((+(((/* implicit */int) arr_10 [5ULL] [i_4 + 2])))), (max((arr_8 [0ULL]), (((/* implicit */int) arr_3 [i_4 + 1] [(short)22])))));
    }
    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 2) 
        {
            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)26021))));
            var_22 = min((((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) + (159294961U))), (((/* implicit */unsigned int) ((_Bool) (unsigned short)65535))));
            /* LoopSeq 3 */
            for (unsigned short i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_9 [i_6] [i_6] [i_6])));
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        {
                            var_24 |= ((/* implicit */unsigned char) ((_Bool) min((arr_29 [i_5] [(_Bool)0] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_7 - 1] [i_9]), (arr_29 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_7 - 1] [i_5 - 1]))));
                            arr_30 [i_6] [21U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_6] [13LL] [i_6])) ? ((-(var_3))) : (((/* implicit */long long int) min((((/* implicit */int) arr_20 [i_5 - 1])), ((+(((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                var_25 |= ((/* implicit */int) arr_10 [i_5 - 1] [(short)9]);
            }
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */int) arr_6 [(short)13] [i_6] [i_10]);
                    arr_37 [i_5] [i_6] [i_5] [i_6] [i_10] [i_5 + 1] |= ((/* implicit */unsigned short) (-((-((+(((/* implicit */int) var_10))))))));
                }
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_5 - 1] [i_5 - 1])) & (((/* implicit */int) arr_5 [i_5 - 1]))))) ^ ((~(arr_33 [i_5 - 1] [i_6] [i_6 - 3] [i_10]))))))));
            }
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6])))))));
                var_29 = ((/* implicit */unsigned int) arr_5 [i_6 - 1]);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 4) 
            {
                arr_43 [i_6] [i_6] = ((/* implicit */unsigned int) arr_5 [i_5]);
                var_30 = ((/* implicit */_Bool) (~(((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (unsigned char)32))))) << (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)64982))))))));
            }
            for (int i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                var_31 = ((/* implicit */long long int) max(((-(((/* implicit */int) min((arr_20 [i_5]), (((/* implicit */short) arr_35 [4ULL] [i_6] [i_14] [i_14] [i_14]))))))), ((-((-(((/* implicit */int) (_Bool)1))))))));
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_45 [i_6] [i_6] [i_14]))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(unsigned short)4])))))) ? (((/* implicit */int) ((_Bool) arr_39 [i_6] [i_6] [i_6] [i_6 - 3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5 - 1]))))))))));
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((short) (short)-26021)))));
                        var_34 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (signed char)89)))));
                        var_35 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) arr_36 [i_6] [i_14] [i_16] [0])))))));
                        arr_53 [18ULL] [i_6] [i_14] [i_6] [i_16] = ((/* implicit */long long int) ((max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) max((arr_32 [i_5] [i_6] [i_6] [i_5]), (((/* implicit */unsigned short) (_Bool)1))))))) * (((/* implicit */int) max((arr_46 [i_5] [i_5 - 1] [i_5 - 1] [i_6 - 1]), (arr_46 [i_5 - 1] [i_5] [i_5 + 1] [i_6 - 3]))))));
                        arr_54 [i_6] [i_15] [i_15] [i_14] [i_6] [i_6] = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) arr_32 [i_5] [i_6] [i_14] [19LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_23 [i_6] [i_14] [(unsigned short)14]))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)56)))))));
                    }
                    var_36 += ((/* implicit */short) arr_42 [(signed char)17] [i_5 - 1] [i_5 - 1]);
                }
                arr_55 [i_5] [(short)10] [i_6] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)14)) || (((/* implicit */_Bool) (signed char)-117)))));
            }
        }
        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((var_3) - (((/* implicit */long long int) (((+(((/* implicit */int) (short)26021)))) + ((-(((/* implicit */int) var_5))))))))))));
        /* LoopNest 3 */
        for (unsigned short i_17 = 1; i_17 < 23; i_17 += 4) 
        {
            for (signed char i_18 = 1; i_18 < 21; i_18 += 3) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_62 [i_17] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) max((1647387726), (arr_27 [i_5 + 1] [i_5 + 1] [i_17] [i_19]))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_9 [i_5] [i_17 + 1] [i_17])) && (((/* implicit */_Bool) arr_31 [i_5] [i_17]))))))) : (arr_48 [i_17])));
                        arr_63 [i_5 - 1] [i_17] [i_18 + 3] [i_19] [i_19] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) < (((max((arr_35 [i_5 + 1] [i_17] [i_17] [i_19] [i_18 + 2]), (var_12))) ? (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_5 - 1] [i_17] [i_17] [i_17]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_52 [i_5] [i_5] [i_18] [i_5] [23ULL] [i_5] [i_5])) : (var_9))))))));
                    }
                } 
            } 
        } 
        arr_64 [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
    }
    var_38 *= ((/* implicit */unsigned short) var_9);
}
