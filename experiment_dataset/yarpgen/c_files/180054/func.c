/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180054
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
    var_18 = var_14;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) var_13);
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 8062110775490815734LL)) ? (8847424338385781486LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-78)))))))) ? ((~(((long long int) var_11)))) : (((((/* implicit */_Bool) (-(arr_1 [i_2])))) ? (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */long long int) 1048568)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109)))))));
                var_21 = (signed char)5;
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */long long int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2])) : (arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2])) ? (var_4) : (var_13))) : (((/* implicit */long long int) arr_7 [i_1 + 1] [i_1] [i_1 - 1] [i_1])));
            }
            var_23 = ((/* implicit */int) ((signed char) min((max((var_7), (arr_1 [i_0]))), (((((/* implicit */_Bool) -1583050645)) ? (-4033739083032002115LL) : (var_1))))));
            var_24 = ((/* implicit */long long int) max((var_24), (min((8847424338385781515LL), (((/* implicit */long long int) (signed char)69))))));
        }
        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1828705607)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-1237143275) : (((/* implicit */int) (signed char)95))))) : (arr_5 [i_0] [i_0] [i_0])))) ? (max((((/* implicit */long long int) ((signed char) var_1))), (var_3))) : (min((((long long int) arr_2 [i_0] [i_0])), (((/* implicit */long long int) var_5)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))));
            var_27 = ((/* implicit */signed char) -829997102);
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */int) ((((((((/* implicit */_Bool) (signed char)8)) ? (-8130232221284208817LL) : (((/* implicit */long long int) arr_9 [i_3] [i_4])))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((signed char) var_13))) + (57)))));
                            var_29 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_12 [i_6])))));
                            var_30 = ((/* implicit */int) (-(arr_13 [i_0] [i_6] [(signed char)21] [i_0] [i_6] [i_0])));
                            arr_19 [i_6] [i_6] [i_6] [i_4] [i_6] [i_0] [9] = var_17;
                            arr_20 [i_6] = ((((/* implicit */_Bool) (signed char)-84)) ? (arr_3 [i_3] [i_6]) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (signed char)8)))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) arr_12 [i_4]);
                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((arr_13 [i_0] [12] [(signed char)8] [i_3] [i_4] [i_4]) / (var_7))))));
                var_33 &= ((/* implicit */signed char) -7959468176568039842LL);
            }
            arr_21 [i_0] = ((/* implicit */signed char) (-(arr_6 [i_0] [18LL] [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            var_34 = ((/* implicit */signed char) ((((((/* implicit */long long int) -1237143292)) >= (var_13))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)124))))) : (arr_3 [i_0] [i_0])));
            var_35 = ((arr_10 [i_7]) + (var_17));
            /* LoopSeq 3 */
            for (long long int i_8 = 3; i_8 < 21; i_8 += 4) 
            {
                arr_29 [i_8] [i_7] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)95)) ? (575897802350002176LL) : (4121184663507960075LL)));
                var_36 = ((/* implicit */long long int) (-2147483647 - 1));
            }
            for (signed char i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
            {
                var_37 += ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
                var_38 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 2] [23])) ? (arr_28 [i_9 - 1] [i_9 + 1] [i_9 + 2] [i_9]) : (arr_12 [i_9 + 1])));
            }
            for (signed char i_10 = 1; i_10 < 22; i_10 += 4) /* same iter space */
            {
                arr_37 [i_0] = ((/* implicit */signed char) 8062110775490815734LL);
                var_39 &= ((((/* implicit */_Bool) arr_30 [i_10 + 2] [i_10 + 1] [i_10 - 1] [i_10 - 1])) ? (((((/* implicit */_Bool) -4068043319097587746LL)) ? (((/* implicit */long long int) 48)) : (arr_1 [i_0]))) : (((/* implicit */long long int) var_10)));
                var_40 = (~(((/* implicit */int) ((signed char) (signed char)-127))));
                var_41 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)8))))) % (((((-8435422996972260770LL) + (9223372036854775807LL))) << (((75530731305131239LL) - (75530731305131239LL)))))));
                arr_38 [i_10] = ((/* implicit */signed char) var_11);
            }
            arr_39 [i_0] [(signed char)23] [i_7] = ((/* implicit */long long int) ((signed char) (signed char)-14));
        }
        for (long long int i_11 = 3; i_11 < 22; i_11 += 1) 
        {
            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)-8)))))))));
            var_43 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_33 [i_11] [i_0] [i_11])) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) max((var_17), (((/* implicit */int) (signed char)-23))))) : (((((/* implicit */long long int) -115517276)) & (-2343626912250328341LL))))));
            var_44 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 684128562)) ? (((/* implicit */long long int) 150484046)) : (-1LL)))) ? (((/* implicit */long long int) -1237143301)) : (((-2963029313033546553LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)114))))))) <= (max((((((var_4) + (9223372036854775807LL))) >> (((var_7) - (4885873173026703546LL))))), (((arr_23 [i_11 - 2] [i_11]) >> (((((-2147483643) - (-2147483601))) + (48)))))))));
            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((((/* implicit */_Bool) var_16)) ? (8435422996972260762LL) : (((/* implicit */long long int) arr_9 [i_0] [i_11 - 3])))) : ((~(var_13)))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((signed char) -1059605065))), (arr_9 [1] [i_11])))) : (var_4))))));
            arr_42 [i_11] = (+(((/* implicit */int) ((signed char) var_3))));
        }
    }
    for (signed char i_12 = 0; i_12 < 25; i_12 += 4) 
    {
        var_46 = ((/* implicit */long long int) min((var_46), (((long long int) ((max((1442152756), (((/* implicit */int) (signed char)5)))) & (((int) -9223372036854775790LL)))))));
        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) var_8))));
        var_48 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (((((/* implicit */_Bool) var_10)) ? (arr_45 [i_12]) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) min((min(((signed char)76), (var_5))), (((signed char) arr_43 [4] [i_12]))))) : (((/* implicit */int) (signed char)-122))));
    }
}
