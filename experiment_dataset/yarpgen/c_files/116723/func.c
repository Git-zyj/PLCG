/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116723
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)53)) && (((/* implicit */_Bool) (signed char)-126))))) + (((/* implicit */int) min(((_Bool)0), (var_3))))))));
    var_14 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) min(((signed char)91), (var_7)))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) min((var_0), (((/* implicit */signed char) (_Bool)0)))))))));
    var_15 = ((/* implicit */unsigned int) (short)15268);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((int) (signed char)-91)))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [(unsigned char)2] [(unsigned char)2] [i_1 - 3])) ? (arr_1 [8ULL]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (_Bool)1))))))))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2492))) : (arr_2 [(signed char)10] [i_1 - 1]))))));
        }
        for (short i_2 = 1; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_19 -= ((/* implicit */unsigned long long int) (-(min((arr_6 [(short)2]), (((/* implicit */int) (_Bool)1))))));
            arr_8 [(signed char)8] [i_2] |= ((/* implicit */unsigned char) arr_7 [i_0] [i_2 - 1] [i_0]);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_20 = ((/* implicit */short) arr_10 [i_0]);
                arr_12 [i_0] [i_0] [1LL] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(33554431)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-79))));
            }
        }
        for (short i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */int) min((((/* implicit */long long int) min(((signed char)91), (arr_10 [i_0])))), (((((/* implicit */long long int) arr_2 [i_0] [i_4])) & (((2304401995222996071LL) / (((/* implicit */long long int) ((/* implicit */int) (short)12250)))))))));
            var_22 ^= (((~(((((/* implicit */_Bool) (short)-17471)) ? (-3100811488018131670LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_4 - 1]))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_4])))))));
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                var_23 ^= ((/* implicit */_Bool) (~(((min((65535ULL), (((/* implicit */unsigned long long int) arr_11 [14])))) ^ (((unsigned long long int) 15278868157954193835ULL))))));
                var_24 = ((/* implicit */long long int) (short)-12251);
            }
            for (short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                var_25 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)56002))))) : (10132049472538750881ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_6 [(_Bool)1])))) && (((/* implicit */_Bool) (short)-4227))))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned short i_8 = 4; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))) / (min((1561195735808754507ULL), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                            arr_25 [i_0] [i_7] [i_7] [i_7] [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_4 - 1] [i_4 - 1]))) : ((-(139637976727552ULL)))))));
                        }
                    } 
                } 
            }
            var_27 = 1006107344842664657LL;
        }
        for (short i_9 = 1; i_9 < 21; i_9 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4811)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_29 [i_9] [i_9 - 1] [i_0]))))) ? (((arr_18 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_9] [i_9]))))) : ((~(arr_18 [i_9])))))) ? (((((/* implicit */_Bool) arr_17 [i_9] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-116)) : ((-(((/* implicit */int) arr_19 [i_0] [i_9 + 1] [i_9] [i_0])))))) : (((/* implicit */int) arr_15 [i_0]))));
            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((arr_23 [i_9 - 1] [i_9] [i_9] [i_9] [i_9] [i_9 + 1]) | (arr_23 [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 1])))));
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 65535ULL)) ? (3100811488018131661LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32751)))))) ? ((~(((/* implicit */int) (signed char)116)))) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (unsigned char)203))));
                arr_33 [i_0] = ((/* implicit */signed char) (~(arr_32 [i_0] [i_0] [i_9] [i_10])));
            }
            for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4834)) ? (((/* implicit */int) ((arr_32 [i_11] [i_0] [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))))) : (((/* implicit */int) arr_21 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_3)))) >= (((((/* implicit */_Bool) -562711946)) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_9] [i_11])))))))) : (((((/* implicit */_Bool) (~(arr_36 [i_0] [i_9 + 1] [i_9 + 1] [i_9 - 1])))) ? (((/* implicit */long long int) arr_0 [i_0])) : (1723270982034668315LL)))));
                var_31 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-6)) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9 + 1] [i_0] [i_0] [i_9 + 1]))))) >> ((((-(((/* implicit */int) arr_35 [i_0] [(_Bool)1] [i_9 + 1] [i_0])))) + (39)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-6)) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9 + 1] [i_0] [i_0] [i_9 + 1]))))) >> ((((((-(((/* implicit */int) arr_35 [i_0] [(_Bool)1] [i_9 + 1] [i_0])))) + (39))) + (57))))));
                var_32 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_6 [6U])))) ? (((/* implicit */int) ((signed char) arr_6 [(short)16]))) : (((/* implicit */int) arr_4 [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
                arr_38 [i_0] [i_0] [i_0] = (short)18943;
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */short) (signed char)120))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (924995606679307775ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20529))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (arr_3 [i_0] [i_0]) : (arr_40 [(short)9] [i_9] [(short)6] [i_11] [(short)9] [i_12])));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1096643112525407365ULL)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_7 [i_0] [i_9] [(signed char)3])) : (((/* implicit */int) (short)0)))) : ((~(2077581902)))))) ? (arr_18 [i_11]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1723270982034668316LL)) ? (-24675904) : (((/* implicit */int) arr_21 [i_0]))))) ? (((/* implicit */int) (short)-3332)) : ((-(((/* implicit */int) arr_5 [i_0] [i_9] [i_9])))))))));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((unsigned char) -4383773896898862129LL))));
                }
                for (short i_13 = 1; i_13 < 20; i_13 += 4) 
                {
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) 3100811488018131681LL))));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_9] [i_11] [i_13])) ? (arr_3 [i_0] [i_0]) : (3907571037921537757LL)));
                    /* LoopSeq 4 */
                    for (long long int i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        arr_45 [i_9] [i_9 - 1] [7LL] [i_0] [i_14] [i_0] = max((((/* implicit */unsigned long long int) arr_37 [i_14] [(unsigned char)2] [i_11] [(unsigned char)2])), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [20U] [i_9] [i_0] [i_9]))))), (((((/* implicit */_Bool) arr_29 [i_0] [i_13] [19ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_24 [i_0] [i_0] [i_13]))))));
                        var_38 |= ((/* implicit */int) (-(arr_43 [i_0] [i_0] [i_0] [i_13] [i_13])));
                    }
                    for (short i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_39 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (short)-9891)) + (9895)))))) ? (((/* implicit */int) ((signed char) var_7))) : ((~(((/* implicit */int) arr_20 [i_0] [i_9] [i_11] [i_15])))))), (((/* implicit */int) arr_15 [(short)8]))));
                        var_40 = ((/* implicit */short) ((((long long int) arr_20 [i_0] [i_0] [i_11] [i_13 + 1])) % (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) arr_29 [i_15] [i_15] [20LL])))) >= (((/* implicit */int) arr_14 [i_13 + 2]))))))));
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-14))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_9] [i_11])) ? (arr_2 [i_0] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_9 + 1] [19])))))))) % (((((((/* implicit */int) (short)2047)) == (((/* implicit */int) arr_47 [i_13] [i_11])))) ? (((((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_13] [i_13])) ? (arr_32 [i_0] [i_0] [i_13] [(signed char)7]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_13]))))) : (((/* implicit */long long int) ((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (unsigned short)12))));
                        var_43 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (short)29479)))));
                        arr_51 [i_13 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11820032510738263922ULL)) && (((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_9 + 1] [i_16]))));
                        var_44 -= ((/* implicit */short) arr_14 [i_9 + 1]);
                        var_45 = ((/* implicit */signed char) (~(((1094409240U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-7761)))))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                    {
                        var_46 = ((/* implicit */short) arr_28 [i_0] [i_13]);
                        var_47 = ((/* implicit */short) var_4);
                        var_48 = ((/* implicit */_Bool) ((arr_55 [i_9 - 1] [i_9] [i_9 + 1] [i_9] [i_0]) ? (((/* implicit */int) arr_52 [i_9 - 1] [i_9] [i_9 + 1] [i_13])) : (((/* implicit */int) arr_55 [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 1] [i_0]))));
                        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [(signed char)19] [i_13] [i_0] [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_13])) ? (((int) arr_31 [i_0] [i_0] [i_11] [i_13])) : (((/* implicit */int) arr_55 [i_0] [i_13 + 2] [i_9 - 1] [i_9 - 1] [i_0]))));
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_9 - 1] [i_9] [6ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_9] [i_11]))) : (-1723270982034668315LL)));
                    }
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) 4383773896898862129LL)) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned short)0))))) / ((-(arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [17LL] [i_0]))))) : (min(((((_Bool)1) ? (arr_49 [i_0] [i_9] [i_0] [i_11] [i_18] [i_18] [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))))), (((/* implicit */unsigned int) var_8))))));
                    arr_59 [i_9] [i_9 - 1] [i_0] [i_0] = ((/* implicit */short) (~((+(arr_43 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 - 1])))));
                }
            }
        }
        var_52 = ((/* implicit */short) max((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) + (((((/* implicit */int) (signed char)31)) & (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((arr_50 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (short)18267)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)28672)) ? (arr_18 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (short i_19 = 2; i_19 < 17; i_19 += 3) 
    {
        arr_62 [i_19] [i_19 + 1] = ((/* implicit */long long int) 7384697132090634170ULL);
        var_53 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_19] [i_19 - 1])) ? (arr_43 [i_19 - 1] [i_19 - 1] [i_19] [i_19] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? ((~(arr_28 [i_19] [i_19]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) : (4294967295U)))))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) (short)32704))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_19 - 2] [i_19] [i_19] [i_19] [i_19]))) : (((arr_27 [i_19] [i_19]) ^ (arr_28 [i_19] [i_19])))))));
        arr_63 [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15210515430809733335ULL)) ? (arr_22 [i_19] [(unsigned short)14] [i_19] [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125)))))) ? (((/* implicit */unsigned long long int) ((long long int) 2147467264))) : (7999095643926486808ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [(unsigned short)2] [i_19] [i_19] [i_19] [i_19])))));
    }
}
