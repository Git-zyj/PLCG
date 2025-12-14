/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164802
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
        var_18 = ((/* implicit */int) (+(var_6)));
    }
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((285978576338026496LL), (((/* implicit */long long int) (unsigned short)0)))))));
        var_19 ^= ((/* implicit */unsigned long long int) (unsigned short)31715);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (_Bool)1))));
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) ((unsigned char) -1905420452)))), (1268826045)));
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        arr_18 [i_4] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -285978576338026509LL)) ? (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) : (262143U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (_Bool)0)))))))), (((/* implicit */unsigned int) var_3))));
                        var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 285978576338026532LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (min((9147434063249854505LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)253)))))))) : (min((((((/* implicit */unsigned long long int) 285978576338026508LL)) * (arr_15 [i_2] [i_3] [i_4]))), (arr_15 [i_5] [i_4] [i_4])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((239951832U), (((/* implicit */unsigned int) arr_13 [i_5 + 1] [i_6 + 1] [i_6] [i_6])))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_4]) : (max((max((((/* implicit */unsigned long long int) (unsigned char)140)), (var_6))), (((/* implicit */unsigned long long int) ((_Bool) 15265971943426790753ULL))))))))));
                            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1]))) : (((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1])) ? (-3964555302977188044LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */int) -285978576338026526LL);
            var_27 = ((/* implicit */unsigned char) var_9);
        }
    }
    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        var_28 = ((/* implicit */int) var_8);
        arr_23 [i_7] = ((/* implicit */unsigned long long int) max((((unsigned int) arr_0 [i_7 - 1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_7 - 1])) : (((/* implicit */int) (signed char)104)))))));
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            arr_26 [i_8] [i_8] [i_7 + 1] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((7600513519513495485ULL), (((/* implicit */unsigned long long int) arr_0 [i_7 - 1]))))) && (((/* implicit */_Bool) ((signed char) var_3))))) ? (((unsigned long long int) -3964555302977188048LL)) : (((((/* implicit */_Bool) arr_13 [i_7] [i_7] [11ULL] [i_8])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_29 = max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8]))) != (arr_12 [i_7] [i_8] [i_10])))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_6))))), (((/* implicit */unsigned long long int) arr_28 [i_7 + 1])));
                        arr_32 [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-(arr_30 [i_9])))) ? (((/* implicit */int) (unsigned char)102)) : ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_7])))))), (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_22 [i_7] [i_8]))))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 9223372036854775786LL)) ? (arr_8 [i_7 + 1]) : (arr_8 [i_7 + 1]))), (((/* implicit */unsigned long long int) ((var_9) ? (((285978576338026532LL) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8]))))) : (((/* implicit */long long int) (+(arr_3 [i_7] [i_8])))))))));
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_8)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (3180772130282760863ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_29 [i_7])))))) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_13 [i_7 - 1] [i_8] [i_8] [i_7]))))))) : (max((((/* implicit */unsigned long long int) var_10)), (((arr_12 [i_7] [i_8] [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8] [i_8])))))))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 1; i_11 < 8; i_11 += 1) 
        {
            var_32 = ((/* implicit */unsigned long long int) ((arr_14 [i_11 + 2] [i_11 + 1]) * (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            var_33 |= ((/* implicit */unsigned short) (((-(1088820014U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned char)10])))));
            var_34 = ((/* implicit */_Bool) arr_29 [i_7]);
            var_35 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_7 + 1])) | (((/* implicit */int) var_9))));
            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) 231990524))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            var_37 = ((/* implicit */unsigned char) max((var_37), (var_13)));
            var_38 = ((/* implicit */unsigned int) ((max((16480967315100828412ULL), (7600513519513495485ULL))) / (((/* implicit */unsigned long long int) (+(2626463345473007842LL))))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            var_39 ^= ((/* implicit */int) (!(((((/* implicit */int) (((-2147483647 - 1)) < (1500717565)))) != (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)33)), (var_11))))))));
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7 - 1] [2U] [2U]))) : (1962040069U)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208))) : (var_6))) : (arr_30 [i_7 - 1])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_13] [i_13])) ? (var_4) : (-3978180624788009942LL)))), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_42 [i_7]) : (((/* implicit */long long int) 651912928U)))))));
            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_7] [2LL] [i_7 + 1]))) : (arr_36 [i_7 - 1] [(_Bool)1])))) - (max((arr_42 [(_Bool)1]), (((/* implicit */long long int) arr_36 [i_7 - 1] [(_Bool)0])))))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_46 [3] [i_14] [i_7] = ((/* implicit */int) (unsigned char)6);
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_15 = 1; i_15 < 8; i_15 += 4) 
            {
                arr_51 [i_7 + 1] [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_14] [i_15 + 1] [i_7 - 1]))) : (((((/* implicit */_Bool) -9147434063249854526LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 819720547U)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_10))) >> ((((+(((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_14] [(unsigned char)13] [i_7] [(_Bool)1])))) - (25436)))));
                arr_52 [i_7] [i_15] = ((/* implicit */int) ((((/* implicit */int) arr_49 [i_7 - 1] [i_15 + 2])) >= (((/* implicit */int) arr_49 [i_7 - 1] [i_15 + 2]))));
            }
            /* vectorizable */
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                arr_55 [i_7 + 1] [i_7] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)7);
                var_43 += (unsigned char)0;
            }
            arr_56 [2ULL] |= ((/* implicit */unsigned int) arr_29 [i_14]);
        }
        var_44 ^= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((6992326477303182812LL) - (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 2332927227U)) : (-7054715923477429506LL))) : (min((((/* implicit */long long int) var_13)), (arr_24 [i_7] [i_7 - 1]))))));
    }
    var_45 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))), (var_8))) != (((/* implicit */unsigned long long int) max((var_10), (max((((/* implicit */long long int) var_9)), (var_4))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 3) 
    {
        var_46 = ((/* implicit */_Bool) max((var_46), (((819720547U) <= (((((/* implicit */_Bool) 10231329304177946077ULL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_17] [i_17])))))))));
        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)4908))) ? (((/* implicit */int) arr_58 [i_17] [i_17])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
    }
    for (int i_18 = 2; i_18 < 14; i_18 += 3) 
    {
        var_48 = ((/* implicit */long long int) (~(max((((/* implicit */int) var_3)), ((((_Bool)0) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)5))))))));
        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((unsigned short) max((arr_61 [i_18 - 1] [i_18 + 1]), (arr_61 [i_18 - 1] [i_18 + 1])))))));
        var_50 = ((/* implicit */_Bool) max((max((min((var_4), (((/* implicit */long long int) arr_59 [i_18] [i_18])))), (((/* implicit */long long int) ((unsigned short) (unsigned char)125))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (arr_60 [i_18]))))));
    }
}
