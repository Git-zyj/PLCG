/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148315
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */long long int) ((unsigned char) (unsigned short)40918));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] [i_1] [i_2] [i_3 + 1] [i_1 - 2] [i_2] = ((/* implicit */unsigned char) arr_11 [i_2]);
                        arr_14 [i_2] = ((/* implicit */short) arr_0 [i_0]);
                        arr_15 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned short) arr_5 [i_0 - 1] [i_3 + 1]));
                        var_13 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 - 1] [i_2])) ? (((/* implicit */int) ((unsigned short) arr_11 [i_2]))) : (((((/* implicit */_Bool) 3205198412U)) ? (((/* implicit */int) (unsigned short)45225)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 16; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (int i_7 = 3; i_7 < 16; i_7 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_0 + 1] [i_0] [i_5 + 1] [i_6] [i_5] [i_7] = ((/* implicit */long long int) ((_Bool) min(((+(1089768872U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_11 [i_5])) : (((/* implicit */int) (unsigned short)41795))))))));
                                arr_27 [i_0] [i_4] [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) arr_24 [i_0 - 1] [i_5 + 1] [i_7 - 2] [i_7] [i_7])));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_0 - 1] [i_0 - 1] [i_5 + 1] [i_6] [i_7 - 3])), (arr_10 [i_0] [i_5] [i_0 + 1] [i_7 - 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0 - 1])) ? (arr_1 [i_5 + 1]) : (arr_1 [i_5 + 2])))) : (((((/* implicit */_Bool) (unsigned short)20329)) ? (min((((/* implicit */unsigned long long int) (unsigned short)24639)), (2874255726484837487ULL))) : (((/* implicit */unsigned long long int) var_6))))));
                                var_15 = ((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0 - 1]);
                            }
                        } 
                    } 
                    var_16 ^= var_3;
                    arr_28 [i_5] = min((((((/* implicit */_Bool) (-(-2154659832616075494LL)))) ? (((arr_21 [i_5]) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) 3906286828U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_0] [i_5] [i_0 - 1] [11LL]) <= (arr_10 [i_0] [i_5] [i_5] [i_5]))))))), (min((((((/* implicit */_Bool) (unsigned short)51963)) ? (16951653610830400468ULL) : (((/* implicit */unsigned long long int) arr_18 [i_0])))), (arr_16 [i_5]))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) (unsigned short)10275)), (var_2)))))));
    /* LoopSeq 2 */
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        var_18 += ((/* implicit */short) ((unsigned char) max((arr_29 [i_8] [i_8]), (arr_30 [i_8]))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        for (long long int i_12 = 2; i_12 < 21; i_12 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_42 [i_11] [i_10] [i_8] [i_8]), (((/* implicit */int) (unsigned char)204))))), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)));
                                arr_43 [i_11] [i_9] [i_10] [i_11] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_3)), (arr_30 [i_12 + 1]))), (((/* implicit */unsigned long long int) ((long long int) arr_30 [i_12 - 1])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) max((max((var_2), (((/* implicit */unsigned long long int) arr_34 [i_8] [i_8])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_41 [i_8] [i_10])) - (((long long int) arr_29 [i_8] [i_9])))))));
                    arr_44 [i_8] [i_8] [i_8] = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252)))))) : (min((((/* implicit */unsigned int) arr_37 [i_8])), (arr_34 [i_8] [(_Bool)1])))))), (((arr_30 [i_9]) / (arr_30 [i_8]))));
                    var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((unsigned short) var_8)), (((/* implicit */unsigned short) arr_37 [i_8]))))), (((int) min((var_9), (((/* implicit */unsigned char) var_12)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) ((unsigned short) arr_30 [(short)7]))), (((long long int) 16951653610830400472ULL))))))));
    }
    for (long long int i_13 = 2; i_13 < 21; i_13 += 2) 
    {
        var_23 ^= ((/* implicit */unsigned char) max((max(((~(var_2))), (((/* implicit */unsigned long long int) arr_46 [i_13] [i_13])))), (((/* implicit */unsigned long long int) var_4))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4699441656535247345LL)) ? (((/* implicit */int) arr_46 [i_13 + 2] [i_13 + 2])) : (((/* implicit */int) arr_46 [i_13 + 1] [i_13 + 1]))))) ? (max((min((((/* implicit */unsigned int) arr_45 [i_13 + 1] [i_13 + 1])), (3457040671U))), (((/* implicit */unsigned int) arr_45 [i_13 + 1] [i_13])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned short)55764))) < ((~(var_10)))))))));
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned short) min((var_9), ((unsigned char)3)))), (((unsigned short) arr_45 [i_13] [i_13 + 1]))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (short i_15 = 0; i_15 < 23; i_15 += 1) 
            {
                for (long long int i_16 = 4; i_16 < 20; i_16 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (min((min((((/* implicit */unsigned long long int) (short)-1650)), (1495090462879151156ULL))), (((/* implicit */unsigned long long int) max((arr_49 [i_16 - 3] [i_13 - 2]), (arr_49 [i_16 + 3] [i_13 + 2]))))))));
                        var_27 *= ((/* implicit */unsigned short) 1089768880U);
                        var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((int) arr_47 [i_13 + 2]))), (min((((/* implicit */unsigned long long int) arr_52 [i_14] [i_14] [i_14] [i_15] [i_16 + 1])), (arr_47 [i_13 - 2])))));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_46 [i_15] [i_16])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_17 = 1; i_17 < 21; i_17 += 2) 
        {
            for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                for (unsigned int i_19 = 0; i_19 < 23; i_19 += 2) 
                {
                    {
                        arr_60 [i_13 + 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL))))) <= (max((((((/* implicit */_Bool) arr_55 [i_13] [i_17] [i_18])) ? (arr_50 [i_19] [i_17 + 1] [i_18] [i_19]) : (((/* implicit */long long int) 3457040664U)))), (arr_52 [i_13] [i_13 + 1] [i_17] [i_13 + 1] [i_19])))));
                        arr_61 [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_52 [i_18] [i_17] [i_18] [i_18] [i_19])))));
                        var_30 -= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((int) (unsigned char)252))), (arr_54 [i_17 - 1] [i_13 + 1] [i_13 - 2]))), (((/* implicit */long long int) (+((~(((/* implicit */int) arr_57 [i_13] [i_17] [i_18])))))))));
                    }
                } 
            } 
        } 
    }
}
