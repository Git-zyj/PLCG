/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170069
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -2277800628491650924LL)) == (6230157358462801509ULL)));
                var_18 = ((/* implicit */_Bool) ((((arr_5 [i_1 - 1] [i_1 + 3] [i_2 + 1] [i_2 - 1]) + (2147483647))) >> (((arr_5 [i_1 + 1] [i_1 - 3] [i_2 - 1] [i_2 + 1]) + (1698531738)))));
                arr_6 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((unsigned long long int) 2712848586U)) < (((/* implicit */unsigned long long int) -1LL))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1621091374687063718ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (475913928U)))) & (arr_0 [i_0]))))));
                arr_7 [i_2 - 1] [(unsigned char)4] [i_1 - 3] [3U] = ((/* implicit */int) (~(arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_1 - 1])));
            }
            var_20 = ((/* implicit */short) arr_4 [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                var_21 = ((/* implicit */_Bool) var_10);
                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) < ((-(((/* implicit */int) (unsigned short)13329))))));
            }
        }
        for (long long int i_4 = 3; i_4 < 9; i_4 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */short) min((var_23), (min((((short) (!(((/* implicit */_Bool) var_15))))), (((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) - (var_0)))))))));
            var_24 = ((/* implicit */unsigned char) ((unsigned long long int) 1582118721U));
            var_25 = ((/* implicit */int) min(((((_Bool)0) ? (min((var_1), (((/* implicit */unsigned int) (unsigned char)99)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32759))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_10))) << (((/* implicit */int) ((2692044794279035762ULL) < (((/* implicit */unsigned long long int) arr_10 [i_0]))))))))));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 1361859593U)), (16825652699022487897ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))))))) - (min((101459044U), (((/* implicit */unsigned int) ((((/* implicit */long long int) 4193508246U)) > (0LL)))))))))));
            var_27 += ((/* implicit */unsigned short) min((((arr_8 [i_4 - 1] [9U]) || (((/* implicit */_Bool) arr_2 [i_4 + 2] [5U])))), (((((/* implicit */int) arr_12 [i_4 - 3] [i_4 - 2] [i_4 - 2])) != (((/* implicit */int) min(((short)-32764), (((/* implicit */short) var_15)))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) var_0))) >= (340631118453707447ULL))))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1936485690)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) : (min((16825652699022487898ULL), (((/* implicit */unsigned long long int) 4193508246U)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_5] [i_0]))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 1; i_7 < 11; i_7 += 4) 
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((((((/* implicit */_Bool) arr_15 [i_7] [i_7 - 1] [i_7])) ? (arr_15 [i_0] [i_7 - 1] [(short)10]) : (arr_15 [i_6] [i_7 - 1] [i_6]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))))));
                        arr_22 [i_7] [i_5] [(signed char)0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 4294705152U)), (((arr_13 [i_0]) + (((/* implicit */unsigned long long int) var_7)))))) != (((/* implicit */unsigned long long int) ((min((var_0), (((/* implicit */long long int) (_Bool)1)))) ^ (((/* implicit */long long int) arr_17 [i_0] [i_0])))))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        arr_26 [i_0] = ((((/* implicit */int) ((((/* implicit */long long int) (-(101459069U)))) == (arr_20 [(short)1] [i_5] [i_6] [(short)10] [i_0])))) / (((/* implicit */int) ((short) var_3))));
                        arr_27 [i_8] [i_6] [i_6] [(unsigned char)5] [10LL] = ((/* implicit */short) var_7);
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)249)), (-375621817)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)45390)) : (((/* implicit */int) var_6))))) : (min((arr_3 [i_8 + 1] [i_0]), (((/* implicit */long long int) (unsigned short)31394)))))))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((9050361221051754624ULL), (((/* implicit */unsigned long long int) (unsigned char)142))));
                        var_33 = ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)123))));
                        var_34 = ((/* implicit */long long int) ((unsigned long long int) 2933107703U));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        for (int i_13 = 4; i_13 < 10; i_13 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) -5438597283572595294LL)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17687))) : (16449702065113963838ULL)))))));
                                arr_40 [i_10] [i_10] [i_11] [(unsigned short)3] [i_11] [4ULL] [i_13] = ((unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) < (arr_0 [i_0])));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_15 [1LL] [i_10] [(short)2]) / (min((15383884335759230044ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [(_Bool)1] [i_11])))))));
                }
            } 
        } 
        arr_41 [i_0] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >> ((((+(var_10))) - (2595866964U))));
    }
    for (signed char i_14 = 1; i_14 < 24; i_14 += 1) 
    {
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(min((var_14), (((/* implicit */int) (short)-9811))))))) + (((((var_2) % (10810862781281824578ULL))) | (((/* implicit */unsigned long long int) ((int) 2933107703U))))))))));
        arr_45 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((15798425090345037157ULL) << (((((((/* implicit */_Bool) 154640346U)) ? (((/* implicit */int) (short)32017)) : (((/* implicit */int) (unsigned short)34133)))) - (31983)))))) && (((/* implicit */_Bool) ((((((/* implicit */int) (short)-2048)) + (2147483647))) << (((var_0) - (1490379962779225601LL))))))));
        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)44)) ? (var_2) : (((/* implicit */unsigned long long int) arr_43 [i_14]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1108948773083587771ULL))))) : (((/* implicit */int) ((min((var_16), (((/* implicit */unsigned int) var_7)))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_14] [7U]))))))));
    }
    for (short i_15 = 0; i_15 < 17; i_15 += 4) 
    {
        var_39 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((min((((/* implicit */unsigned long long int) var_14)), (17313937655164654385ULL))) - (1992561089ULL)))))) < (arr_44 [i_15] [i_15])));
        arr_49 [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) (unsigned char)0))))) != (((((/* implicit */_Bool) min(((unsigned char)242), (((/* implicit */unsigned char) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-8902)))))) : (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) 3247103310U))))))));
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
            {
                {
                    var_40 = ((/* implicit */int) var_6);
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 4) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 2) 
                        {
                            {
                                arr_61 [i_15] [i_16] [i_16] [i_17] [i_16] [i_18] [(signed char)11] = ((/* implicit */_Bool) min((arr_60 [i_18]), (((/* implicit */long long int) (~((~(((/* implicit */int) var_6)))))))));
                                var_41 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
                    {
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (~(((/* implicit */int) var_11)))))));
                        var_43 = ((/* implicit */int) var_16);
                    }
                    arr_64 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_54 [i_15] [6LL] [i_17])))));
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned short) min((110017809649501452ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) == (min(((-2147483647 - 1)), (585001698))))))));
    var_45 &= ((/* implicit */unsigned long long int) (+(min((2425543181252113841LL), (766025355668737646LL)))));
}
