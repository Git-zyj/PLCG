/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151922
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
    var_17 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) (short)-18)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [(signed char)3] [14LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)425)) ? (((/* implicit */int) (signed char)-14)) : (var_4)));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-18))));
                    arr_11 [i_2] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_9 [i_1 + 1] [i_1] [i_1 + 1]))))));
                    arr_12 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]))))), (((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 + 1]))))));
                    var_18 &= ((/* implicit */unsigned short) (+(max((max((arr_7 [i_0]), (((/* implicit */unsigned long long int) (signed char)62)))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */short) (unsigned char)25)))))))));
                }
                for (short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
                {
                    var_19 = (signed char)71;
                    arr_16 [i_0] [i_1] [i_3] [i_3] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_10) : (((/* implicit */long long int) arr_4 [i_1]))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) 169476263)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((signed char) ((unsigned int) (~(((/* implicit */int) var_11))))));
                        var_21 *= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (signed char)93)) ? (15146206490364816949ULL) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (signed char)79)))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-63)) > (((/* implicit */int) (unsigned short)44433)))))));
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((max((arr_4 [i_4]), (((/* implicit */int) (unsigned char)26)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)90))))))), (min((((((/* implicit */_Bool) (signed char)-40)) ? (arr_17 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_3]))))), (((/* implicit */long long int) max((-1797143614), (((/* implicit */int) var_3)))))))));
                    }
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_21 [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (257698037760LL))));
                        arr_22 [i_5] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-65))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 17; i_6 += 2) 
    {
        arr_26 [(signed char)8] = ((/* implicit */unsigned short) (((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_6 - 1]))))) / (((((/* implicit */_Bool) -8268660036694934147LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6] [i_6]))) : (var_2)))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        arr_36 [i_6 - 2] [i_7] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (short)(-32767 - 1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -14)) ? (((/* implicit */int) (signed char)85)) : (-12))))));
                        arr_37 [i_7] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9)))) ? ((+(((/* implicit */int) (signed char)-76)))) : (((/* implicit */int) ((signed char) var_1)))));
                        arr_38 [i_6] [(signed char)16] [(signed char)16] [i_7] = ((/* implicit */unsigned char) 18446744073709551606ULL);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_10 = 3; i_10 < 15; i_10 += 2) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_44 [i_10] [i_10] = ((/* implicit */signed char) arr_40 [i_6] [i_6]);
                    var_23 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (signed char)-19)) | (((/* implicit */int) arr_34 [(signed char)13] [i_10] [i_10] [i_10])))));
                }
            } 
        } 
        var_24 = ((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */int) ((unsigned char) (signed char)71))) : (((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)22)))));
    }
    /* vectorizable */
    for (short i_12 = 2; i_12 < 22; i_12 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_13 = 1; i_13 < 19; i_13 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255))));
            arr_50 [i_12] [i_13] [i_12] = ((/* implicit */long long int) 10ULL);
            var_26 &= ((/* implicit */_Bool) (+(arr_7 [(_Bool)1])));
        }
        for (long long int i_14 = 2; i_14 < 22; i_14 += 4) 
        {
            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) & (((((/* implicit */_Bool) arr_3 [i_12])) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_14 + 1])))))));
            var_28 = ((/* implicit */unsigned int) ((arr_18 [i_12 + 1] [i_12 + 1]) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (17816754749105787486ULL)))));
            var_29 *= ((signed char) (signed char)-22);
            var_30 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) : (var_7)))));
        }
        for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_16 = 1; i_16 < 21; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_16 - 1] [i_16 - 1] [i_16] [i_16 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) : (arr_20 [i_16 + 1] [i_16 + 2] [i_16] [i_16 - 1])));
                            var_32 = ((/* implicit */long long int) (unsigned char)255);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_57 [i_16 + 2] [i_15] [i_15] [i_17]) : (((/* implicit */int) arr_3 [i_17]))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)48)) ? (arr_54 [i_17] [i_15] [2]) : (((/* implicit */unsigned int) var_15)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_19 = 2; i_19 < 22; i_19 += 2) 
                {
                    arr_66 [i_12] [i_15] [i_16 - 1] [(short)14] = ((/* implicit */unsigned char) (signed char)22);
                    /* LoopSeq 2 */
                    for (signed char i_20 = 0; i_20 < 23; i_20 += 4) 
                    {
                        arr_69 [i_12 - 2] [i_12 - 2] [i_16] [i_12 - 1] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 32767LL))) ? (arr_17 [i_16 + 1] [i_12 - 1] [i_19 + 1] [i_15]) : (((/* implicit */long long int) arr_64 [i_12 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 2] [(unsigned short)19] [i_19]))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_53 [i_19 - 2] [i_12 - 2] [i_16 - 1])) != (((/* implicit */int) var_13))));
                        arr_70 [(signed char)2] [i_15] [(signed char)9] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_45 [i_12] [i_15])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)13))) : (((((/* implicit */_Bool) 907539273U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)75))) : (-5911277996864697549LL)))));
                    }
                    for (signed char i_21 = 0; i_21 < 23; i_21 += 4) 
                    {
                        arr_74 [i_12 + 1] [i_15] [i_16] [i_19 - 2] [i_16 + 2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_12 + 1] [i_16 - 1])) ? (arr_20 [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_12 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))) : (var_9)));
                        var_36 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-63)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_22 = 2; i_22 < 19; i_22 += 1) 
                    {
                        arr_77 [i_15] [i_15] [i_16] [i_22 - 1] [i_22 + 1] [21ULL] [(unsigned short)18] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_16 + 2])) ? (((/* implicit */int) arr_63 [i_16 + 2])) : (((/* implicit */int) arr_63 [i_16 + 1]))));
                        arr_78 [i_12] [i_15] [(signed char)11] [(signed char)12] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_51 [i_12] [16U] [i_12])))) : ((-(((/* implicit */int) var_12))))));
                        arr_79 [i_12] [i_15] [i_16 + 2] [i_22] [i_22] = ((/* implicit */unsigned short) ((var_12) ? (32767LL) : (((((/* implicit */_Bool) 0)) ? (arr_17 [i_12] [i_15] [(unsigned char)12] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_12])))))));
                    }
                }
                var_37 = ((/* implicit */short) ((int) var_11));
                arr_80 [i_16] [13U] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)172))));
            }
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (arr_8 [i_12] [i_15] [(unsigned char)22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_12])))))) ? (((/* implicit */int) var_11)) : ((~(arr_73 [(_Bool)1] [i_12] [i_12] [(_Bool)1] [i_15] [i_15] [i_15])))));
            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_12] [i_12] [i_15] [i_15])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            arr_81 [i_15] [i_12 - 1] = (signed char)31;
        }
        for (int i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            var_40 = ((/* implicit */unsigned int) (+(8941550586724240235LL)));
            arr_84 [i_23] = ((/* implicit */long long int) (-(arr_18 [i_12 - 1] [i_12 - 1])));
            arr_85 [i_23] = arr_62 [i_12] [(short)3] [i_12 + 1];
            var_41 = ((/* implicit */int) ((arr_7 [i_23]) >> (((((/* implicit */int) arr_9 [i_12 - 2] [i_12 - 1] [i_12 - 1])) - (98)))));
            arr_86 [i_12 + 1] [(short)12] [i_23] = ((/* implicit */signed char) 0U);
        }
        var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (signed char)-63)))));
        arr_87 [i_12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_62 [3] [i_12] [(signed char)21])))));
    }
    var_43 = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))) : (-8941550586724240251LL)))));
    var_44 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) (unsigned char)173))));
}
