/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157448
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
    var_16 = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_7) : (((/* implicit */long long int) -878211873)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) var_8)) : ((-(min((878211872), (((/* implicit */int) (short)-29759))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) -878211888))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (-4072320663188991866LL)))))) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_5))), ((~(((/* implicit */int) var_10)))))) : (min((((/* implicit */int) (unsigned char)169)), (-1)))));
        var_17 = ((/* implicit */short) var_11);
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_7 [10LL] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-18475))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */short) (-(-878211875)));
                                arr_20 [i_3] [i_4] [i_1] = (_Bool)1;
                                arr_21 [i_5] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((arr_1 [i_3]), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))), (max((((/* implicit */int) (short)(-32767 - 1))), (878211867))))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_6 [i_1] [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_1 [i_2]))))) : (((/* implicit */int) var_1))));
                    arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_11);
                    var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-21334)))), ((-(88612042U)))));
                    arr_24 [i_1] = ((/* implicit */long long int) arr_12 [i_3] [i_1] [i_1] [i_1]);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (var_4))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_13))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)830))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_6])) ? (arr_26 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (((((/* implicit */unsigned long long int) -1LL)) * (1349921568851711123ULL)))));
    }
    /* LoopSeq 4 */
    for (int i_7 = 1; i_7 < 23; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            arr_35 [i_7] [i_7] = ((/* implicit */unsigned int) arr_29 [i_8] [i_8]);
            var_23 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) (_Bool)1)))) < ((-(((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) (~(803424515)))) : (317592713710735047ULL)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((-878211873) >= (((/* implicit */int) arr_30 [i_7 - 1]))));
                    var_25 = ((/* implicit */unsigned int) arr_37 [i_7] [i_8] [i_9]);
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(arr_38 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1]))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    arr_42 [i_7] = ((/* implicit */short) (-(var_2)));
                    arr_43 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_7])) ? (1386479188U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106)))))) ? (((/* implicit */int) arr_29 [i_7 + 1] [15ULL])) : (((/* implicit */int) ((_Bool) var_15)))));
                }
                arr_44 [i_7] = ((/* implicit */_Bool) arr_29 [i_9] [i_7]);
            }
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_27 = ((/* implicit */int) var_9);
                    var_28 = ((/* implicit */short) ((((/* implicit */int) arr_46 [i_7 + 1])) - (((/* implicit */int) arr_46 [i_7 - 1]))));
                }
                for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_2))))));
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (878211874)))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                }
                arr_52 [i_7] = ((/* implicit */signed char) (-(-878211884)));
            }
            for (short i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                var_31 = ((/* implicit */unsigned short) var_5);
                var_32 = ((/* implicit */signed char) min((var_12), (((/* implicit */long long int) min((((/* implicit */short) min((var_9), (((/* implicit */signed char) (_Bool)1))))), (arr_47 [i_7]))))));
                var_33 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-24))) >= (2876481638U));
                var_34 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)95)), ((unsigned short)14845)))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_7] [i_7] [i_15])) || (((/* implicit */_Bool) var_12)))))))));
            }
            arr_57 [i_7] = ((/* implicit */signed char) var_6);
        }
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_48 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1])), (arr_37 [i_7 + 1] [i_7] [i_7])))) ? (min((arr_37 [i_7] [11ULL] [i_7 + 1]), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_48 [i_7 - 1] [i_7] [i_7] [i_7 - 1]), (arr_48 [i_7] [i_7 + 1] [i_7] [i_7 + 1])))))));
        arr_58 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_49 [i_7]) ? ((~(((/* implicit */int) (signed char)-32)))) : (((arr_38 [(signed char)19] [(signed char)19] [i_7 - 1] [(signed char)19] [i_7]) / (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_7 - 1] [i_7 - 1] [i_7 - 1]))) : (-1LL)))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11))));
        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (-(((/* implicit */int) ((var_7) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_53 [18] [i_7] [(unsigned char)3])))))))))))));
    }
    for (int i_16 = 1; i_16 < 23; i_16 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_16])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) arr_50 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2336991842U)))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (_Bool)1))))) : (var_12)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_17 = 0; i_17 < 24; i_17 += 3) 
        {
            arr_64 [i_16] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
            arr_65 [i_16] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)-102))))));
        }
        arr_66 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((-(583035299))) : ((~(((/* implicit */int) (_Bool)1))))));
        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (((-(((unsigned long long int) var_11)))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_45 [16U]))))) ? (18446744073709551615ULL) : (var_4))))))));
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                {
                    arr_73 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) (~(var_12)));
                    arr_74 [i_16 + 1] [i_16] [6U] [i_16 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    }
    for (int i_20 = 1; i_20 < 23; i_20 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)113))));
        arr_77 [i_20 - 1] [i_20] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)31))))), (min(((unsigned char)255), (var_13)))))) < (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_9))) && (((/* implicit */_Bool) var_9)))))));
    }
    for (unsigned long long int i_21 = 1; i_21 < 6; i_21 += 3) 
    {
        arr_82 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_21 + 1] [i_21] [i_21 + 3] [i_21] [i_21] [i_21])) ? (((11257693823743792864ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) min((4294967273U), (((/* implicit */unsigned int) var_6))))) ? ((+(13605429678801245424ULL))) : (((/* implicit */unsigned long long int) 3611741092U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_5))))));
        arr_83 [i_21] &= (+(min((arr_1 [i_21 + 1]), (arr_1 [i_21]))));
        var_40 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6703420595624010612ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_21 + 3] [4] [i_21] [i_21 + 3]))) : (max((-2564576632708993182LL), (((/* implicit */long long int) 878211865))))))), (((((/* implicit */_Bool) arr_9 [(short)4] [i_21] [i_21])) ? (arr_9 [10] [i_21] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
        var_41 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33339)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */short) var_15)), ((short)32315))))))), (max((((/* implicit */unsigned int) arr_30 [i_21 + 3])), (arr_26 [i_21])))));
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-112)) * (((/* implicit */int) (signed char)-125))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_72 [i_21])) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (min((((/* implicit */unsigned long long int) (+(-7869707997078410510LL)))), (((((/* implicit */unsigned long long int) arr_18 [6U] [6U] [i_21 - 1] [i_21] [i_21])) / (var_4))))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) var_14)))))));
    }
}
