/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158076
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            var_18 ^= ((/* implicit */unsigned int) (~((~(((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (short)-28844)))))))));
            var_19 *= ((/* implicit */unsigned char) var_6);
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_20 &= min((((((/* implicit */_Bool) ((unsigned int) arr_6 [i_0] [10] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_8))), (((/* implicit */unsigned int) ((unsigned short) ((var_12) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [16])) - (208))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_14 [i_0] [i_2] [i_4])) : (((/* implicit */int) arr_14 [i_2] [i_3] [(unsigned short)8]))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -1170994296)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) ((short) arr_0 [i_0] [(unsigned short)9])))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 112))))) : (((/* implicit */int) (short)28844))));
                        }
                    } 
                } 
                var_23 = ((((/* implicit */_Bool) var_1)) ? (max((-112), (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_2])), (arr_15 [i_2] [i_0] [i_0])))))) : ((~(1170994296))));
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
            }
            for (short i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_24 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((arr_2 [i_0] [i_1] [i_5]), (arr_6 [i_0] [i_0] [i_5] [i_1]))))))) & (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_1]))))), (max((((/* implicit */unsigned int) 1170994295)), (arr_8 [i_0]))))));
                var_25 = ((/* implicit */unsigned int) max((var_25), (min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0]))))) ? (((unsigned int) -112)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(short)0] [5U]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_5])))))))));
                var_26 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1])))))));
            }
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) var_1);
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (int i_8 = 4; i_8 < 15; i_8 += 4) 
                    {
                        {
                            arr_32 [i_0] [i_6] [i_6] [i_7 + 1] [i_8] = ((/* implicit */unsigned short) max((((unsigned int) var_12)), (((/* implicit */unsigned int) arr_15 [(unsigned char)17] [i_7 + 1] [i_8]))));
                            var_28 = ((/* implicit */short) (-(arr_19 [i_7] [i_7 + 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 2; i_9 < 16; i_9 += 1) 
                {
                    for (short i_10 = 3; i_10 < 17; i_10 += 2) 
                    {
                        {
                            var_29 = ((unsigned int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)121)))));
                            var_30 |= ((/* implicit */unsigned short) max((((/* implicit */int) min(((!(((/* implicit */_Bool) arr_26 [i_0] [i_6] [i_9] [i_10])))), ((!(((/* implicit */_Bool) arr_22 [i_10 - 3] [i_1] [i_10 - 2]))))))), ((-(((/* implicit */int) arr_27 [i_0] [i_0] [17U]))))));
                            arr_37 [i_0] [i_6] [17] [i_9] [i_10] = ((/* implicit */unsigned short) max((max((((var_10) % (var_1))), (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_6] [i_9 - 2])) ? (var_2) : (-113))))), (((/* implicit */int) ((short) ((short) var_9))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)52378)) != (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
        {
            var_32 += ((/* implicit */unsigned int) (~(-113)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_12 = 1; i_12 < 15; i_12 += 4) 
            {
                var_33 = ((/* implicit */unsigned short) (~(var_0)));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        {
                            arr_48 [i_0] = ((/* implicit */short) arr_18 [i_12 + 3] [i_12 + 1]);
                            var_34 = ((/* implicit */int) arr_4 [i_12 + 2]);
                            var_35 &= ((/* implicit */int) arr_42 [3] [i_11] [i_11]);
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned int) ((int) (~(3562535230U))));
                var_37 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_0] [i_12 + 3] [i_12] [i_12] [i_12 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))));
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)13158)) ? (arr_41 [i_12] [i_12] [i_12 + 1]) : (((/* implicit */unsigned int) (~(1170994295))))));
            }
        }
        arr_49 [i_0] = ((/* implicit */unsigned int) ((int) ((((((/* implicit */int) (unsigned char)115)) == (2147483647))) ? (((((/* implicit */unsigned int) var_3)) + (3225264379U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_53 [(unsigned short)18] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_52 [i_15]))));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 20; i_16 += 3) 
        {
            for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                for (unsigned char i_18 = 1; i_18 < 18; i_18 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) (~((~(arr_50 [i_15] [i_17])))));
                        arr_60 [i_15] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    }
                } 
            } 
        } 
        arr_61 [(unsigned short)12] [i_15] &= ((/* implicit */short) arr_59 [(unsigned short)6] [i_15]);
    }
}
