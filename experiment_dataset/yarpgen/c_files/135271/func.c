/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135271
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
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 1]))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : ((+(((/* implicit */int) arr_3 [i_0 - 1]))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) arr_1 [i_1]))));
            arr_7 [i_0] = arr_0 [i_0 + 1];
            /* LoopSeq 1 */
            for (signed char i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    for (int i_4 = 4; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_21 += ((int) (-9223372036854775807LL - 1LL));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_4 - 4])) != (((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_2 - 3] [i_3]))));
                            var_23 = ((/* implicit */signed char) arr_5 [i_0] [i_3] [i_4 - 1]);
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) -1068867991)) ? (1068867990) : (((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (-1068868004))));
            }
        }
        var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_0])))) > (((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2])) : (arr_10 [i_0 - 1] [i_0 + 1])))));
    }
    for (short i_5 = 4; i_5 < 17; i_5 += 3) 
    {
        var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 4] [i_5 + 3])) ? (((/* implicit */int) arr_8 [i_5 + 2] [i_5 + 1] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_5 - 1])), ((short)-8133)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_5 + 3] [(short)10] [i_5 - 1] [(short)10] [i_5 - 2]))))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (1428912796) : (max((1068867967), (-1068867999)))))) ? (min((var_4), (1068867955))) : (-1428912782)));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            arr_25 [i_6] [i_6] = ((/* implicit */_Bool) arr_21 [i_6] [i_6]);
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((var_17) ? (((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_14 [(signed char)10] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) arr_10 [i_6] [i_7])) ? (((/* implicit */int) arr_18 [i_6] [i_7])) : (((/* implicit */int) var_5)))))))));
        }
        var_28 = ((/* implicit */int) arr_21 [i_6] [i_6]);
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_29 = ((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8] [i_8])) ? (arr_15 [2] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */int) arr_22 [i_8] [i_8])));
        /* LoopSeq 1 */
        for (short i_9 = 3; i_9 < 9; i_9 += 3) 
        {
            var_30 = ((/* implicit */int) (_Bool)0);
            arr_32 [i_8] [i_9 - 2] [i_9 + 2] = ((/* implicit */unsigned char) (!(arr_2 [i_9 + 3] [i_9 + 2])));
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_8] [i_9 - 2])) ? (((/* implicit */unsigned long long int) arr_15 [i_8] [i_9 - 1] [i_9 + 3] [i_8] [i_8])) : (arr_31 [i_9 - 2] [i_9 + 3] [i_9 - 3])));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((312256191) | (((/* implicit */int) var_6))))) ? (arr_10 [i_8] [i_9 - 1]) : (((/* implicit */unsigned long long int) var_9))));
            var_33 = ((/* implicit */int) arr_6 [i_8]);
        }
        var_34 += ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
        var_35 = (~(((/* implicit */int) arr_27 [i_8] [i_8])));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_10 = 1; i_10 < 13; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_11 = 1; i_11 < 12; i_11 += 1) 
        {
            arr_40 [i_10 - 1] [i_11 - 1] [i_10] = ((/* implicit */signed char) (short)16256);
            /* LoopNest 3 */
            for (int i_12 = 4; i_12 < 12; i_12 += 3) 
            {
                for (int i_13 = 1; i_13 < 13; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        {
                            var_36 = (~(arr_20 [i_12 - 3] [i_13 - 1]));
                            arr_48 [i_13 - 1] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_10] [i_13 + 1] [i_10]))));
                            var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_12 + 2] [i_11 - 1]))));
                            var_38 += ((/* implicit */signed char) arr_47 [i_13 + 1] [i_11 + 2] [(signed char)8] [i_13 - 1]);
                            var_39 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [(signed char)2] [i_14])) || (((/* implicit */_Bool) arr_21 [(_Bool)1] [(_Bool)1]))));
                        }
                    } 
                } 
            } 
        }
        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (arr_15 [(unsigned short)4] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]))))));
        var_41 += ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_10 + 1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_10 - 1] [i_10 - 1]))))) : (arr_43 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1])));
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 14; i_15 += 3) 
    {
        arr_51 [i_15 + 1] = ((/* implicit */long long int) var_1);
        var_42 = ((/* implicit */unsigned int) -1068867990);
        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) arr_8 [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 2]))));
    }
    /* LoopSeq 2 */
    for (int i_16 = 2; i_16 < 10; i_16 += 1) /* same iter space */
    {
        var_44 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(3478104441U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) : (((((/* implicit */unsigned int) arr_39 [i_16 + 1] [i_16 + 1])) * (arr_43 [i_16 - 2] [i_16 + 1] [i_16 - 1] [i_16 - 1])))))));
        arr_56 [i_16] = ((/* implicit */_Bool) (((_Bool)1) ? (-3) : (-1068867985)));
    }
    for (int i_17 = 2; i_17 < 10; i_17 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_18 = 2; i_18 < 8; i_18 += 1) 
        {
            for (int i_19 = 1; i_19 < 10; i_19 += 4) 
            {
                for (signed char i_20 = 1; i_20 < 7; i_20 += 1) 
                {
                    {
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [8])))))) == (((((/* implicit */long long int) 536870911)) / (165064658947766771LL))))))));
                        arr_70 [i_17 - 2] [i_17] [i_19 + 1] [i_20 + 3] = ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */_Bool) arr_30 [i_17 - 2])) ? (((/* implicit */int) arr_18 [i_19 - 1] [i_20 + 4])) : (arr_15 [i_17] [i_18 - 1] [i_19 + 1] [i_20 - 1] [i_20 + 2]))) * (((/* implicit */int) arr_33 [i_17])))));
                        var_46 *= ((/* implicit */short) max((max((((/* implicit */int) arr_14 [4] [i_18 - 1] [i_18 + 3] [i_19 + 1] [i_20 + 3] [i_20 + 1])), ((+(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) arr_69 [i_20 + 4] [i_19 - 1] [i_18 + 1] [i_17 - 1]))));
                        var_47 = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        } 
        var_48 = arr_37 [i_17 - 2] [i_17 - 2];
        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_17 - 2])) ? (((((/* implicit */_Bool) arr_60 [i_17 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (1428912796) : (((/* implicit */int) arr_36 [i_17 - 2]))))) : (max((((/* implicit */long long int) var_3)), (11LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((1974433944) >> (((/* implicit */int) arr_17 [i_17 + 1]))))) ? ((~(arr_61 [i_17] [i_17 + 1] [i_17 - 1]))) : (((/* implicit */int) var_6)))))));
        var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_67 [8LL] [i_17 + 1] [i_17 - 1] [i_17 + 1])) & (((/* implicit */int) arr_28 [i_17 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_17 - 1] [i_17 - 2]))))))))));
    }
}
