/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140633
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) max((max((arr_0 [i_0]), (arr_3 [i_1] [i_0] [i_0]))), (arr_1 [i_0] [i_0]))))));
                var_19 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_1]);
                var_20 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) (unsigned short)54917)))));
                var_21 = ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned short)35962))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max((((unsigned short) max(((signed char)93), (((/* implicit */signed char) (_Bool)1))))), (arr_2 [i_0] [i_1])));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_9 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((signed char) max((((((/* implicit */int) arr_2 [i_2] [i_2])) | (((/* implicit */int) (unsigned short)15491)))), (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-48)))))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_12)))))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_10 [i_2]))))) >> ((+(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_2]))))))));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_0 [(signed char)1]))));
            var_26 = ((/* implicit */unsigned short) max((var_26), (arr_2 [i_2] [(_Bool)0])));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_27 = ((((/* implicit */int) arr_14 [i_2])) == ((+((+(((/* implicit */int) arr_14 [(unsigned short)5])))))));
            arr_16 [i_2] = ((_Bool) (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_17)))) : (((var_0) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_11))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_21 [i_2] [i_5] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) var_18));
                var_28 = (_Bool)1;
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_25 [i_2] [i_5] [i_2] = ((/* implicit */signed char) (((+(((/* implicit */int) var_14)))) << (((/* implicit */int) arr_24 [i_2] [i_2]))));
                var_29 ^= ((/* implicit */_Bool) var_16);
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [(unsigned short)7])) : (((/* implicit */int) ((_Bool) arr_12 [i_5] [i_5])))));
            }
            for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_31 = ((/* implicit */unsigned short) arr_6 [i_5]);
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 1; i_10 < 8; i_10 += 1) /* same iter space */
                    {
                        var_32 = var_15;
                        var_33 ^= var_3;
                    }
                    for (unsigned short i_11 = 1; i_11 < 8; i_11 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (_Bool)1))));
                        arr_35 [i_2] [i_5] [i_5] [(_Bool)1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_5]))));
                        var_35 = ((((/* implicit */int) arr_27 [i_5] [i_5] [i_5])) <= (((/* implicit */int) arr_33 [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_5] [i_11 + 1])));
                        var_36 *= ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_2] [i_5] [i_8] [(unsigned short)2] [i_8] [i_8])) >> (((/* implicit */int) (_Bool)1))));
                    }
                }
                for (unsigned short i_12 = 3; i_12 < 6; i_12 += 4) 
                {
                    arr_39 [i_5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_2] [i_5] [i_8] [i_12 + 4])) > (((/* implicit */int) arr_10 [i_2]))));
                    var_37 = (_Bool)1;
                }
                var_38 = (_Bool)1;
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)40137)) : (((/* implicit */int) arr_22 [(_Bool)1] [i_5] [i_8]))));
                var_40 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_38 [i_2] [i_2] [i_2] [i_5] [(signed char)6] [i_8]))));
            }
            var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_42 = ((/* implicit */unsigned short) (_Bool)1);
        var_43 = ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) (((_Bool)0) || ((_Bool)1)))) : (((/* implicit */int) var_18))));
        var_44 = ((/* implicit */signed char) (+((+((+(((/* implicit */int) arr_40 [i_13]))))))));
    }
    for (signed char i_14 = 1; i_14 < 9; i_14 += 1) 
    {
        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) arr_30 [i_14 + 1] [i_14]))));
        arr_46 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) (_Bool)1)) : (((arr_15 [i_14] [(signed char)8]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) ? (max((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)65535))))), ((~(((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14])) : (((/* implicit */int) arr_23 [i_14] [i_14 - 1] [i_14 - 1] [i_14]))))));
    }
    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
    var_47 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_15)))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55429))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))));
}
