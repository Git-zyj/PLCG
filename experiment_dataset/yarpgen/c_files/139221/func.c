/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139221
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)40566)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)16818))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)48743)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned short)54661)) ? (((/* implicit */int) (unsigned short)46748)) : (((/* implicit */int) (unsigned short)18787)))) : (((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (signed char)-28))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_19))));
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_14 [i_0] [i_1 + 2] [i_1] [i_1 - 3] [i_2] [i_4] [i_4]))));
                            arr_17 [i_0] [(unsigned short)12] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) == (((((/* implicit */_Bool) (unsigned short)24091)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)31554)) : (((((/* implicit */_Bool) (unsigned short)46761)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)54396))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    {
                        arr_23 [i_6] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2] [i_0])) ^ (((/* implicit */int) arr_7 [i_1] [i_1 + 2] [i_0]))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)18768)) ? (((/* implicit */int) (unsigned short)2694)) : (((/* implicit */int) (unsigned short)13667)))) > ((+(((/* implicit */int) (unsigned short)7161)))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
                        {
                            var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10270)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (signed char)-79))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16307))))) : (((/* implicit */int) (unsigned short)913))));
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                            arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_1 - 4] [i_6 + 4] [i_7 + 1])) >= (((/* implicit */int) arr_19 [i_1 - 4] [i_6 + 4] [i_7 + 1]))));
                        }
                        for (unsigned short i_8 = 4; i_8 < 20; i_8 += 2) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_5] [i_6] [i_8 - 1] [i_5] [(signed char)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) arr_7 [i_1 - 3] [i_5] [i_0])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) arr_30 [i_0] [i_1] [i_5] [(signed char)15] [i_8 - 2]))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned short)11247)) : (((/* implicit */int) (signed char)109))))) ? (((/* implicit */int) arr_27 [(signed char)4] [i_1 - 3] [i_1] [i_1] [i_1 - 3])) : (((((/* implicit */_Bool) arr_25 [i_8] [i_1 - 3] [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (unsigned short)47077))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (unsigned short)3997)) : (((/* implicit */int) (unsigned short)26341)))))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (arr_10 [i_6 + 1] [i_1])));
                            arr_32 [(unsigned short)1] [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (unsigned short)43552))));
                        }
                        for (unsigned short i_9 = 4; i_9 < 20; i_9 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)32768))));
                            arr_35 [i_9 - 3] [i_6 + 1] [i_0] [i_5] [i_0] [i_1 + 2] [i_0] = ((/* implicit */signed char) (unsigned short)65535);
                        }
                        var_31 = ((/* implicit */signed char) (unsigned short)6186);
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)18] [(unsigned short)18])) : (((/* implicit */int) var_3)))) & ((-(((/* implicit */int) var_5)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) + (((((/* implicit */int) (unsigned short)10840)) * (((/* implicit */int) (signed char)-59))))));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5196)) ? (((/* implicit */int) (unsigned short)7339)) : (((/* implicit */int) (unsigned short)35750))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)32768))) : (((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_19)) - (42536)))))));
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 2] [i_10 + 2])))))));
        }
    }
    for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        arr_42 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)58)) >> (((((/* implicit */int) (unsigned short)7441)) - (7419)))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-99)) ^ (((/* implicit */int) (unsigned short)17166))));
    }
    var_36 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)30134)), (max((((/* implicit */int) max((var_11), (var_8)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) var_10))))))));
    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_5)))) : ((~(((/* implicit */int) var_1)))))), (((((/* implicit */int) var_18)) ^ (((/* implicit */int) var_13)))))))));
}
