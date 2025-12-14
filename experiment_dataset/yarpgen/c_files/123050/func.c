/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123050
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = min((((((4071377281U) * (var_8))) / (((((/* implicit */_Bool) 4071377291U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_15))))), (((/* implicit */unsigned int) var_4)));
                var_18 = ((/* implicit */unsigned char) ((223590010U) ^ (var_10)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) 4071377301U)) ? (var_13) : (var_15))), (var_15))), (max((var_5), (min((223589995U), (var_11)))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (4071377287U)))) ? (var_14) : (max((((/* implicit */unsigned int) (unsigned char)246)), (15U)))))) ? (133279072U) : ((-(min((4071377286U), (4071377275U)))))));
    var_21 -= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205)))))) ? (223590010U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_14)))))) == (var_9)));
        /* LoopNest 3 */
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) ((var_3) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)177)) ^ (((/* implicit */int) (unsigned char)180)))))));
                        var_24 = 223590004U;
                        var_25 = var_10;
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (4071377300U)));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 2) 
        {
            arr_23 [i_7] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 2; i_8 < 24; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) 3453567220U)) ? (4071377290U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                        arr_28 [11U] [(unsigned char)13] [i_7] [(unsigned char)0] [i_8] [i_9] = var_1;
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_24 [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) 2995544185U)) ? (67973346U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                        arr_29 [i_6] [i_8] [11U] [i_7] [i_7] = ((/* implicit */unsigned char) (+(var_7)));
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 1; i_10 < 23; i_10 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) (unsigned char)0);
            var_30 = var_16;
            arr_32 [i_10] = ((/* implicit */unsigned int) arr_19 [i_6]);
            arr_33 [(unsigned char)16] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (var_5) : (1521033599U)));
        }
        arr_34 [7U] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)0));
    }
    /* vectorizable */
    for (unsigned int i_11 = 3; i_11 < 13; i_11 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            arr_39 [i_11 + 1] = (-(((var_3) & (var_1))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (278864420U) : (1000694084U)));
        }
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */_Bool) 0U)) ? (133279072U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))))) : (((var_11) & (2771406364U)))));
        /* LoopSeq 2 */
        for (unsigned int i_13 = 1; i_13 < 14; i_13 += 2) 
        {
            arr_42 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) : (var_11)))) ? ((-(var_8))) : (129798827U)));
            var_33 = 1299423131U;
            /* LoopNest 2 */
            for (unsigned int i_14 = 2; i_14 < 13; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 15; i_15 += 2) 
                {
                    {
                        arr_50 [i_11 - 2] [i_13 - 1] [i_14] [i_15] [i_11] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((223589995U) % (4281133167U)))));
                        arr_51 [i_13] [i_14 + 2] [i_13] [i_13] = ((/* implicit */unsigned char) 1155944902U);
                        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 616144537U))));
                    }
                } 
            } 
            var_35 |= ((/* implicit */unsigned char) 1354713379U);
            arr_52 [i_13] = ((((/* implicit */_Bool) 3011947170U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) : (914887986U));
        }
        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 3) 
        {
            arr_57 [i_16] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_11 - 3] [i_16] [i_16])) ? (var_9) : (var_5)));
            arr_58 [i_16] = ((unsigned int) (unsigned char)1);
            arr_59 [i_16] [i_16] [i_16] = arr_53 [i_11] [0U] [i_16];
        }
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
        {
            for (unsigned char i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_19 = 0; i_19 < 15; i_19 += 1) 
                    {
                        var_36 = 0U;
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)136)) && ((!(((/* implicit */_Bool) (unsigned char)1))))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 15; i_20 += 1) 
                    {
                        var_38 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_65 [i_11 + 1] [i_11] [i_11] [i_11]))));
                        arr_71 [i_20] [i_17] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 37641135U)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_45 [i_20] [i_17])))) * (((((/* implicit */int) (unsigned char)120)) / (((/* implicit */int) (unsigned char)227))))));
                    }
                    for (unsigned char i_21 = 2; i_21 < 14; i_21 += 3) 
                    {
                        var_39 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) != (var_10)))) - (((/* implicit */int) arr_38 [i_21 + 1] [i_11 + 1] [i_11 - 2]))));
                        arr_75 [i_21] [2U] [i_17] [8U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (var_5)))) ? ((~(var_7))) : (1415541079U)));
                        var_40 = ((/* implicit */unsigned char) (~(var_3)));
                    }
                    for (unsigned char i_22 = 0; i_22 < 15; i_22 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned int) max((var_41), ((+(var_0)))));
                        var_42 = var_7;
                    }
                    arr_78 [i_18] [(unsigned char)6] [13U] = var_2;
                }
            } 
        } 
    }
    for (unsigned int i_23 = 0; i_23 < 25; i_23 += 2) 
    {
        arr_81 [i_23] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (min((3092884347U), (var_9))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_16)))))));
        var_43 = min((3204737256U), (2161456357U));
        var_44 = ((/* implicit */unsigned char) ((((arr_22 [i_23] [i_23] [i_23]) * (((1138852818U) / (4049110889U))))) / (((((/* implicit */_Bool) var_0)) ? (min((1913854892U), (914887994U))) : (max((var_14), (((/* implicit */unsigned int) (unsigned char)30))))))));
        var_45 = ((((/* implicit */_Bool) 504132721U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (2133510939U));
    }
}
