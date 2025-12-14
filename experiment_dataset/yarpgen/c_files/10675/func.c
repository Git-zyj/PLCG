/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10675
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) max(((unsigned short)18549), (((/* implicit */unsigned short) var_2)))))))) ? ((((-(var_13))) - (((((/* implicit */long long int) var_1)) ^ (var_13))))) : (((/* implicit */long long int) var_1)));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (unsigned char)209)) - (208))))));
        var_20 *= ((/* implicit */signed char) 4060963032U);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18011784925997057605ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16161))));
        /* LoopSeq 2 */
        for (signed char i_2 = 4; i_2 < 12; i_2 += 2) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)225);
            var_21 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */_Bool) 15U);
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_22 [i_1] [i_6] [i_1] [i_6] [i_6] [i_3] = ((/* implicit */long long int) ((19U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) - (((/* implicit */long long int) arr_13 [i_6] [i_1])))) <= (((/* implicit */long long int) -1439064621))))))));
                            var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [(_Bool)1])) ? (((-5170005742478423576LL) % (((/* implicit */long long int) ((/* implicit */int) (short)6544))))) : (((/* implicit */long long int) ((((var_6) + (2147483647))) >> (((((/* implicit */int) (signed char)94)) - (85)))))))), (((/* implicit */long long int) (-(((((/* implicit */int) arr_8 [i_3] [i_5] [i_6])) >> (((((/* implicit */int) var_12)) - (3575))))))))));
                            arr_23 [i_6] [i_5] [i_5] [i_4] [i_5] [i_3] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_14)), (18011784925997057605ULL))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) arr_19 [i_1] [i_3] [i_4] [i_5] [i_6])))))))) ? (((/* implicit */unsigned long long int) min(((+(2742565734U))), (((/* implicit */unsigned int) arr_4 [i_5]))))) : (max(((((_Bool)1) ? (arr_12 [i_3] [i_4] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) arr_10 [i_6] [i_5] [9U]))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_28 [i_1] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) -227145961)), (arr_7 [i_1] [i_7]))), (((/* implicit */unsigned long long int) var_2))));
            arr_29 [i_1] [i_1] = ((/* implicit */int) (-((~(arr_14 [i_1] [i_7])))));
        }
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_32 [i_8])) + (2147483647))) >> (((((/* implicit */int) arr_32 [i_8])) + (18076)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */int) arr_32 [i_8])) : (1301230838)))) : (3336989513159353090LL)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    arr_37 [i_1] = ((/* implicit */long long int) ((arr_16 [i_1] [i_10] [i_10 + 3] [i_10 + 3]) <= (arr_16 [i_1] [i_1] [i_10 + 3] [i_10 + 3])));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) ((arr_14 [i_1] [i_10 - 1]) ^ (arr_14 [i_1] [i_10 + 3])));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_27 [(unsigned short)2]))));
                    }
                }
                for (short i_12 = 2; i_12 < 11; i_12 += 2) /* same iter space */
                {
                    var_27 = (i_1 % 2 == 0) ? (((/* implicit */short) ((arr_16 [i_1] [i_12 + 2] [i_12 - 1] [i_12 - 1]) + (arr_16 [i_1] [i_12 + 2] [i_12 - 1] [i_12 - 1])))) : (((/* implicit */short) ((arr_16 [i_1] [i_12 + 2] [i_12 - 1] [i_12 - 1]) - (arr_16 [i_1] [i_12 + 2] [i_12 - 1] [i_12 - 1]))));
                    arr_42 [i_1] [i_9] [i_8] [i_8] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_12] [i_12 + 2] [i_1] [i_9] [i_8]))));
                    var_28 += ((/* implicit */unsigned int) arr_12 [i_1] [i_9] [i_9]);
                }
                for (short i_13 = 2; i_13 < 11; i_13 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) 17792978652469720048ULL))));
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        var_30 += ((/* implicit */unsigned long long int) 130816);
                        var_31 = ((/* implicit */long long int) arr_15 [i_1] [i_8] [i_1] [i_13 + 2] [i_14]);
                        var_32 = ((/* implicit */_Bool) ((var_7) ? (arr_44 [i_13 - 2] [i_1] [i_13 + 1] [i_13] [i_1] [i_8]) : (((/* implicit */long long int) ((arr_38 [i_1] [i_1] [i_9]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1]))))))));
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_32 [i_14])) ? (var_1) : (((/* implicit */int) arr_19 [i_1] [i_8] [i_9] [i_8] [(unsigned short)7])))) ^ (((/* implicit */int) arr_46 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13 - 1] [i_13 + 2])))))));
                    }
                    arr_49 [i_1] = (~(((/* implicit */int) (_Bool)1)));
                    var_34 = ((/* implicit */_Bool) var_6);
                }
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_0 [i_8]))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_16 [i_1] [i_8] [i_9] [i_9])));
                var_36 = ((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]);
            }
            arr_50 [i_1] [i_1] [i_1] = arr_38 [i_1] [i_1] [i_1];
            /* LoopSeq 2 */
            for (int i_15 = 1; i_15 < 12; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_51 [3U] [i_1] [i_15 + 1]))) ? ((+(max((924196843399945670ULL), (((/* implicit */unsigned long long int) arr_52 [11LL] [i_1] [11LL])))))) : (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_5 [i_15])), (4294967272U)))))))));
                    var_38 *= ((/* implicit */unsigned char) 21U);
                }
                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_12))));
                arr_56 [i_1] [i_1] [i_15] = max((((((/* implicit */_Bool) arr_44 [i_15] [i_15 + 1] [i_15] [i_15 + 1] [i_1] [i_15])) ? (arr_44 [i_15] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (max((((/* implicit */long long int) (short)30979)), (arr_44 [i_1] [i_15 - 1] [i_15] [i_15 + 1] [i_1] [i_15]))));
            }
            for (long long int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                arr_60 [i_1] = arr_39 [i_1] [i_1] [i_1] [i_8] [i_1] [i_17] [i_17];
                var_40 = ((/* implicit */int) var_5);
                var_41 = ((/* implicit */long long int) var_16);
            }
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) 
        {
            arr_65 [i_1] = ((arr_18 [i_1] [(unsigned short)1] [i_1] [i_1] [i_18]) % (arr_18 [i_1] [i_18] [i_1] [i_1] [i_1]));
            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-95)) ^ (((/* implicit */int) var_3))))) ? (arr_12 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5082)))));
            var_43 = ((/* implicit */_Bool) ((687193183U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1])))));
        }
    }
    for (unsigned int i_19 = 1; i_19 < 19; i_19 += 4) 
    {
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_66 [i_19 + 1])) ? (((/* implicit */int) arr_66 [i_19])) : ((+(((/* implicit */int) arr_0 [i_19 - 1]))))));
        /* LoopSeq 2 */
        for (long long int i_20 = 1; i_20 < 17; i_20 += 2) 
        {
            var_45 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_66 [i_19 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_19 + 1]))) : (arr_69 [i_19 - 1] [i_19 - 1]))), (((/* implicit */unsigned long long int) ((-7372116801749871008LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_19 + 1]))))))));
            arr_70 [0U] |= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_69 [i_19 + 1] [i_20])) ? (((/* implicit */unsigned int) min((-1439064621), (((/* implicit */int) (unsigned char)86))))) : (max((arr_67 [i_20 + 2]), (((/* implicit */unsigned int) -1439064621))))))));
        }
        for (short i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_71 [i_19 + 1])) <= ((-(((/* implicit */int) arr_71 [i_19 - 1]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_22 = 0; i_22 < 20; i_22 += 3) 
            {
                var_47 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_66 [i_19 - 1]))));
                arr_77 [i_19] [i_21] [12LL] [i_22] &= ((/* implicit */unsigned long long int) var_12);
            }
            /* LoopNest 2 */
            for (unsigned short i_23 = 0; i_23 < 20; i_23 += 4) 
            {
                for (long long int i_24 = 0; i_24 < 20; i_24 += 4) 
                {
                    {
                        var_48 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))), ((+(arr_78 [i_19] [i_19 - 1] [i_19] [i_19])))));
                        var_49 = ((/* implicit */_Bool) arr_71 [i_19]);
                        var_50 = ((/* implicit */unsigned short) -5170005742478423576LL);
                    }
                } 
            } 
        }
        var_51 = ((/* implicit */unsigned long long int) -1920266654);
        /* LoopNest 3 */
        for (unsigned int i_25 = 0; i_25 < 20; i_25 += 4) 
        {
            for (long long int i_26 = 0; i_26 < 20; i_26 += 2) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 20; i_27 += 1) 
                {
                    {
                        var_52 |= ((((/* implicit */long long int) var_14)) ^ (7372116801749870993LL));
                        var_53 = arr_88 [i_19 - 1] [i_19 - 1] [i_19 - 1];
                        var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (signed char)51))) ? (614021601U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                } 
            } 
        } 
    }
    var_55 = ((/* implicit */long long int) (unsigned short)10448);
}
