/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156121
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (7)))) : (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) * (var_3))) < (min((var_6), (((/* implicit */long long int) 7))))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            arr_5 [2ULL] [i_1] = ((/* implicit */unsigned int) (~(((5708516515605344129LL) << (((3) - (3)))))));
            var_17 = ((/* implicit */short) var_6);
            /* LoopNest 3 */
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((var_14) / (((/* implicit */int) arr_1 [(short)12] [i_1])))))))));
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) >= (-7)));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */int) ((((((18446744073709551611ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762))))) >> (((min((((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (-32))) + (86))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_14)))), ((!(((/* implicit */_Bool) var_13))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */short) ((((var_14) | (((/* implicit */int) var_11)))) <= (((((/* implicit */int) arr_13 [i_6])) >> (((var_6) + (2083462137815089095LL)))))));
                            var_22 = ((arr_2 [i_0 + 1] [i_0 + 2]) - (((/* implicit */int) var_2)));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(7)))) ? (((/* implicit */int) ((31) == (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0]))))) : (31))))));
                        }
                        for (signed char i_9 = 1; i_9 < 19; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_9 [i_9 - 1] [i_7] [i_5] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))) : (10204565101894267399ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_8)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            var_25 -= ((/* implicit */_Bool) (-(0LL)));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 3; i_10 < 20; i_10 += 4) 
                        {
                            arr_33 [i_0] [i_0 - 4] [i_0] [i_0 - 2] [i_0] [i_6] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_10])) != (8242178971815284224ULL)))) > (max((((/* implicit */int) (signed char)76)), (-29))))))));
                            var_26 &= ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_28 [i_5] [i_0] [i_0] [i_5] [i_6] [i_5] [i_10])), (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_0 - 3] [i_6])) ^ (((/* implicit */int) arr_16 [i_5] [i_0 + 1] [19LL])))))));
                            arr_34 [i_0] [16ULL] [i_6] [i_7] [i_6] [i_10] = ((/* implicit */int) var_4);
                            var_27 = ((/* implicit */unsigned short) ((var_6) == (((/* implicit */long long int) (((-(((/* implicit */int) (short)17158)))) / (((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_6] [i_6] [(short)11] [i_5] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_25 [i_0] [i_6] [i_0] [i_0] [i_0])))))))));
                        }
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
                        {
                            arr_39 [i_0] [i_5] [i_6] [2U] [i_6] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_11])) | (((/* implicit */int) (signed char)-12))))), (((2479517005661902506LL) & (((/* implicit */long long int) -1527275684))))))));
                            arr_40 [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((var_8) << (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_37 [i_0 + 2] [i_5] [i_6] [9ULL] [i_11]))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((max((((((/* implicit */int) var_10)) - (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_38 [i_11] [i_7] [i_5] [i_6] [i_5] [i_0])) : (((/* implicit */int) var_1)))))), ((~(((/* implicit */int) (unsigned short)65530)))))))));
                        }
                        for (long long int i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) 262112U)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-7408))))) : (85205757U))))))));
                            var_30 = ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (-28)));
                            arr_43 [i_0] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */signed char) arr_14 [i_5]);
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */short) (~(2)));
        }
        arr_44 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-55))));
    }
    for (signed char i_13 = 4; i_13 < 19; i_13 += 1) /* same iter space */
    {
        var_32 *= ((/* implicit */_Bool) var_14);
        var_33 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_15) <= (((/* implicit */long long int) 0U)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) / (arr_10 [i_13 - 2] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_8 [i_13 + 2] [i_13]))))) != (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)10394))))))))));
    }
    /* vectorizable */
    for (signed char i_14 = 4; i_14 < 19; i_14 += 1) /* same iter space */
    {
        arr_51 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (31952345680154816LL)))) ? (var_6) : (var_15)));
        arr_52 [i_14] = ((/* implicit */short) ((((/* implicit */long long int) var_14)) * (((arr_14 [i_14]) / (((/* implicit */long long int) arr_36 [i_14] [(short)12] [i_14] [i_14 - 3] [i_14]))))));
        arr_53 [i_14] [i_14] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned short i_16 = 1; i_16 < 17; i_16 += 4) 
            {
                for (short i_17 = 1; i_17 < 18; i_17 += 1) 
                {
                    {
                        var_34 = ((/* implicit */short) (+(((/* implicit */int) arr_27 [i_14 + 1] [i_15] [i_17] [(signed char)18] [i_16]))));
                        arr_63 [i_14] [i_15] [i_14] [i_17] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (67108863LL)))));
                    }
                } 
            } 
        } 
    }
    var_35 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)131), (((/* implicit */unsigned char) (signed char)127)))))) : (var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_18 = 3; i_18 < 15; i_18 += 1) 
    {
        arr_67 [i_18] [i_18] = ((/* implicit */int) (+((~(var_0)))));
        /* LoopSeq 1 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_75 [i_18] [(_Bool)1] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1755953253)) ? (((/* implicit */int) (unsigned short)49676)) : (((/* implicit */int) (_Bool)1))));
                var_36 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)9)) ^ (1755953253))) == (((/* implicit */int) (unsigned short)11484))));
            }
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_18 + 1] [i_18 - 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49676))))))));
            arr_76 [i_18 - 3] [i_19] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_8 [i_18] [i_18])) : (((/* implicit */int) arr_8 [i_18] [5ULL]))));
        }
    }
}
