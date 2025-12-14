/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151790
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
    var_20 = (-(((/* implicit */int) var_8)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) (!((_Bool)1)));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (short)5850))));
    }
    for (short i_1 = 3; i_1 < 17; i_1 += 3) 
    {
        var_23 = ((/* implicit */long long int) arr_2 [i_1 - 2]);
        var_24 = ((/* implicit */int) var_16);
        var_25 ^= ((/* implicit */short) arr_1 [i_1] [i_1 - 2]);
        /* LoopSeq 3 */
        for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                arr_11 [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) (short)-29459)) + (2147483647))) >> ((((-(((/* implicit */int) (unsigned char)255)))) + (278))))));
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_0 [i_2 - 1] [i_3])))))))));
                var_27 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_1]) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) < (0U))))))) && (((/* implicit */_Bool) ((unsigned char) arr_5 [i_2] [i_2 - 1] [i_1 - 1])))));
            }
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                var_29 = (-(12866880924972851795ULL));
                var_30 = ((/* implicit */long long int) min((max((-1602832698), (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) var_17))));
                arr_14 [i_1] [i_2 + 1] = ((/* implicit */signed char) arr_1 [i_2 - 1] [i_4]);
            }
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((unsigned short) (unsigned short)21113)))));
        }
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_32 ^= ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (arr_3 [i_5]))), (((/* implicit */unsigned int) min(((unsigned char)18), ((unsigned char)20))))))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    var_33 = ((/* implicit */short) arr_12 [i_6] [i_5] [i_6] [i_7 + 2]);
                    var_34 = ((/* implicit */int) arr_21 [i_7 + 1] [i_7] [i_6] [i_5] [i_1 - 3]);
                }
                for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    var_35 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_8] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-5693792769088497987LL)))))) ? (((int) 3634855403953044359LL)) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))));
                    arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 - 3] [i_1 + 2] [i_1 + 1]))))) ? (((/* implicit */int) ((unsigned char) -6163044756008069818LL))) : (min((((/* implicit */int) (short)-26586)), (-1602832698)))));
                    var_36 = var_5;
                    var_37 -= ((/* implicit */_Bool) ((1152921504606846975ULL) >> (((((/* implicit */int) (unsigned char)235)) - (230)))));
                    var_38 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)7)))) ? (((((/* implicit */int) arr_6 [i_6] [i_6] [i_6])) & (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_19)))))));
                }
                var_39 = ((/* implicit */unsigned int) (unsigned short)7);
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_40 = max((((((/* implicit */int) ((unsigned char) (_Bool)1))) ^ (((/* implicit */int) ((5579863148736699820ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))), ((-(((/* implicit */int) min((arr_23 [i_1] [i_1] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned short) arr_6 [i_1] [i_1 + 2] [i_1 - 1]))))))));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 3; i_11 < 16; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        arr_36 [i_1] [i_9] [i_10] [i_10] [i_11] [i_9] = ((/* implicit */signed char) max(((+((-(((/* implicit */int) (unsigned short)64214)))))), (((((/* implicit */int) arr_23 [i_1] [(short)5] [i_1] [i_1 + 1] [i_1] [i_1])) & (((/* implicit */int) arr_23 [i_1 - 3] [i_9] [i_10] [i_10] [i_11 - 3] [i_12]))))));
                        arr_37 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) min((((unsigned long long int) (signed char)99)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_35 [i_1 + 1] [i_1] [i_1] [i_1 - 3] [i_1 - 2] [i_1 + 2] [i_10])) : (((/* implicit */int) var_0)))))));
                        var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
                    }
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) max((((((arr_34 [i_1] [i_1 + 2] [i_9] [i_9] [i_1] [i_11]) ? (arr_27 [i_1] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))) * ((-(var_10))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(0)))), ((+(arr_1 [i_1 - 2] [i_1 - 2])))))))))));
                    arr_38 [i_1 - 2] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) arr_0 [i_1] [i_9]);
                    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) (+(var_10))))));
                }
                for (signed char i_13 = 3; i_13 < 16; i_13 += 2) /* same iter space */
                {
                    var_44 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (unsigned short)1322))))), (min((arr_27 [i_1 - 2] [i_13 + 2]), (((/* implicit */unsigned long long int) arr_7 [i_1 - 2]))))));
                    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((int) max((((/* implicit */unsigned int) var_13)), (arr_32 [i_13] [i_13 + 1] [i_13 + 1] [i_13])))))));
                    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_1 - 2] [(signed char)0] [i_10] [i_13])) % ((((!(((/* implicit */_Bool) var_17)))) ? (arr_2 [i_9]) : (((/* implicit */int) arr_4 [i_1 - 3])))))))));
                    arr_41 [i_9] [i_9] [i_10] [i_9] [(short)5] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_27 [i_9] [i_10]))) ? (((/* implicit */int) arr_16 [i_1] [i_1 - 1])) : ((~(((/* implicit */int) (_Bool)0)))))))));
                    arr_42 [i_10] [i_1] [i_9] [i_9] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_8 [i_10] [i_9] [i_1 - 2] [i_10]))))))));
                }
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_9])) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)64226)) != (((/* implicit */int) (unsigned char)241)))))));
            }
            for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
            {
                arr_47 [i_14] = ((/* implicit */signed char) 1342158206);
                var_48 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)13)) < (1056768104)));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                var_49 = ((/* implicit */short) var_17);
                arr_52 [i_1] [i_1] [i_15] = ((/* implicit */_Bool) (+((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_44 [i_1] [i_15] [i_1])), ((unsigned short)50069))))))));
                var_50 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) var_17)), (arr_45 [i_15] [i_9] [i_1 + 1])))));
                arr_53 [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)4))));
                var_51 *= ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_1 - 3] [i_9] [(unsigned short)16]))));
            }
            var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) 12866880924972851793ULL))));
        }
        var_53 = ((/* implicit */short) arr_29 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2]);
    }
    var_54 = ((/* implicit */_Bool) max((var_54), (((((/* implicit */int) (unsigned short)20999)) < (((/* implicit */int) (short)9))))));
}
