/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128122
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
    var_15 = ((((/* implicit */_Bool) ((long long int) ((_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) < (var_7))))) : (((((/* implicit */_Bool) 4035225266123964416LL)) ? (((/* implicit */unsigned long long int) -4035225266123964416LL)) : (2030506767663639886ULL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) >= (5364458989153789905LL)));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((5364458989153789905LL) ^ (var_7))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 16416237306045911729ULL)) ? (var_4) : (((/* implicit */int) (_Bool)1))))))))));
        arr_4 [5ULL] [i_0] = ((/* implicit */unsigned short) ((var_10) & ((-(arr_2 [(_Bool)1] [(_Bool)1])))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) -5364458989153789903LL);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        arr_19 [i_4] [i_3] [i_1] [i_1] [19U] = ((/* implicit */short) (~(-1267649494)));
                        var_18 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-15667)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2030506767663639886ULL) < (((/* implicit */unsigned long long int) arr_18 [i_1] [i_2] [i_3] [1LL])))))))) < (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (16416237306045911710ULL)))));
                        var_19 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) arr_5 [(signed char)8])) : (((/* implicit */int) arr_14 [i_2]))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((arr_10 [i_4] [9U] [i_4]) + (4927165063707326496LL)))))) || (((/* implicit */_Bool) arr_11 [i_1])))))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_22 [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_1])) ? (((/* implicit */int) arr_20 [i_1])) : (((/* implicit */int) arr_20 [i_5]))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_6] [i_1])))))));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_32 [i_1] [i_5] [i_6] [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2030506767663639855ULL)) ? (2030506767663639914ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (5364458989153789905LL))))));
                            var_22 = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) 15998638960807739446ULL))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (var_1)));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_35 [i_1] [3] = ((/* implicit */unsigned int) var_14);
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) (+(var_4)));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_14)))))));
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_14)))) && (((_Bool) var_13))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (+(arr_10 [7LL] [i_9] [i_13]))))));
                        arr_49 [i_1] = ((/* implicit */unsigned short) var_3);
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_1] [19ULL] [i_13 + 1] [i_1]))));
                        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_44 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_12]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 21; i_14 += 3) 
            {
                for (signed char i_15 = 1; i_15 < 20; i_15 += 3) 
                {
                    {
                        arr_56 [i_1] [3ULL] [i_14] [13LL] = ((/* implicit */unsigned char) arr_45 [(unsigned short)4] [i_15] [i_15 - 1] [i_15]);
                        arr_57 [i_1] [i_1] [i_15 + 1] [i_1] = ((/* implicit */int) arr_7 [i_1]);
                        var_31 -= ((/* implicit */unsigned int) var_11);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 2; i_16 < 18; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) var_13);
                            var_33 = ((/* implicit */unsigned short) var_8);
                            arr_61 [12] [i_9] [i_1] [i_9] = ((/* implicit */short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_1))));
                            var_34 = ((/* implicit */short) ((var_14) & (((/* implicit */unsigned long long int) 4035225266123964406LL))));
                            arr_62 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(5364458989153789905LL)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (unsigned char)236))))) : (arr_45 [i_16 - 1] [i_15] [i_15 - 1] [i_14])));
                        }
                        for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
                        {
                            var_35 = (~(arr_21 [15ULL] [15ULL] [15ULL]));
                            arr_67 [i_1] [(signed char)8] [i_1] [i_14] [i_15] [(unsigned short)3] [i_1] = ((/* implicit */unsigned long long int) (~(((int) (unsigned char)236))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */int) ((signed char) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (-2005924726) : (((/* implicit */int) var_8))))));
            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(962708776U))))));
            var_38 = var_12;
        }
        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (16416237306045911713ULL) : (((/* implicit */unsigned long long int) -2936912507934938009LL))));
    }
    var_40 = ((/* implicit */_Bool) (+(16416237306045911729ULL)));
    var_41 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) var_11)) : (var_14)));
    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) var_12))));
}
