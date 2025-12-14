/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142012
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
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)41)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_17)) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (2147483647) : (((/* implicit */int) max((var_0), ((unsigned short)57339))))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))), ((+((-(0ULL)))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_6 [14ULL] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (18446744073709551615ULL)))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((unsigned short) min((arr_2 [i_1]), (((var_14) / (((/* implicit */int) (unsigned short)31)))))))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_14 [i_3]), (((/* implicit */unsigned long long int) arr_18 [i_2] [i_3] [i_4] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_2 [i_5]) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_9 [i_3] [i_3]))))) : (((/* implicit */int) (unsigned short)0))))) : ((+(max((((/* implicit */long long int) arr_4 [i_2])), (var_12)))))));
                        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_14)))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) * (18446744073709551615ULL)))) : (((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_4] [i_5]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [i_2] [i_6 + 2] [i_4] [i_4] [(unsigned char)8] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_16 [i_2] [i_6 - 2] [10LL] [10LL] [i_2] [i_3]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((13286236999928963910ULL), (0ULL)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (unsigned short)28958)))) : (((/* implicit */int) arr_20 [i_6] [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 2])))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned char)2))))) * (((((/* implicit */_Bool) 174669900)) ? (((/* implicit */unsigned long long int) arr_17 [i_2] [i_4] [i_5] [i_6 + 1])) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_20 [i_2] [i_6] [i_6 + 1] [i_6] [i_6 + 2] [i_6] [i_6 - 2])))))));
                            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)25262))) < (((((/* implicit */int) (unsigned short)36577)) & (((/* implicit */int) (unsigned short)12071)))))))));
                            arr_22 [i_3] = ((/* implicit */int) min(((unsigned short)29993), (((/* implicit */unsigned short) (!(arr_18 [i_2] [i_3] [i_6 + 2] [i_3]))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_25 [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)28958), (((/* implicit */unsigned short) arr_5 [i_2] [i_3]))))) + (((/* implicit */int) var_9))));
                            var_27 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)210)))) || (((/* implicit */_Bool) min((arr_24 [i_3] [i_3] [i_3] [i_5] [i_7] [i_3] [i_5]), (((/* implicit */unsigned int) (unsigned short)0)))))));
                            var_28 = ((/* implicit */int) max((min((18446744073709551615ULL), (var_7))), (((/* implicit */unsigned long long int) ((unsigned short) arr_16 [i_2] [i_2] [i_4] [i_7] [i_7] [i_3])))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((_Bool) arr_8 [i_4] [i_4])) ? (max(((+(1064741590))), (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_10 [i_3]))))))) : (((((/* implicit */int) arr_7 [i_2])) - (((/* implicit */int) arr_7 [i_2]))))));
                            arr_28 [i_3] [(unsigned short)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_12 [i_2] [i_2] [i_5])))) ? (min((((/* implicit */unsigned long long int) var_2)), (arr_12 [i_3] [i_5] [i_8]))) : (max((arr_12 [i_2] [i_5] [i_8]), (arr_12 [i_2] [i_5] [i_8])))));
                            arr_29 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_4] [i_3] [i_8] = var_7;
                        }
                    }
                } 
            } 
        } 
        var_30 -= ((/* implicit */unsigned int) ((min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)28958)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (0LL))))));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_31 [i_9])) < (((/* implicit */int) arr_31 [i_9]))))), (arr_31 [i_9])));
        var_32 *= ((/* implicit */unsigned char) var_14);
    }
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        var_33 = arr_35 [i_10] [i_10];
        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)178))))), (arr_35 [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (arr_35 [(_Bool)1] [i_10])))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))));
        arr_36 [18] [i_10] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) var_12)) : (max((max((var_11), (((/* implicit */unsigned long long int) (unsigned char)210)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_10] [i_10])) != (((/* implicit */int) arr_32 [i_10])))))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        var_35 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1837599076), (((/* implicit */int) arr_39 [i_10] [i_11] [i_12] [i_13]))))) ? (((/* implicit */int) ((short) -1LL))) : ((-(arr_38 [i_10] [i_12] [i_13])))));
                        var_36 = ((/* implicit */unsigned short) ((((_Bool) arr_42 [i_10] [i_11] [i_12] [i_13])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_12])) ? (((/* implicit */int) arr_32 [i_12])) : (arr_35 [i_10] [i_11]))))));
                    }
                    var_37 = ((/* implicit */_Bool) min((((unsigned int) arr_33 [i_11] [i_11])), (((/* implicit */unsigned int) min((arr_38 [i_10] [i_11] [i_12]), (arr_38 [i_10] [i_11] [(_Bool)1]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_14 = 2; i_14 < 16; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 3) 
            {
                {
                    var_38 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_14]))) ? (((((/* implicit */int) arr_33 [i_15 + 1] [i_14 - 1])) + (((/* implicit */int) arr_46 [i_14 + 1] [i_15 + 2])))) : (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_39 [i_10] [(unsigned char)4] [i_15 + 4] [i_15])) : (((/* implicit */int) (unsigned short)36578)))) | (((/* implicit */int) arr_37 [i_10] [i_14] [(unsigned char)16]))))));
                    var_39 = ((/* implicit */_Bool) arr_43 [i_10]);
                    arr_48 [i_10] = ((/* implicit */unsigned int) min((max((arr_44 [i_14 + 1] [i_15 - 1]), (arr_44 [i_14 - 1] [i_15 - 1]))), (arr_39 [(unsigned char)7] [(unsigned char)7] [i_14 + 1] [i_15])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_16 = 2; i_16 < 23; i_16 += 2) 
    {
        arr_51 [i_16] [i_16] = ((((/* implicit */_Bool) var_7)) ? (arr_49 [i_16 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
        /* LoopNest 3 */
        for (unsigned char i_17 = 2; i_17 < 22; i_17 += 2) 
        {
            for (unsigned short i_18 = 0; i_18 < 24; i_18 += 4) 
            {
                for (unsigned char i_19 = 4; i_19 < 21; i_19 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)210))));
                            var_41 |= (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) arr_55 [i_16 - 1])))));
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1064741590)) ? (((/* implicit */int) arr_56 [i_16] [i_17] [i_19 + 1] [i_16] [i_19] [i_16])) : (-1064741590)));
                            var_43 &= ((/* implicit */unsigned int) 0ULL);
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (unsigned short)36578))));
                            var_45 = ((/* implicit */unsigned short) (-(arr_62 [i_16 - 1] [i_16 + 1] [i_17 + 1] [i_19] [i_19 - 3])));
                            arr_66 [i_19] [i_18] = ((/* implicit */unsigned char) ((_Bool) (unsigned short)28958));
                            var_46 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)45))))));
                            var_47 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1064741590)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)65535)))) - (((/* implicit */int) ((unsigned short) var_16)))));
                        }
                        for (int i_22 = 0; i_22 < 24; i_22 += 3) 
                        {
                            arr_70 [i_19] [i_19] [i_19 + 3] = ((/* implicit */_Bool) var_16);
                            arr_71 [i_19] [i_19 + 1] [i_16 - 2] [i_19] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [i_16 - 2] [i_19 + 2])) / (((/* implicit */int) arr_52 [i_16 - 2] [i_19 - 3]))));
                        }
                        var_48 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1064741590)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147))))))));
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) 18446744073709551615ULL))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_23 = 2; i_23 < 22; i_23 += 4) 
    {
        arr_74 [i_23] = ((/* implicit */unsigned long long int) var_17);
        /* LoopNest 2 */
        for (unsigned char i_24 = 0; i_24 < 24; i_24 += 3) 
        {
            for (short i_25 = 1; i_25 < 23; i_25 += 3) 
            {
                {
                    arr_82 [i_24] [i_23] [i_24] = ((/* implicit */unsigned short) min((((7846694969825700988ULL) * (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_17)))))), (((/* implicit */unsigned long long int) ((var_11) < (((/* implicit */unsigned long long int) arr_62 [i_23 + 1] [i_23] [i_23 + 1] [i_24] [i_25 - 1])))))));
                    var_50 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)116)) || (((/* implicit */_Bool) max((arr_57 [i_23] [i_23] [i_24] [i_25 + 1] [i_25]), (arr_57 [i_23] [i_23] [i_23] [i_25 - 1] [i_23]))))));
                }
            } 
        } 
    }
}
