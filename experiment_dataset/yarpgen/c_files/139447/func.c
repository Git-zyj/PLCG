/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139447
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_1 [i_0])))) / (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) >= (((/* implicit */int) var_13)))))) / (((unsigned long long int) arr_4 [i_2 + 1]))));
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((arr_7 [i_0] [i_1] [i_2]) / (arr_7 [i_0] [i_0] [i_2]))) / (((unsigned long long int) (unsigned char)71))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) - (((/* implicit */int) arr_6 [i_2 + 4] [i_3] [i_3] [i_3]))));
                        var_18 ^= ((/* implicit */short) ((((/* implicit */int) ((short) 3005199602624329051LL))) * (((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) | (arr_7 [i_2 + 2] [i_2 + 3] [i_4 + 1])))))));
                        var_20 |= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_3 [i_0] [i_4 + 2])) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4 + 2])) : (((/* implicit */int) (_Bool)1)))));
                        arr_15 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) (_Bool)1);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 1490416494))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((((/* implicit */int) arr_6 [i_4 - 2] [i_4] [i_4] [i_2 + 4])) | (((/* implicit */int) arr_6 [i_4 - 2] [i_2] [i_2] [i_2 + 4]))))));
                    }
                    var_22 = ((/* implicit */_Bool) ((-1152921504606846976LL) / (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])) << (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */short) var_9);
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)13), (((/* implicit */unsigned short) var_7))))) ? (33285996544LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)51)))))));
    /* LoopSeq 3 */
    for (short i_5 = 1; i_5 < 10; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5332335288480731793ULL)) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5 + 1])) : (((/* implicit */int) (_Bool)1))));
        var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_6] [i_6] [i_6 - 3] [i_6]))))) ? (((/* implicit */int) (unsigned char)66)) : (((((/* implicit */_Bool) ((8388607LL) * (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)28)))) : (((/* implicit */int) ((arr_19 [i_6] [i_6]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))))))))));
        var_27 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (unsigned char)214)) : (((((/* implicit */_Bool) (short)32754)) ? (2147483639) : (((/* implicit */int) (unsigned char)213))))))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) ^ (2631563883513167577LL)))));
        var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)117)) == (((/* implicit */int) (short)-16922))));
        var_29 -= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 22ULL))) < (((/* implicit */int) (short)2046))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            var_30 = ((/* implicit */_Bool) ((5871335543244425707LL) / (-3752796531235211168LL)));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6))));
            var_32 = ((/* implicit */short) ((int) var_12));
            var_33 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1994))) % (var_12)));
        }
        arr_28 [i_7] |= ((((/* implicit */_Bool) (short)-28855)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned short)147)));
        /* LoopSeq 3 */
        for (long long int i_9 = 3; i_9 < 12; i_9 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_14))) & (((/* implicit */int) var_13))));
            var_35 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -1085269559)) ? (((/* implicit */int) (unsigned char)54)) : (1085269558)));
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_38 [i_7] [i_9] [i_10] [i_9] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) > (((/* implicit */int) (short)8192))));
                            arr_39 [i_9] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) (~(3005199602624329041LL)));
                            var_36 = ((/* implicit */unsigned int) (!(var_9)));
                        }
                    } 
                } 
                var_37 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_31 [i_10] [i_10] [i_9] [i_7])) << (((var_12) - (1355118730786476089LL))))) / (((/* implicit */int) (signed char)73))));
                arr_40 [i_9] [i_9] [i_10] = arr_11 [i_10] [i_9] [i_7] [i_7];
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((int) arr_0 [i_7] [i_9 + 2])))));
            }
        }
        for (long long int i_13 = 3; i_13 < 12; i_13 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */short) var_5);
            var_40 |= ((/* implicit */long long int) (_Bool)1);
        }
        for (long long int i_14 = 3; i_14 < 12; i_14 += 3) /* same iter space */
        {
            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((9223372036854775797LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            arr_45 [i_7] [i_14] = ((((/* implicit */int) arr_10 [i_14] [i_14] [i_7] [i_14] [i_14 + 2] [i_14])) - (((/* implicit */int) arr_10 [i_14] [i_14] [i_7] [i_14] [i_14 - 2] [i_14])));
        }
    }
}
