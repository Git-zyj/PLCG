/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12724
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
    var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = arr_6 [i_1] [i_1] [i_1];
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((2147483647) | (((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 3; i_3 < 22; i_3 += 4) 
    {
        var_20 = (+(min(((-2147483647 - 1)), (4095))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (unsigned short i_7 = 2; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_24 [i_4] [i_5] [i_6] [i_6] [i_7] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -2147483647)))))));
                            var_21 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_21 [i_3] [i_5] [i_5] [i_3])) <= (((/* implicit */int) (unsigned char)0))))));
                        }
                    } 
                } 
                arr_25 [i_5] [14] [i_3] |= ((((/* implicit */int) (unsigned short)61235)) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)8)) || (((/* implicit */_Bool) -2147483634))))));
                arr_26 [i_5] = ((/* implicit */unsigned char) 2147483633);
            }
            /* vectorizable */
            for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (int i_10 = 3; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */int) ((unsigned short) 1796308105))) < (((((/* implicit */int) var_9)) >> (((-521676772) + (521676778))))));
                            arr_34 [i_8] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) ((int) -2147483616));
                        }
                    } 
                } 
                arr_35 [i_8] [i_4] [i_8] = ((/* implicit */unsigned char) ((int) ((int) var_0)));
                arr_36 [i_8] = ((((/* implicit */_Bool) arr_16 [i_4 - 1])) ? ((+(391935921))) : (((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3] [i_3])) ? (843981370) : (((/* implicit */int) arr_23 [i_3] [i_4] [i_8] [i_8] [i_3])))));
                /* LoopSeq 1 */
                for (int i_11 = 2; i_11 < 21; i_11 += 4) 
                {
                    var_23 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
                    var_24 = ((/* implicit */unsigned char) (unsigned short)51926);
                    /* LoopSeq 4 */
                    for (unsigned char i_12 = 1; i_12 < 22; i_12 += 1) 
                    {
                        arr_41 [i_3] [i_4] [i_8] [i_11] [i_12] = ((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_8]);
                        var_25 = ((/* implicit */unsigned short) (!(var_15)));
                    }
                    for (int i_13 = 1; i_13 < 21; i_13 += 3) 
                    {
                        var_26 = (~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_19 [i_8] [i_11] [i_8] [i_8])))));
                        var_27 = ((((((/* implicit */int) arr_21 [i_3] [i_4] [i_8] [i_13])) ^ (((/* implicit */int) arr_42 [i_3] [i_4])))) | (((/* implicit */int) (unsigned char)255)));
                        var_28 = ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) arr_39 [i_8])))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_13] [i_13] [i_13])) != (((/* implicit */int) arr_44 [i_3] [i_4] [i_8] [i_11]))))));
                        arr_46 [i_3] [i_4] [i_8] [i_11] [i_13] = arr_15 [i_13] [i_13] [i_13];
                    }
                    for (unsigned short i_14 = 3; i_14 < 22; i_14 += 4) 
                    {
                        var_29 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)189))));
                        arr_51 [i_14] [i_11] [i_11] [i_8] [i_11] [i_3] [i_3] &= ((/* implicit */unsigned char) -2147483634);
                    }
                    for (unsigned short i_15 = 1; i_15 < 21; i_15 += 4) 
                    {
                        arr_54 [i_3] [i_4] [i_8] [i_11] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)189)) && (((/* implicit */_Bool) var_8))))) % (((/* implicit */int) arr_20 [i_3] [i_8] [i_8] [i_11 + 2]))));
                        arr_55 [i_8] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31283)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (unsigned char)147))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_3] [i_4] [i_8])))) : (((/* implicit */int) arr_14 [i_8] [i_11] [i_15]))));
                    }
                    var_30 = ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_18 [i_8 + 2] [i_11] [i_11 + 2] [i_11])));
                    arr_56 [i_3] [i_4] [i_8] [i_8] = ((/* implicit */_Bool) arr_32 [i_3] [i_11] [i_8] [i_11] [i_4] [i_3]);
                }
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)201)) : (1704228965)))) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((int) arr_13 [i_4] [i_3]))));
            }
            /* vectorizable */
            for (unsigned short i_16 = 2; i_16 < 21; i_16 += 1) 
            {
                var_32 = ((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_16 - 2] [i_4 - 1])) - (((/* implicit */int) arr_52 [i_16] [i_4] [i_16] [i_4] [i_3]))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 4; i_17 < 19; i_17 += 3) 
                {
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_47 [i_3] [i_4] [i_16] [i_3] [i_3] [i_16])))) ? (((/* implicit */int) var_4)) : (((int) -2147483605))));
                    var_34 = ((((/* implicit */_Bool) ((unsigned char) arr_49 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) ? (((((/* implicit */int) arr_20 [i_3] [i_4] [i_16] [i_17])) << (((((/* implicit */int) var_2)) - (170))))) : ((~(((/* implicit */int) arr_37 [i_17] [i_3])))));
                    var_35 -= ((/* implicit */unsigned short) var_10);
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 3; i_18 < 22; i_18 += 4) 
            {
                for (unsigned char i_19 = 3; i_19 < 22; i_19 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */_Bool) arr_30 [i_3])) ? (((/* implicit */int) arr_15 [i_19] [i_18] [i_4])) : (((/* implicit */int) (_Bool)1)))) - ((+(((/* implicit */int) (_Bool)1)))))) : (((((-391935922) + (2147483647))) << (((((((/* implicit */_Bool) -1627406808)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) - (147)))))));
                        arr_68 [i_3] [i_18] [i_18] [i_19] = arr_40 [i_19] [i_4];
                    }
                } 
            } 
            var_37 = arr_18 [i_4] [i_4] [i_4] [i_3];
        }
        var_38 = (((~(((/* implicit */int) arr_59 [0] [i_3 - 1] [i_3] [i_3])))) & ((~(((/* implicit */int) (signed char)13)))));
        var_39 = ((/* implicit */unsigned char) arr_67 [i_3] [i_3] [i_3] [i_3]);
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (unsigned char i_21 = 1; i_21 < 20; i_21 += 3) 
            {
                {
                    arr_74 [i_20] [i_20] [i_21] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_3] [i_20] [i_21] [i_3])))))));
                    arr_75 [i_20] [i_20] [i_20] = max((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-14)), ((unsigned char)162)))), ((-(0))));
                    arr_76 [i_20] [i_20] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_39 [i_20])) ? (((/* implicit */int) arr_32 [i_3] [i_21 - 1] [i_3 - 1] [i_3] [i_21] [i_21])) : (((/* implicit */int) arr_39 [i_20])))) > (((/* implicit */int) max(((unsigned short)58341), (((/* implicit */unsigned short) arr_39 [i_20])))))));
                }
            } 
        } 
    }
}
