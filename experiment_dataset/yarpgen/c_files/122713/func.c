/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122713
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
    var_17 = var_1;
    var_18 *= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) / (var_8)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)177)))) : (-1024608055))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [(short)8] [(_Bool)1] = ((/* implicit */signed char) ((arr_1 [i_0] [i_0]) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)102))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_20 -= ((_Bool) arr_6 [i_1] [i_2]);
            arr_9 [(_Bool)1] [(short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(_Bool)1] [(unsigned short)8]))))) ? (((/* implicit */int) arr_5 [2] [(unsigned short)0] [i_1])) : (((/* implicit */int) var_9))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((signed char) (signed char)22)))));
            arr_10 [i_2] [(signed char)0] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-4))));
            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) arr_8 [(_Bool)1])) : (((/* implicit */int) (unsigned short)30665)))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) arr_1 [i_3] [(signed char)6]);
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_18 [(signed char)3] [(signed char)2] [i_4] [6LL] = var_7;
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [(signed char)7] [(_Bool)1] [i_4])) ? (((/* implicit */int) arr_0 [i_4] [(signed char)1])) : (((/* implicit */int) arr_15 [i_1] [7ULL] [i_5]))));
                    var_25 = ((/* implicit */signed char) (+(1511453157)));
                    arr_19 [i_1] [(unsigned short)8] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_16))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (arr_5 [2] [4] [i_6])));
                        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_24 [i_1] [i_3] [i_3] [(signed char)9] [i_7] [i_6] [i_7]))));
                        var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-108))));
                    }
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        arr_28 [i_8] [i_6] [(_Bool)1] [0] [0LL] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)68))));
                        arr_29 [i_1] [i_3] [(signed char)8] [(_Bool)1] [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) (signed char)10)) : ((~(((/* implicit */int) var_7))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_8))) != ((+(((/* implicit */int) (unsigned short)43185))))));
                    }
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_14))))));
                    var_31 = ((/* implicit */signed char) arr_4 [3]);
                    arr_30 [(short)9] [(_Bool)1] [i_4] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)56))))) ? (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [8LL]))) : (arr_22 [(_Bool)0] [i_3] [7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48)))));
                }
                var_32 -= ((/* implicit */_Bool) (signed char)-4);
            }
            arr_31 [(_Bool)1] [(unsigned char)8] [(unsigned short)2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_3] [i_1]))));
        }
        var_33 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)108))) : (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)21))) : (var_2)))));
        /* LoopSeq 4 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            arr_34 [i_9] = ((/* implicit */signed char) ((((-422290697) - (((/* implicit */int) (unsigned char)142)))) == ((-(((/* implicit */int) (unsigned short)51892))))));
            arr_35 [4ULL] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)21)) < (((/* implicit */int) var_7)))))) == (var_0)));
            arr_36 [i_9] [i_9] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_7))));
        }
        for (int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            arr_40 [(_Bool)1] = ((/* implicit */int) var_4);
            arr_41 [i_1] = var_0;
        }
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [6ULL])) : (((/* implicit */int) arr_13 [i_11] [i_1]))));
            var_35 ^= ((/* implicit */signed char) var_14);
            arr_44 [(short)6] [(_Bool)1] = ((/* implicit */signed char) (+(arr_37 [i_1])));
        }
        for (int i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)108))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_53 [(unsigned char)0] [i_13] [i_13] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)112)) / (((/* implicit */int) (signed char)-4))));
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1040)) ? (arr_32 [i_1] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18615)))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_56 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-1775572684)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_55 [i_15] [i_15]))) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_15])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_38 = ((((/* implicit */long long int) 422290698)) % (arr_55 [i_15] [(signed char)2]));
            /* LoopNest 3 */
            for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_67 [10ULL] [i_16] [i_16] [(signed char)17] = ((/* implicit */signed char) ((var_14) | (var_0)));
                            var_39 += (!(((/* implicit */_Bool) -4477599578817762369LL)));
                            var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-31)) ^ (((/* implicit */int) arr_66 [i_19 - 1] [i_16] [i_17] [19] [i_19]))));
                        }
                    } 
                } 
            } 
            arr_68 [i_16] [10] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_16] [i_15] [6LL] [i_15])) ? (arr_60 [i_16] [(_Bool)0] [(unsigned char)12] [i_16]) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (signed char i_20 = 3; i_20 < 19; i_20 += 1) 
            {
                arr_71 [i_20] [(signed char)1] [i_16] [i_16] = ((/* implicit */int) (!((_Bool)1)));
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    for (unsigned short i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        {
                            arr_77 [i_16] = ((/* implicit */signed char) var_6);
                            var_41 = ((/* implicit */_Bool) (((_Bool)1) ? (arr_64 [i_20 - 3] [(unsigned short)13] [13ULL] [i_21]) : (((/* implicit */int) (unsigned char)172))));
                            var_42 = ((/* implicit */short) ((_Bool) (_Bool)0));
                            arr_78 [i_16] [i_16] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */_Bool) var_2);
                /* LoopNest 2 */
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    for (long long int i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (signed char)127))));
                            var_45 = (!(((/* implicit */_Bool) ((signed char) (_Bool)1))));
                            var_46 = ((/* implicit */signed char) ((-4190981894233505592LL) + (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            var_47 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                            arr_84 [i_16] [i_24] [(_Bool)1] [i_23] [i_24] [(short)0] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_25 = 0; i_25 < 20; i_25 += 1) 
        {
            arr_87 [(signed char)16] [(_Bool)1] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 11968588768157828918ULL))) ? (min((arr_70 [i_15] [i_25] [i_25]), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)84)) && (((/* implicit */_Bool) (short)6528))))))) : (((((/* implicit */_Bool) arr_54 [i_25])) ? (((/* implicit */int) (signed char)105)) : ((-(((/* implicit */int) (_Bool)0))))))));
            var_48 -= ((/* implicit */int) (unsigned short)65535);
            var_49 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_74 [(signed char)18])) ? (((/* implicit */int) arr_72 [i_15] [i_15] [(signed char)2] [i_15])) : (arr_64 [10] [i_15] [i_25] [i_25])))));
        }
    }
}
