/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157880
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)3)) > (((/* implicit */int) ((signed char) arr_0 [i_0])))));
        arr_4 [i_0] [i_0] = (signed char)(-127 - 1);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 4; i_2 < 18; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) > (((/* implicit */int) arr_10 [i_3] [i_2 - 3] [i_3])))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)13)) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)3)))))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 3; i_4 < 20; i_4 += 4) 
                    {
                        arr_13 [i_1] [i_1] [i_1] = ((signed char) arr_2 [i_1]);
                        arr_14 [i_1] [i_1] = ((signed char) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_15))));
                        var_20 = (signed char)65;
                    }
                    for (signed char i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        var_21 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [(signed char)16]))));
                        var_22 -= ((signed char) var_3);
                        var_23 -= ((signed char) arr_17 [i_1] [i_5 - 3] [i_5 - 3]);
                    }
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_21 [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_16 [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_16 [i_1])) + (127))) - (12)))))) : (((/* implicit */signed char) ((((((((/* implicit */int) arr_16 [i_1])) - (2147483647))) + (2147483647))) << (((((((((/* implicit */int) arr_16 [i_1])) + (127))) - (12))) - (172))))));
                        arr_22 [i_1] [i_6] [i_3] [i_1] [i_2] [i_1] = (signed char)13;
                    }
                    arr_23 [i_1] [i_1] [i_1] = ((signed char) arr_19 [i_1 + 1] [i_1 - 2] [i_1] [i_1] [i_3 + 2]);
                    arr_24 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)25))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)-26)))));
        /* LoopSeq 3 */
        for (signed char i_7 = 3; i_7 < 19; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 4; i_8 < 20; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    {
                        var_25 -= arr_15 [i_8];
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            arr_37 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_32 [i_1])))));
                            var_26 = ((/* implicit */signed char) min((var_26), ((signed char)25)));
                        }
                        var_27 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-102)) <= (((/* implicit */int) ((signed char) arr_32 [i_1])))));
                        var_28 = ((signed char) arr_28 [i_1 - 1] [i_1]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_11 = 1; i_11 < 19; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (signed char i_13 = 2; i_13 < 19; i_13 += 4) 
                    {
                        {
                            var_29 = ((signed char) ((((/* implicit */int) arr_20 [i_1] [i_7] [i_11] [i_12] [i_13])) ^ (((/* implicit */int) (signed char)60))));
                            var_30 += ((signed char) arr_35 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    {
                        var_31 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_33 [i_1] [i_7] [i_14] [i_15]))))));
                        arr_51 [i_1] [i_14] [i_7] [i_1] = ((signed char) arr_50 [i_1] [i_1 - 2] [i_15] [i_1 - 2] [i_15]);
                        var_32 &= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-32))));
                    }
                } 
            } 
            arr_52 [i_1] [i_1] = ((signed char) (signed char)127);
        }
        for (signed char i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_31 [i_1])) == (((/* implicit */int) (signed char)-85))));
                arr_59 [i_1] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2])) == (((/* implicit */int) arr_20 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1]))));
            }
            arr_60 [i_1] [i_1] [i_1] = (signed char)-115;
        }
        for (signed char i_18 = 0; i_18 < 21; i_18 += 1) /* same iter space */
        {
            var_34 *= ((signed char) arr_42 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]);
            /* LoopNest 2 */
            for (signed char i_19 = 4; i_19 < 18; i_19 += 3) 
            {
                for (signed char i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_21 = 1; i_21 < 17; i_21 += 3) 
                        {
                            var_35 = ((/* implicit */signed char) max((var_35), (var_14)));
                            arr_69 [i_1] [i_1] [i_19] [i_19] [i_21] [i_19] = arr_30 [i_1];
                            var_36 -= ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_19 - 3])) + (((/* implicit */int) arr_5 [i_19 + 2]))));
                        }
                        for (signed char i_22 = 0; i_22 < 21; i_22 += 4) 
                        {
                            var_37 = (i_1 % 2 == zero) ? (((/* implicit */signed char) (-(((((((/* implicit */int) arr_32 [i_1])) + (2147483647))) << (((((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_22])) - (2)))))))) : (((/* implicit */signed char) (-(((((((/* implicit */int) arr_32 [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_22])) - (2))) - (49))))))));
                            var_38 = ((/* implicit */signed char) min((var_38), (((signed char) ((signed char) (signed char)(-127 - 1))))));
                        }
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_0))) < (((/* implicit */int) var_3)))))));
                        arr_72 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_29 [i_1] [i_19 - 4] [i_1]))));
                    }
                } 
            } 
        }
        arr_73 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_57 [i_1 - 1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_57 [i_1 - 1] [i_1 - 1])) + (64)))));
    }
    for (signed char i_23 = 2; i_23 < 20; i_23 += 1) /* same iter space */
    {
        var_40 = ((signed char) (signed char)-102);
        var_41 += arr_62 [i_23] [i_23] [i_23];
        arr_78 [i_23] [i_23] = (signed char)-1;
        arr_79 [i_23] [i_23] = ((/* implicit */signed char) max((((((/* implicit */int) arr_38 [i_23] [i_23] [i_23] [i_23])) & (((/* implicit */int) ((signed char) var_16))))), (((/* implicit */int) ((signed char) max(((signed char)-21), (arr_36 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])))))));
    }
    for (signed char i_24 = 2; i_24 < 20; i_24 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_25 = 4; i_25 < 18; i_25 += 2) 
        {
            var_42 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((signed char) var_10))))));
            /* LoopNest 2 */
            for (signed char i_26 = 0; i_26 < 21; i_26 += 3) 
            {
                for (signed char i_27 = 0; i_27 < 21; i_27 += 1) 
                {
                    {
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (+(((/* implicit */int) arr_87 [i_24] [i_25 - 2] [i_24] [i_27])))))));
                        var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_40 [i_24] [i_25] [i_26] [i_27] [i_27]))))))));
                        arr_94 [i_24] [i_24] [i_24] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) - (((/* implicit */int) arr_6 [i_26] [i_27]))))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_19 [i_24 - 1] [i_24] [i_25] [i_27] [i_27])))) : (((/* implicit */int) min((arr_67 [i_26] [i_26] [i_24 + 1] [i_27] [i_26]), (arr_1 [i_27]))))));
                    }
                } 
            } 
        }
        arr_95 [i_24] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((signed char) (signed char)98)), ((signed char)5))))));
    }
    var_45 = var_9;
}
