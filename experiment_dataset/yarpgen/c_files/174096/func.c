/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174096
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
    var_18 = ((unsigned int) ((((/* implicit */_Bool) (signed char)11)) ? (3340720947U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56)))));
    var_19 -= ((/* implicit */unsigned int) var_7);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)80))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((2147483648U) ^ (0U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) | (266338304U)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_0])))))));
                    var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)14])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1])))))) || (((/* implicit */_Bool) var_0))));
                }
            } 
        } 
        var_22 -= ((/* implicit */signed char) ((846462723U) & ((+(2147483660U)))));
        var_23 |= ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0]));
    }
    for (signed char i_3 = 4; i_3 < 22; i_3 += 1) 
    {
        var_24 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_8 [i_3])))), (((/* implicit */int) arr_8 [i_3]))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((signed char) max((var_0), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-107)))))))))));
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            var_26 = (-(2147483636U));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_27 = ((/* implicit */unsigned int) max(((unsigned char)67), ((unsigned char)224)));
                var_28 = ((/* implicit */signed char) arr_13 [i_3 - 4] [i_3 - 4] [i_4] [i_4]);
                arr_16 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_8 [i_3 + 1]))) << (((max((var_16), (((/* implicit */unsigned int) var_10)))) - (4294967189U)))));
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                arr_21 [i_3 - 2] [i_3] [i_3] = ((/* implicit */unsigned char) arr_9 [i_3 + 2] [i_3]);
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    for (unsigned char i_8 = 2; i_8 < 23; i_8 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                            arr_26 [i_6] [i_6] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (63U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) < (2147483648U))))) : ((-(4028629002U)))));
                        }
                    } 
                } 
            }
            arr_27 [i_3] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_8 [i_3]), (arr_14 [i_3] [i_3] [i_3])))) && (((/* implicit */_Bool) max((arr_13 [i_3 + 2] [i_3] [i_3 + 1] [i_4 + 1]), (((/* implicit */unsigned int) arr_10 [(unsigned char)21])))))));
            var_30 ^= ((/* implicit */signed char) max((((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_4 - 1]))))) <= (((/* implicit */int) arr_23 [(unsigned char)16]))))), (arr_14 [i_3] [(unsigned char)6] [i_4])));
        }
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                arr_34 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)53)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 + 1] [i_9] [i_10]))) : (arr_9 [i_3] [i_3])))))) ? (((/* implicit */int) arr_28 [i_9] [i_10])) : (((/* implicit */int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_30 [i_3] [i_3])))) < ((+(((/* implicit */int) arr_8 [14U])))))))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    var_31 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)127))));
                    var_32 -= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_2)) ? (arr_24 [i_11] [i_11] [i_10] [i_9] [(unsigned char)20] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))), (((/* implicit */unsigned int) ((signed char) arr_22 [(signed char)12]))))) / (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) << (((4028629007U) - (4028628994U)))))) ? (((266338330U) >> (((((/* implicit */int) (signed char)46)) - (36))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_10])))))));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 345102129U)) ? (((/* implicit */int) arr_33 [i_3] [i_3 - 2])) : (((/* implicit */int) (signed char)-125))))) ? (((((/* implicit */_Bool) max((arr_15 [i_11] [i_10] [i_9]), ((unsigned char)7)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_11)))) : (((/* implicit */int) arr_38 [22U] [i_9] [i_10] [i_3])))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)36)) || (((/* implicit */_Bool) (signed char)8))))))));
                    var_34 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (signed char)121)), ((unsigned char)121)));
                }
            }
            var_35 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)117)) >= (((/* implicit */int) ((unsigned char) 1016U))))) ? (((((/* implicit */_Bool) arr_23 [i_3])) ? (((/* implicit */int) arr_23 [i_3])) : (((/* implicit */int) arr_23 [i_3])))) : ((+(((/* implicit */int) arr_10 [i_9]))))));
        }
    }
    for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_13 = 4; i_13 < 17; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_16 = 1; i_16 < 15; i_16 += 3) 
                        {
                            arr_55 [i_12] [i_12] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_17 [i_12] [i_13 - 3])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_16 + 1] [i_12])))))));
                            var_36 = max((max((arr_12 [i_16] [i_15] [i_13 - 3]), (var_0))), (((unsigned int) ((((/* implicit */_Bool) arr_42 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1571142338U)))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_3))));
                            var_38 -= ((/* implicit */unsigned char) max((arr_24 [i_12] [i_13] [i_14] [i_15] [15U] [i_14] [i_13]), (max((arr_24 [i_12] [(unsigned char)2] [i_14] [i_15] [i_16] [i_16] [i_15]), (arr_37 [i_12] [(signed char)16] [i_12] [i_16 + 4])))));
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (unsigned char)189))));
                        }
                        arr_56 [i_12] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)67))))) >= (((unsigned int) arr_23 [i_12]))));
                    }
                } 
            } 
        } 
        arr_57 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)92)) + (((/* implicit */int) (unsigned char)202))))) : (2147483647U)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)106))));
        /* LoopSeq 2 */
        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) 
        {
            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (-(((/* implicit */int) arr_14 [i_12] [i_12] [i_17])))))));
            var_41 -= ((unsigned char) var_3);
        }
        for (unsigned char i_18 = 2; i_18 < 18; i_18 += 1) 
        {
            var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_12] [8U] [i_18 + 1] [i_18 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_46 [i_18 - 1] [i_18 - 2])))) : (((((/* implicit */_Bool) arr_33 [i_12] [i_18])) ? (arr_20 [(unsigned char)15] [i_18 - 2] [i_18 - 1] [i_18 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_18 - 1] [i_18 - 2])))))));
            arr_63 [i_18 - 1] = ((unsigned char) arr_61 [i_12] [i_18] [i_12]);
            arr_64 [i_12] [i_18] [i_18] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned char)127))));
        }
    }
    for (unsigned int i_19 = 0; i_19 < 22; i_19 += 3) 
    {
        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 730644557U)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (unsigned char)4))))))) && (((/* implicit */_Bool) arr_13 [(signed char)1] [(signed char)1] [i_19] [i_19])))))));
        var_44 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((unsigned char) 4176715924U))), ((~(arr_37 [i_19] [i_19] [(signed char)16] [i_19]))))) - (((((/* implicit */_Bool) (unsigned char)102)) ? (2449790173U) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_22 [(signed char)10])) + (2147483647))) << (((((/* implicit */int) var_13)) - (218))))))))));
    }
    var_45 = ((/* implicit */signed char) var_9);
}
