/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11452
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
    var_18 ^= ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((max((min((arr_1 [i_0] [(short)2]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) var_0)))), (((long long int) max((((/* implicit */long long int) 2405425185U)), (arr_1 [0ULL] [i_0])))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) min((((5993727296002668675ULL) % (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        var_21 = ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_5 [14U] [8LL])))) || (((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 2])));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((/* implicit */int) arr_20 [i_5] [i_6 - 1] [i_6 + 1] [4] [(_Bool)0] [i_6])))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))) + (6882018410183692937LL)));
                                var_24 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_6])) == (((/* implicit */int) (_Bool)1)))) ? (arr_18 [i_6] [i_3 - 2] [6ULL] [i_3 + 1] [i_3 + 2]) : (((/* implicit */long long int) arr_8 [(_Bool)1] [i_6 + 1]))));
                                arr_21 [i_2] [i_3] [i_4] [4ULL] [i_6] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_11)))));
                                arr_22 [i_2] [i_4] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_2 + 1] [(unsigned char)5] [i_4] [i_5])) ? (arr_12 [i_2] [i_3] [i_2] [i_5]) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (unsigned char)39))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) ((arr_3 [i_2] [i_2 - 2] [i_2]) >= (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_4])))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_10 [i_2] [i_2]))));
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_27 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (((2392906871466677890LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)217))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 2; i_9 < 12; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) ((unsigned short) arr_12 [3LL] [i_2 + 1] [i_2 - 2] [i_9]));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (+(((((/* implicit */int) (unsigned char)23)) - (((/* implicit */int) (_Bool)1)))))))));
                            var_30 = ((/* implicit */_Bool) -1451863704);
                        }
                        arr_37 [i_2 + 2] [i_7] [(signed char)1] [i_2 + 2] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6537814284109645254ULL)) ? (arr_33 [i_7] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    var_31 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [8ULL] [9] [i_8])) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) arr_32 [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_7] [i_7 - 1] [i_8])) + (138))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) var_3))));
        var_33 &= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)9] [i_11] [i_11]))) : (3553352680294261131ULL))));
        /* LoopSeq 4 */
        for (long long int i_12 = 1; i_12 < 8; i_12 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_12))))));
            arr_46 [i_11] [(unsigned short)5] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_12 + 1] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12] [i_12])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_11] [i_11] [i_12 + 3])) || (((/* implicit */_Bool) 4471626906487042948LL)))))));
            arr_47 [i_11] = ((/* implicit */unsigned char) ((arr_12 [i_11] [i_11] [i_12] [i_12 + 3]) == (arr_12 [i_12 + 1] [i_12 + 1] [i_11] [i_11])));
            arr_48 [i_12] [i_12] = ((/* implicit */unsigned char) -6882018410183692915LL);
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                for (int i_15 = 1; i_15 < 10; i_15 += 3) 
                {
                    for (int i_16 = 1; i_16 < 9; i_16 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) 11908929789599906345ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_11] [(signed char)0] [i_14] [i_14] [i_16])) ? (arr_4 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                            arr_59 [i_11] [i_16 - 1] = ((/* implicit */long long int) arr_40 [i_11] [i_11]);
                        }
                    } 
                } 
            } 
            arr_60 [i_11] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_11] [i_13] [i_11])) ? (((/* implicit */int) arr_17 [i_11] [i_11])) : (((/* implicit */int) arr_17 [i_11] [i_13]))));
            /* LoopNest 2 */
            for (long long int i_17 = 3; i_17 < 10; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 4; i_18 < 10; i_18 += 3) 
                {
                    {
                        var_36 |= ((/* implicit */unsigned short) (~(((unsigned long long int) 2392906871466677886LL))));
                        var_37 = ((unsigned long long int) arr_23 [i_18 - 1] [i_17 - 1] [(unsigned short)8]);
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned int) ((18446744073709551608ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207)))));
        }
        for (unsigned char i_19 = 2; i_19 < 10; i_19 += 4) 
        {
            var_39 = ((/* implicit */long long int) ((((/* implicit */int) arr_68 [i_19 - 1])) >= (((/* implicit */int) arr_68 [i_19 - 2]))));
            var_40 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_64 [i_19 - 2] [i_19] [i_19] [i_11])) / (((/* implicit */int) arr_62 [i_19 - 1] [(unsigned short)3] [(unsigned short)6] [i_19]))));
        }
        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 2) 
        {
            arr_71 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) == (arr_40 [(_Bool)1] [i_20])))) < (((/* implicit */int) arr_17 [i_11] [i_20]))));
            var_41 &= ((/* implicit */signed char) ((((/* implicit */long long int) arr_12 [i_11] [i_11] [i_11] [i_11])) <= (-6882018410183692920LL)));
        }
        var_42 = ((/* implicit */_Bool) (((~(arr_50 [i_11] [i_11]))) << (((((/* implicit */int) ((unsigned char) arr_13 [i_11] [i_11] [i_11] [i_11]))) - (211)))));
    }
}
