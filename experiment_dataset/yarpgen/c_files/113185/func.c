/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113185
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 -= ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)18339))))));
                    arr_8 [15LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 13682970563171578779ULL);
                    arr_9 [i_0] [i_0] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), (min((((/* implicit */unsigned long long int) -7469942902511487558LL)), (13682970563171578779ULL)))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) 19U)) == (((-7469942902511487558LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)28067)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_13 [i_0] = ((/* implicit */short) min((((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)-34)))), (((/* implicit */int) var_1))));
                        arr_14 [i_0] [i_1] [i_0] [(unsigned short)10] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((short) (unsigned char)233))), (var_10))), (4763773510537972837ULL)));
                    }
                    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        var_15 += ((/* implicit */_Bool) ((short) min((arr_5 [i_0] [i_2] [i_2 + 2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))))));
                        var_16 = ((/* implicit */short) var_2);
                        var_17 -= ((/* implicit */short) max(((-(((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))))))), (14705141065460488056ULL)));
                        var_18 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2]);
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_19 [i_0] [i_0] [i_5] [16LL] = ((((/* implicit */_Bool) arr_6 [i_1])) ? (min((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) var_6)), (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)27), (((/* implicit */unsigned short) var_5)))))));
                        var_19 = ((/* implicit */short) (unsigned short)45409);
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_23 [(unsigned short)12] [(short)10] [i_2 - 1] [(short)10] [i_6] = ((/* implicit */unsigned long long int) max((var_1), ((unsigned short)18337)));
                            var_20 = ((/* implicit */unsigned short) 2256483990464302481ULL);
                        }
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned short) (_Bool)1);
                            var_22 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2]);
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)102)))))));
                        }
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) 
                    {
                        var_24 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)20452))))) : (var_10))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (((7469942902511487571LL) / (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-84)), (6262714269274252020LL)))) ? ((+(arr_5 [i_2 - 1] [i_1] [i_2 - 1]))) : ((+(arr_5 [i_0] [i_0] [i_8 + 1])))));
                        arr_30 [i_8] [i_8] [i_2] [(signed char)4] [i_1] [(unsigned short)21] = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18321)))))))));
                    }
                }
            } 
        } 
        arr_31 [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_25 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0]), (((/* implicit */short) var_3))))) >= (((/* implicit */int) var_11))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18378055687690497290ULL))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))))) ? (((max((((/* implicit */long long int) var_3)), (arr_20 [i_0] [i_0]))) - (((((/* implicit */_Bool) (short)-20683)) ? (7469942902511487571LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))));
    }
    for (long long int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            arr_37 [i_9] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_7)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            arr_38 [i_9] [i_9] [i_9] = (signed char)-49;
        }
        var_27 = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
        var_28 = (short)-27884;
        var_29 -= ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_36 [i_9])) + (((/* implicit */int) arr_24 [20ULL] [i_9]))))))) ? (min((max((((/* implicit */unsigned long long int) var_7)), (arr_5 [i_9] [(unsigned short)3] [(short)14]))), (((/* implicit */unsigned long long int) arr_24 [i_9] [i_9])))) : (((/* implicit */unsigned long long int) (-(arr_20 [i_9] [i_9])))));
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                for (unsigned short i_13 = 3; i_13 < 20; i_13 += 4) 
                {
                    {
                        arr_45 [(signed char)4] [i_13] [i_12] [i_11] [i_13] [i_9] = ((/* implicit */signed char) var_11);
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 2; i_14 < 20; i_14 += 2) 
                        {
                            arr_49 [i_14] [i_13] [i_12] [i_13] [i_13] [i_9] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 4763773510537972837ULL)) ? (min((13682970563171578779ULL), (((/* implicit */unsigned long long int) arr_25 [i_9] [i_11] [i_12 + 4] [i_13] [i_14])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)85))))))));
                            var_30 ^= max((((/* implicit */long long int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (short)5421))))) >> (((((/* implicit */int) (unsigned char)179)) - (174)))))), ((~(min((((/* implicit */long long int) var_8)), (-4577415792044829119LL))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
    var_32 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
    {
        for (unsigned short i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 1) 
            {
                {
                    var_33 &= ((/* implicit */unsigned short) (-((~(((((/* implicit */_Bool) arr_16 [i_16])) ? (arr_7 [(short)14] [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                    var_34 = ((/* implicit */short) var_6);
                    arr_56 [(signed char)10] [i_15] [(short)6] [i_17] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_2))))));
                    var_35 = ((/* implicit */long long int) min((var_35), ((+((+(((((/* implicit */_Bool) (short)-16255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (575796139232306029LL)))))))));
                }
            } 
        } 
    } 
}
