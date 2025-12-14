/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150186
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 6443818252114633964LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 33150787U)))) : (max((3657598630391362454ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29838)) ? (((/* implicit */int) (short)20734)) : (((/* implicit */int) (short)-20735)))))))));
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)-48)), (((long long int) 3453950819558747127ULL))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (short)-20712))) & (9223372036854775807LL))), (((((/* implicit */long long int) ((/* implicit */int) (short)-19203))) * (((549751619584LL) & (((/* implicit */long long int) 1877971038U))))))));
                var_17 = ((/* implicit */signed char) arr_2 [i_1] [i_1] [i_0]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_8 [i_2] [i_6 + 2])))), (-894149313)));
                                var_19 = ((/* implicit */int) max((1186661007U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2] [i_3 + 1])))))));
                                var_20 += ((/* implicit */signed char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (unsigned char)232)) ? (((((/* implicit */_Bool) arr_11 [i_6] [i_2])) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_3] [i_6])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-79)) && (((/* implicit */_Bool) (signed char)2)))))))));
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -303803300)) ? (-1740396175) : (((/* implicit */int) (short)-27917))))))) ? (549751619584LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) arr_16 [13LL]);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -894149313)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 268435456U)))))));
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_2])) ^ (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) 2180196274U)) : (16899106187484731290ULL)))))) ? (((((/* implicit */int) arr_8 [i_2] [i_2])) / (((/* implicit */int) arr_8 [i_2] [i_2])))) : (((((/* implicit */_Bool) max((899923702), (((/* implicit */int) (unsigned char)58))))) ? ((-(((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)91)) != (((/* implicit */int) (unsigned char)232)))))))));
        arr_18 [i_2] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (unsigned char)232)), (549751619580LL))), (549751619584LL)));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_21 [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-173)) || (((/* implicit */_Bool) 13188520580642413687ULL))))) : (arr_19 [i_7] [i_7])));
        var_24 = ((/* implicit */short) arr_19 [i_7] [i_7]);
        var_25 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)52)))) ? (arr_20 [i_7]) : (arr_19 [i_7] [i_7])));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_20 [i_9]) : (arr_20 [i_8])));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27928)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_20 [i_9])) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 7243238620685648587LL))))));
        }
        for (unsigned long long int i_10 = 3; i_10 < 24; i_10 += 2) 
        {
            var_28 += ((/* implicit */unsigned char) ((int) var_11));
            arr_29 [i_8] [i_10 - 2] |= ((/* implicit */unsigned long long int) arr_24 [i_8] [i_10] [i_10]);
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 1) 
                {
                    {
                        arr_37 [i_11] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)28))))));
                        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)232))));
                    }
                } 
            } 
        }
        for (int i_13 = 1; i_13 < 24; i_13 += 1) 
        {
            arr_41 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) (-(arr_34 [i_13 + 1] [i_13 + 1])));
            var_30 += ((/* implicit */unsigned int) ((unsigned char) arr_23 [i_13] [i_8]));
        }
        for (short i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            arr_45 [i_8] [i_8] = ((/* implicit */short) ((arr_42 [i_14]) % (((/* implicit */unsigned long long int) 3108306288U))));
            var_31 = ((/* implicit */int) (short)24);
            var_32 += ((/* implicit */signed char) ((short) -549751619571LL));
        }
        arr_46 [18] [i_8] = ((/* implicit */short) (~(((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) var_3)) : (arr_23 [i_8] [i_8])))));
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [8LL] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8] [i_8] [i_8]))) <= (arr_38 [i_8] [i_8] [i_8]))))) : (arr_26 [(unsigned char)24] [i_8] [(unsigned char)24])));
        arr_47 [i_8] = ((/* implicit */int) (short)2209);
        arr_48 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_28 [i_8] [(short)10])))) ? (((((/* implicit */_Bool) var_14)) ? (var_10) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_8] [i_8] [6U] [i_8])) <= (var_7)))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        arr_51 [i_15] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (signed char)0)) ? (-1LL) : (((/* implicit */long long int) -1444702566)))), (((/* implicit */long long int) arr_24 [i_15] [i_15] [i_15])))), (((/* implicit */long long int) ((853055423) & (((((/* implicit */_Bool) 1387043314)) ? (((/* implicit */int) (unsigned char)206)) : (67108863))))))));
        var_34 = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned int) 1413964906)), (10U))), (((((/* implicit */_Bool) (unsigned char)229)) ? (0U) : (((/* implicit */unsigned int) -1413964907)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_15])) || (((/* implicit */_Bool) var_14)))))));
        arr_52 [i_15] = ((/* implicit */unsigned int) (short)-13293);
    }
}
