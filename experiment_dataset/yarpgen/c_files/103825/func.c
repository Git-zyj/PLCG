/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103825
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) var_5))) / (((unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) var_10)), (var_6))))) && (((((_Bool) 1664910731)) || (((/* implicit */_Bool) 2064384))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_4))) | (((((/* implicit */int) ((_Bool) var_11))) << (((min((var_8), (var_8))) - (933238072)))))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((min((var_10), (var_10))) && (((/* implicit */_Bool) ((var_8) << (((((/* implicit */int) var_1)) - (31))))))))), (min((((/* implicit */unsigned short) var_11)), (var_4))))))));
                        arr_11 [(unsigned short)6] [i_1 - 1] [i_1] [10ULL] [i_1] [i_3] = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_4))))), (min((((/* implicit */long long int) var_8)), (var_5))))), (((/* implicit */long long int) ((short) max((var_16), (var_3)))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((var_0), (((/* implicit */unsigned long long int) var_2)))))));
                    }
                } 
            } 
        } 
        var_22 |= ((/* implicit */signed char) max((max((((/* implicit */int) var_9)), (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_2)) - (6638))))))), (((/* implicit */int) ((short) ((signed char) var_7))))));
        arr_12 [(_Bool)1] = ((/* implicit */unsigned long long int) ((short) ((long long int) ((long long int) var_8))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        arr_21 [3LL] [i_4 - 1] [(_Bool)1] [i_4 - 1] [3LL] = ((/* implicit */long long int) min((max((((/* implicit */int) min((((/* implicit */short) var_13)), (var_16)))), (((((/* implicit */int) var_4)) | (((/* implicit */int) var_1)))))), (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_6)))))));
                        var_23 ^= ((/* implicit */long long int) ((_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (var_5)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) > (26ULL))))) % (min((((/* implicit */unsigned long long int) -2064385)), (32767ULL))))));
                        arr_27 [i_7] = min((var_3), (((/* implicit */short) ((_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_11)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_10 = 2; i_10 < 11; i_10 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    arr_38 [i_0] [i_11] [i_0] = ((/* implicit */long long int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_10))))))));
                    var_25 = ((/* implicit */signed char) ((long long int) 2064375));
                    var_26 = ((/* implicit */unsigned int) ((unsigned short) var_15));
                }
                for (int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        arr_43 [i_0] [i_9] [i_9] [i_9] [i_9] [i_12] [i_13] = ((/* implicit */unsigned long long int) var_1);
                        arr_44 [i_0] [i_10] [i_12] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_10)))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((short) var_5));
                        arr_47 [i_0] [i_0] [i_10 - 2] [i_10 - 2] [i_12] [i_14] |= ((/* implicit */_Bool) var_4);
                    }
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        arr_51 [(_Bool)1] [(_Bool)1] [i_10 - 2] [i_12] [i_12] = ((((/* implicit */int) var_10)) << (((var_6) + (8418259707912593220LL))));
                        var_28 = ((/* implicit */short) ((var_6) - (((/* implicit */long long int) ((int) var_14)))));
                        var_29 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((short) var_16)))));
                        arr_52 [i_12] = ((/* implicit */int) var_3);
                        var_30 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) var_1)));
                    }
                    var_31 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_2))))) > (((((/* implicit */int) var_4)) | (var_8)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
                    {
                        arr_55 [i_12] [i_12] [i_10 - 1] [i_9] [i_12] = ((/* implicit */unsigned char) ((var_12) / (((/* implicit */int) ((unsigned char) var_5)))));
                        arr_56 [i_0] [i_12] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) var_0)));
                        var_32 = ((/* implicit */short) var_7);
                    }
                    for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
                    {
                        arr_59 [4] [i_12] = ((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
                        arr_60 [i_12] [4ULL] [i_10] [i_12] [i_12] [i_17] = ((/* implicit */short) ((((var_5) <= (((/* implicit */long long int) var_12)))) && (((/* implicit */_Bool) ((unsigned short) var_8)))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_14))))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
                    {
                        arr_64 [i_0] [i_9] [i_12] = ((/* implicit */unsigned long long int) var_7);
                        arr_65 [i_12] [i_12] [i_10] [i_9] [i_12] = ((short) ((unsigned char) var_12));
                        var_34 = ((/* implicit */short) ((((/* implicit */int) ((short) var_15))) << (((((/* implicit */int) ((unsigned char) var_15))) - (121)))));
                    }
                }
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 12; i_20 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) var_14);
                        arr_70 [i_0] [i_0] [i_10] = ((/* implicit */short) ((long long int) ((var_8) <= (var_8))));
                        arr_71 [i_0] [i_9] [i_10 - 1] [i_10 - 1] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))) % (var_7)));
                        arr_72 [i_0] = ((/* implicit */int) var_11);
                    }
                    for (short i_21 = 0; i_21 < 12; i_21 += 1) /* same iter space */
                    {
                        arr_77 [3] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2))))) | (((/* implicit */int) var_11))));
                        var_36 = ((/* implicit */signed char) ((short) ((var_0) | (((/* implicit */unsigned long long int) var_5)))));
                    }
                    arr_78 [i_0] = ((/* implicit */unsigned long long int) var_7);
                    var_37 = ((/* implicit */short) var_12);
                }
                for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 2) 
                {
                    arr_82 [(unsigned char)1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_10)))));
                    var_38 *= ((/* implicit */unsigned short) ((((unsigned long long int) var_16)) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (var_7))))));
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) var_6))));
                }
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned char i_24 = 1; i_24 < 10; i_24 += 2) 
                    {
                        {
                            arr_87 [i_9] [i_9] [i_24] = ((/* implicit */long long int) ((signed char) ((int) var_16)));
                            arr_88 [3U] [i_24] [4U] [i_9] [i_24] [i_0] = ((/* implicit */unsigned char) ((int) ((unsigned char) var_10)));
                            arr_89 [i_24] [(_Bool)1] [i_23] [i_24] [i_24] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_16))) | (((/* implicit */int) var_3))));
                        }
                    } 
                } 
            }
            var_40 -= ((/* implicit */unsigned char) var_16);
        }
        var_41 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_0))))), (var_2)));
    }
    for (signed char i_25 = 0; i_25 < 17; i_25 += 4) 
    {
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_1)))))) / (((/* implicit */int) var_16))));
        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-29)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))));
        var_44 *= ((/* implicit */short) var_9);
    }
}
