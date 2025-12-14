/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144629
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
    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_14)) ? (3061497U) : (var_0))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10867414205449672586ULL)) ? (((/* implicit */int) (short)2271)) : ((+(-953033977)))));
                    arr_7 [i_1] = ((/* implicit */unsigned short) (signed char)108);
                    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (max((var_16), (((/* implicit */long long int) (short)4083)))) : (((/* implicit */long long int) ((/* implicit */int) ((-953033977) <= (953033977)))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), ((-(max((((/* implicit */unsigned long long int) ((long long int) -953033977))), (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 1] [i_1 - 1])), (536870911ULL)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_23 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_3 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_16 [i_5] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_2 [i_3] [i_4] [i_5]);
                    arr_17 [i_3] [i_3] [i_5] [19U] = ((/* implicit */long long int) -1573198016);
                    var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_12 [i_3] [i_4] [i_3]), (((/* implicit */signed char) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3] [i_4] [i_5])) ^ (((/* implicit */int) (signed char)-68))))) : (((arr_2 [i_3] [i_4] [i_3]) ^ (((/* implicit */long long int) -960240230))))));
                }
            } 
        } 
        arr_18 [(signed char)4] [i_3] = 983650804U;
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                for (unsigned int i_8 = 1; i_8 < 19; i_8 += 4) 
                {
                    {
                        var_25 = ((/* implicit */int) (+(((max((((/* implicit */unsigned int) (_Bool)1)), (var_13))) ^ (min((((/* implicit */unsigned int) (signed char)122)), (2517738633U)))))));
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_8 - 1] [i_3] [(unsigned char)2] [i_8 - 1] [i_9]))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_3] [i_9] [i_9])) || (((/* implicit */_Bool) (unsigned char)49)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32198)))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) 888864782))));
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                        {
                            var_29 ^= ((/* implicit */short) min((((/* implicit */long long int) (signed char)127)), (9223372036854775807LL)));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? ((+(2019860915))) : (((int) ((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53)))))))))));
                            arr_33 [(unsigned short)0] [(signed char)0] [i_8] [i_7] [i_8] [i_6] [i_3] = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) (short)32767)) ? (var_16) : (((/* implicit */long long int) 4294967295U)))))), (((/* implicit */long long int) ((arr_20 [i_8 + 1] [i_8 - 1] [i_8 + 1]) >= (arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1]))))));
                            var_31 ^= ((/* implicit */long long int) (short)0);
                        }
                        /* LoopSeq 2 */
                        for (signed char i_11 = 1; i_11 < 16; i_11 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-17705)) / (var_5)))) > (((((/* implicit */_Bool) 17310100596699851540ULL)) ? (((/* implicit */long long int) -540086382)) : (var_14)))))))));
                            var_33 += ((/* implicit */unsigned short) var_9);
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_6] [i_6] [i_7])))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_35 = ((/* implicit */int) min((var_35), (-328971670)));
                            var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)4083)) ? (-953033977) : (((/* implicit */int) (unsigned char)227))));
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_3] [i_6] [i_7] [i_3] [i_12])) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-9290)))) : (((/* implicit */int) var_2)))))));
                            var_38 &= ((/* implicit */unsigned long long int) max((arr_2 [i_3] [i_8] [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) (signed char)-56)))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) arr_39 [i_13]))))));
        var_40 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)43)) & (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_10)))))) | (((/* implicit */int) var_1))));
        arr_42 [i_13] |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_4 [i_13] [i_13] [i_13])) >= (10150099218638050034ULL))) ? (((2902969364892094257ULL) << (((4070594840U) - (4070594837U))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) & (arr_5 [i_13] [i_13] [i_13])))));
    }
    /* LoopSeq 1 */
    for (short i_14 = 2; i_14 < 9; i_14 += 3) 
    {
        arr_45 [(unsigned char)0] &= ((/* implicit */_Bool) (unsigned char)210);
        var_41 = (short)-26485;
        var_42 = arr_44 [i_14 + 2];
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 1) 
    {
        var_43 += ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)20170))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                {
                    arr_52 [(short)18] [i_16] [(short)18] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_15] [i_16] [(signed char)8])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (9223372036854775807LL))) : (-5007871881570828308LL)));
                    var_44 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3311316491U)) ? (((/* implicit */int) var_15)) : (1641017178)));
                }
            } 
        } 
        var_45 |= ((/* implicit */unsigned int) -6932304611104034004LL);
        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))) : (arr_0 [i_15] [i_15])));
        var_47 &= ((/* implicit */int) var_9);
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 3; i_18 < 12; i_18 += 3) 
    {
        var_48 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 983650805U)) ? (((/* implicit */int) var_2)) : (arr_11 [i_18 - 3])));
        var_49 = ((/* implicit */_Bool) (~(((long long int) arr_8 [i_18]))));
    }
}
