/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17670
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
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) >= (4422359207460902734ULL))))));
    var_19 &= ((/* implicit */long long int) var_14);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                var_20 -= (-(((/* implicit */int) ((_Bool) arr_5 [i_1] [i_2 - 1]))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 4422359207460902734ULL);
                arr_8 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (4422359207460902734ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 2])))))) ? (((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_2 [i_2 - 1]))) : ((((_Bool)0) ? (arr_2 [i_2 + 2]) : (arr_2 [i_2 - 1]))));
                arr_9 [i_0] [(unsigned short)8] |= ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)193)))));
            }
            for (short i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */_Bool) arr_11 [i_0] [3ULL] [i_0]);
                var_22 |= ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4754)) ? (((/* implicit */int) arr_3 [(short)2])) : (((/* implicit */int) arr_3 [12]))));
            }
            for (short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
            {
                var_23 = ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)17731)) : (((/* implicit */int) (unsigned char)150))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4729))) : (var_6))) != (((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (1537574158098359555ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((_Bool) ((unsigned short) (_Bool)0)));
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17))))))) == (((((/* implicit */_Bool) (short)17427)) ? (131071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_4] [i_7] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_8])) || (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4])))), ((_Bool)0)));
                            var_26 = ((((/* implicit */int) min((arr_13 [i_0] [i_4]), ((unsigned char)56)))) > ((~(((/* implicit */int) arr_13 [(short)3] [i_4])))));
                        }
                    } 
                } 
                var_27 += ((/* implicit */unsigned char) min((arr_16 [i_0] [i_1] [i_4]), (((/* implicit */int) arr_11 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]))));
            }
            /* LoopSeq 3 */
            for (long long int i_9 = 2; i_9 < 15; i_9 += 4) 
            {
                arr_28 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) arr_10 [i_0]))))))));
                var_28 = ((/* implicit */int) ((unsigned char) min((((/* implicit */int) arr_15 [i_0] [i_1])), ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) var_11)))))));
            }
            for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 3) 
            {
                var_29 = var_14;
                var_30 = arr_20 [i_0] [i_0] [i_0] [i_0] [i_0];
            }
            for (short i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                arr_35 [i_0] [i_1] [i_11] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_23 [i_0])))) & (((/* implicit */int) (!(arr_32 [i_0] [i_1] [i_11] [i_11]))))));
                arr_36 [i_1] [(unsigned char)11] [(_Bool)1] [i_1] = (!(((/* implicit */_Bool) min(((+(var_7))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)40)))))));
                var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (18446744073709420544ULL)))) ? (((int) (unsigned char)41)) : (((/* implicit */int) ((_Bool) (_Bool)0)))))) ? (((/* implicit */int) (unsigned char)40)) : (-597712356)));
            }
            var_32 = ((/* implicit */int) ((unsigned char) var_10));
            var_33 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)192));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17179869183LL)) ? (((/* implicit */int) (_Bool)1)) : (523467421)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_13 = 3; i_13 < 14; i_13 += 3) 
            {
                arr_42 [(_Bool)1] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_14 [i_0] [i_0] [i_13])) | (((/* implicit */int) (unsigned short)4754))))));
                arr_43 [9] [9] [14LL] [i_12] &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_13 - 2]))));
                /* LoopSeq 3 */
                for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 131082ULL)) ? (((/* implicit */int) arr_40 [i_13 + 1] [i_13])) : (((/* implicit */int) arr_40 [i_13 + 2] [i_13 + 2])))))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 1; i_15 < 15; i_15 += 4) 
                    {
                        var_36 = ((((/* implicit */int) arr_31 [i_13 - 1] [i_13 + 1] [i_13 + 3] [i_13 - 1])) ^ (((/* implicit */int) (unsigned short)35471)));
                        var_37 = ((/* implicit */unsigned char) -1LL);
                        var_38 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_15 + 2] [i_13 + 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_13] [i_12]))))) : (((unsigned long long int) arr_15 [i_13 - 1] [i_13 - 1]))));
                        var_39 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)191))));
                    }
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned char) ((_Bool) arr_6 [(_Bool)1] [i_13 + 2]));
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        arr_55 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (131082ULL)));
                        arr_56 [i_13] [i_16] [i_13] [i_12] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_48 [i_13 + 2] [i_13 + 2] [i_13] [i_13 + 3]))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_59 [i_12] [i_13] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -1679443490)) < (var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2370680521643371957LL)))))));
                        arr_60 [i_0] [i_12] [i_13 - 1] [i_16] = ((/* implicit */unsigned char) ((_Bool) (unsigned short)22749));
                    }
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) arr_39 [i_0] [i_0] [(unsigned char)14])) : (((/* implicit */int) arr_39 [i_19] [i_13] [i_12]))));
                    var_42 |= ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? ((-(arr_64 [i_13] [0LL] [(unsigned char)9] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) - (arr_30 [i_0] [i_12])))));
                    arr_65 [i_0] [i_12] [i_13 + 3] [i_19] = ((/* implicit */unsigned char) (unsigned short)5217);
                }
            }
            for (unsigned char i_20 = 1; i_20 < 14; i_20 += 4) 
            {
                arr_68 [i_20] [i_20] = ((/* implicit */unsigned char) (unsigned short)60559);
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (((+(((/* implicit */int) min(((unsigned short)63488), (var_15)))))) << (((((/* implicit */_Bool) min((arr_30 [i_12] [i_20]), (-2924069051887159566LL)))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) arr_5 [i_0] [i_0])) / (((/* implicit */int) (unsigned char)121)))))))))));
                var_44 &= ((/* implicit */short) ((unsigned short) ((_Bool) (unsigned char)132)));
            }
            for (unsigned char i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                var_45 = ((/* implicit */long long int) min((131082ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12288)) + (((/* implicit */int) arr_29 [i_0])))))));
                arr_71 [i_0] [(_Bool)1] [i_21] [i_21] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384))) : (-2924069051887159539LL)))))));
                var_46 = ((/* implicit */unsigned char) var_7);
                var_47 = ((/* implicit */int) ((min((var_7), (((/* implicit */unsigned long long int) arr_29 [i_0])))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) - ((+(((/* implicit */int) (unsigned char)170)))))))));
            }
            var_48 = ((/* implicit */int) (((-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) arr_11 [i_0] [i_12] [i_0]))));
        }
        var_49 = ((((/* implicit */int) min(((unsigned char)167), (arr_14 [i_0] [i_0] [i_0])))) >> (((min((((/* implicit */unsigned long long int) (unsigned char)251)), ((~(arr_12 [i_0] [i_0]))))) - (233ULL))));
    }
    for (unsigned short i_22 = 2; i_22 < 18; i_22 += 4) 
    {
        arr_76 [i_22] = ((/* implicit */_Bool) (~(((int) (unsigned char)32))));
        var_50 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2047)) ? (192ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49134)))));
    }
    /* vectorizable */
    for (long long int i_23 = 0; i_23 < 21; i_23 += 3) 
    {
        var_51 = ((/* implicit */int) (-((~(18446744073709551424ULL)))));
        var_52 = ((/* implicit */unsigned char) (+(arr_79 [i_23])));
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 21; i_24 += 4) 
        {
            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
            {
                {
                    var_53 = ((/* implicit */short) (_Bool)0);
                    arr_85 [i_25] [i_24] [i_23] [i_25] = ((/* implicit */long long int) var_14);
                }
            } 
        } 
    }
}
