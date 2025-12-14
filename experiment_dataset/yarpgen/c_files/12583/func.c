/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12583
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_1] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) max((min((arr_1 [i_0]), ((short)-28580))), ((short)-28580)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-28580)) - (((/* implicit */int) arr_3 [i_0] [(unsigned short)3]))))) ? (((((/* implicit */_Bool) (short)-2236)) ? (((/* implicit */int) (unsigned short)64648)) : (((/* implicit */int) (short)28580)))) : (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 2])) + (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                        arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 3] [i_2] [i_0 - 1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_1 [i_0 - 2])))) * (((/* implicit */int) (unsigned short)64648))));
                        var_10 = ((/* implicit */unsigned short) max((((/* implicit */int) var_9)), ((+((-(((/* implicit */int) (unsigned short)64648))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0 - 1] [i_0 - 1] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0] [i_0 + 1]))));
        var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-1002)) < (((/* implicit */int) (short)-7202))));
    }
    for (unsigned short i_4 = 2; i_4 < 7; i_4 += 1) /* same iter space */
    {
        var_12 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (short)28573)) || (((/* implicit */_Bool) (unsigned short)32942))))), (((((/* implicit */_Bool) (short)7202)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) min(((short)7628), ((short)-2236)))) : (((/* implicit */int) min((arr_14 [i_4 - 1]), (arr_14 [i_4 + 3]))))));
        var_13 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_4 + 4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_4 - 2] [i_4 - 2])))) - (((/* implicit */int) var_4))));
    }
    for (unsigned short i_5 = 2; i_5 < 7; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */short) arr_6 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9]);
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((((/* implicit */int) ((short) arr_17 [i_5]))) ^ (((((/* implicit */_Bool) (short)-26254)) ? (((/* implicit */int) arr_14 [(short)0])) : (((/* implicit */int) (short)978)))))) != (((/* implicit */int) max((min(((short)-13581), ((short)-9074))), (arr_7 [i_5] [i_5])))))))));
    }
    for (short i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)978)) << (((((/* implicit */int) arr_20 [i_6])) - (2929)))))) ? (((((/* implicit */int) ((unsigned short) var_1))) % (((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (max((var_6), ((unsigned short)59567))))))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)29590)) ? (((/* implicit */int) (unsigned short)64629)) : (((/* implicit */int) (short)3883))));
        /* LoopSeq 4 */
        for (short i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((unsigned short) ((((/* implicit */_Bool) (short)9593)) ? (((/* implicit */int) (short)-26254)) : (((/* implicit */int) (short)-14909)))))));
            var_16 = ((short) max(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (unsigned short)41674)) ? (((/* implicit */int) (short)28580)) : (((/* implicit */int) arr_23 [i_7]))))));
            var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)62351)) ? (((/* implicit */int) (short)-1002)) : (((/* implicit */int) (short)26133)))), (((/* implicit */int) (short)-7366))));
            var_18 = ((short) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) min((var_6), ((unsigned short)55170)))) : (((/* implicit */int) ((short) (unsigned short)41674)))));
            var_19 = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_20 [i_7 - 2])))));
        }
        for (short i_8 = 1; i_8 < 14; i_8 += 1) 
        {
            arr_28 [i_6] [i_8 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-27450))));
            var_20 = var_3;
            arr_29 [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (unsigned short)23862))), (max((((/* implicit */int) var_6)), (((((/* implicit */int) var_8)) - (((/* implicit */int) var_3))))))));
        }
        for (unsigned short i_9 = 2; i_9 < 14; i_9 += 1) 
        {
            arr_33 [i_6] [i_6] [i_9 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) (short)-24853)), ((unsigned short)15987))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)42056))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (short)-26254)))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-8589)) != (((/* implicit */int) (unsigned short)1966))));
            arr_34 [i_9 + 1] [i_6] = ((/* implicit */short) arr_25 [i_6] [i_9] [i_9 - 2]);
        }
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) min((max((((((/* implicit */int) (unsigned short)380)) ^ (((/* implicit */int) (short)29359)))), (((((/* implicit */_Bool) (unsigned short)23490)) ? (((/* implicit */int) (short)-15200)) : (((/* implicit */int) (short)25382)))))), ((~(((/* implicit */int) (unsigned short)10389))))));
            /* LoopSeq 3 */
            for (unsigned short i_11 = 2; i_11 < 14; i_11 += 2) 
            {
                var_23 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)1002)))) << (((((((/* implicit */int) arr_37 [i_6] [i_6])) / (((/* implicit */int) (unsigned short)22793)))) + (7))))) > (((/* implicit */int) min((var_3), (max((arr_38 [i_10]), (((/* implicit */unsigned short) var_0)))))))));
                arr_42 [i_6] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-21919))));
            }
            for (short i_12 = 2; i_12 < 13; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 4; i_13 < 14; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned short) (+((-(((((/* implicit */int) (short)-24783)) * (((/* implicit */int) arr_38 [i_12]))))))));
                            arr_53 [i_6] [i_10] [i_10] [i_12] [i_13] [i_14] = ((unsigned short) ((((/* implicit */_Bool) max((arr_49 [i_6] [i_10]), (((/* implicit */unsigned short) (short)-21919))))) ? (((/* implicit */int) arr_50 [i_6])) : (((((/* implicit */_Bool) arr_52 [i_6] [i_6] [i_6] [i_6] [(unsigned short)3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)989))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (min((arr_19 [i_6] [i_6]), (var_1)))));
                            arr_54 [i_6] [i_6] [i_13 - 1] = ((/* implicit */short) var_4);
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) (short)-29369)) : (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_52 [i_12] [i_12 + 2] [i_12 + 2] [i_12] [i_12]))))));
            }
            /* vectorizable */
            for (unsigned short i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)24783)) + ((+(((/* implicit */int) (unsigned short)4365))))));
                var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_6])) ? (((/* implicit */int) arr_41 [i_10])) : (((/* implicit */int) var_6))));
                var_29 = var_0;
            }
            var_30 = ((/* implicit */short) (unsigned short)59902);
            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) ((unsigned short) (short)3213))) == (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_47 [i_6] [i_6] [i_6] [i_6] [i_6]))))))))));
            var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_5), (var_0))))));
        }
        var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-18352)) ? (((/* implicit */int) (unsigned short)20069)) : (((/* implicit */int) max((arr_25 [i_6] [i_6] [i_6]), (min(((unsigned short)15020), (arr_36 [i_6]))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 4) 
    {
        for (unsigned short i_17 = 1; i_17 < 13; i_17 += 2) 
        {
            {
                var_34 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_59 [i_17 + 4] [i_17 + 1])) ? (((/* implicit */int) arr_59 [i_17 + 1] [i_17 + 2])) : (((/* implicit */int) arr_59 [i_17 + 4] [i_17 + 2]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_18 = 2; i_18 < 16; i_18 += 4) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (short)2142))) % (((/* implicit */int) (unsigned short)25878))));
                    arr_65 [i_16] [i_16] [i_16] [(unsigned short)7] = ((unsigned short) (+(((/* implicit */int) (short)15202))));
                }
                /* vectorizable */
                for (unsigned short i_19 = 2; i_19 < 16; i_19 += 2) 
                {
                    var_36 += ((short) var_5);
                    var_37 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (short)2110)) + (((/* implicit */int) (unsigned short)18644))))));
                }
                var_38 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_66 [i_17] [i_17] [i_17 - 1])) ? (((/* implicit */int) arr_66 [i_17] [i_17] [i_17 + 1])) : (((/* implicit */int) arr_66 [i_17] [i_17] [i_17 + 3]))))));
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned short) ((short) ((((((/* implicit */int) var_1)) - (((/* implicit */int) var_5)))) & ((+(((/* implicit */int) (unsigned short)50490)))))));
}
