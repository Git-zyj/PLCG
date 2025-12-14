/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182914
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)0), ((signed char)17))))) ^ (-554507340199001884LL)))) ? (552219441U) : (0U)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) (_Bool)1);
            var_20 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32767))))))));
            arr_5 [i_0] [i_1] [(unsigned char)17] &= ((/* implicit */unsigned int) (_Bool)1);
        }
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((1695048863782941526LL) >= (((/* implicit */long long int) arr_8 [i_2]))))) <= ((-(((/* implicit */int) ((unsigned char) arr_1 [i_2] [10ULL])))))));
        var_21 = ((/* implicit */unsigned short) (~(arr_1 [i_2] [i_2])));
        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) 382111880253286615ULL)))));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] = min((14292397443786696156ULL), (((/* implicit */unsigned long long int) 5469958517375324217LL)));
        var_23 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) arr_7 [i_3])))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)176));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    arr_23 [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((arr_21 [i_4 + 1] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17)))));
                    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_4 - 1] [13LL] [i_4 + 1])) ? (((((/* implicit */int) (unsigned char)176)) * (((/* implicit */int) (unsigned short)63488)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13667))) < (arr_15 [i_6]))))));
                    arr_24 [i_4] [i_4] [i_6] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_4 - 1] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((long long int) 3549182746099131655ULL))) : (arr_18 [i_4] [i_4 - 1] [i_5])));
                    var_25 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) -5469958517375324220LL))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_14 [7LL])))));
                var_27 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [(unsigned char)13]))));
                var_28 = ((/* implicit */long long int) 4154346629922855450ULL);
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_37 [i_4] [i_7] [i_7] [12] = ((/* implicit */long long int) ((unsigned int) 14292397443786696165ULL));
                            arr_38 [(signed char)14] [i_4] [i_4] [i_7] [14ULL] [i_9] [i_10] = ((/* implicit */unsigned long long int) 1254055315U);
                            arr_39 [i_7] [i_9] [(short)20] [(unsigned char)5] [i_7] [i_4] [i_7] = ((/* implicit */long long int) (short)7168);
                            var_29 = ((/* implicit */_Bool) ((short) ((unsigned long long int) 4154346629922855428ULL)));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 4) 
            {
                for (unsigned short i_12 = 3; i_12 < 20; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)63488)))));
                            var_31 = 5421261871552983502ULL;
                            arr_49 [i_7] [i_7] [i_11 - 1] [i_12] [i_13] = ((/* implicit */_Bool) ((long long int) ((signed char) arr_36 [i_7] [i_7] [i_7])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned char) 4154346629922855450ULL);
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                var_33 -= ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) * (5029737626386633250ULL)))));
                arr_56 [5U] [11U] [i_14] [i_15] = ((/* implicit */int) (-(4277254047803160445LL)));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 1; i_16 < 20; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        {
                            arr_63 [i_4] [i_4] [i_15] [i_16] [i_15] = ((/* implicit */long long int) -1426627770);
                            var_34 = ((/* implicit */unsigned short) arr_42 [i_15] [i_15]);
                            arr_64 [i_16] = ((/* implicit */unsigned long long int) (-(arr_29 [i_14] [i_14 - 1] [i_16 + 1] [21])));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_18 = 2; i_18 < 20; i_18 += 2) /* same iter space */
        {
            arr_67 [i_4 + 2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_60 [15U] [15U] [17] [i_4] [i_4])) ? (-1426627770) : (((/* implicit */int) arr_65 [i_4] [19LL] [i_4]))))));
            var_35 &= ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_48 [(unsigned char)1] [i_18] [i_18] [11U] [21ULL])))));
            /* LoopSeq 1 */
            for (unsigned char i_19 = 2; i_19 < 20; i_19 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 1; i_20 < 21; i_20 += 1) 
                {
                    var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)43))));
                    var_37 = arr_25 [i_19] [i_18] [i_19];
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 213467824U)) | (arr_18 [i_4] [i_4] [(unsigned short)17]))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (unsigned char)111))))))))));
                }
                /* LoopSeq 3 */
                for (int i_21 = 3; i_21 < 20; i_21 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_22 = 0; i_22 < 22; i_22 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-28882)))) > (((unsigned long long int) arr_50 [i_4])))))));
                        arr_78 [i_4] [i_18 - 1] [i_18 - 1] [(unsigned char)18] [i_22] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) (unsigned short)65522)));
                        var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_15 [i_21]))))));
                        var_41 = ((/* implicit */unsigned int) arr_73 [i_21] [i_21] [i_21] [i_21 + 2]);
                    }
                    for (int i_23 = 0; i_23 < 22; i_23 += 3) /* same iter space */
                    {
                        arr_81 [i_4] [(unsigned char)19] [i_19] [(signed char)12] [(unsigned char)19] [20LL] [i_4] = ((/* implicit */signed char) (-(213467839U)));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (-1105907599) : (((/* implicit */int) (unsigned char)135))))) || (((((/* implicit */_Bool) 14545554589900594572ULL)) && (((/* implicit */_Bool) 17680240543495175124ULL))))));
                    }
                    var_43 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (short)32766)))));
                    var_44 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1864031454)) ? (1558927111U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14)))))));
                }
                for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_25 = 4; i_25 < 18; i_25 += 1) 
                    {
                        arr_88 [i_24] [15] [9ULL] [(short)19] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)101))));
                        arr_89 [15ULL] [(_Bool)1] [i_24] [12ULL] [i_25] = ((/* implicit */short) ((((/* implicit */long long int) ((2700460107U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34)))))) | (-3792016929631098931LL)));
                    }
                    for (signed char i_26 = 0; i_26 < 22; i_26 += 4) 
                    {
                        var_45 = (unsigned short)35175;
                        arr_94 [(short)15] [i_24] [i_24] [i_19] [i_19] [i_24] [i_4] = ((unsigned long long int) ((short) (unsigned short)11059));
                    }
                    var_46 -= ((unsigned long long int) arr_20 [i_4] [i_18 - 2] [i_4 + 1]);
                }
                for (unsigned long long int i_27 = 4; i_27 < 19; i_27 += 1) 
                {
                    arr_98 [i_4] [(_Bool)1] [i_4 + 1] [(_Bool)1] [i_4] = ((/* implicit */short) ((unsigned short) 18446744073709551607ULL));
                    var_47 *= ((/* implicit */unsigned short) ((unsigned long long int) arr_48 [(_Bool)1] [i_4 - 1] [i_18 + 2] [i_19 + 2] [i_27]));
                    var_48 = ((/* implicit */unsigned long long int) max((var_48), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) * (arr_21 [i_18 - 1] [i_19 + 1])))));
                    var_49 = ((/* implicit */unsigned short) 562941363486720ULL);
                    arr_99 [i_4] [i_18] [20U] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3822409806U)) && (((/* implicit */_Bool) 3U))));
                }
            }
            arr_100 [i_4] [15] [(unsigned char)4] &= arr_80 [(short)16] [i_4] [i_4 - 1] [i_4] [(short)0];
        }
    }
    var_50 = ((/* implicit */unsigned char) max((var_11), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1843236418)))) / (max((var_11), (((/* implicit */unsigned long long int) (unsigned char)127))))))));
}
