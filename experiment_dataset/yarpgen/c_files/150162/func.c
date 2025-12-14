/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150162
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 4; i_2 < 8; i_2 += 4) 
                {
                    var_20 = max((min(((signed char)-106), (var_17))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))))));
                    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_5 [i_2] [i_2 - 2] [i_0]), ((short)(-32767 - 1)))))));
                    var_22 -= ((/* implicit */unsigned char) (short)-512);
                    var_23 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_9))))))), (((((/* implicit */int) arr_6 [i_2 - 4] [i_2 - 1] [i_2 + 2])) - (((/* implicit */int) var_2))))));
                }
                for (short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (short)-1)) <= (((/* implicit */int) (short)-23)))))));
                    arr_12 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_1] [i_3]);
                    var_25 = ((/* implicit */short) (unsigned char)192);
                }
                for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) max((var_8), (((/* implicit */short) var_17)))))))) % (((/* implicit */int) var_3))));
                    arr_18 [i_0] [i_0] = arr_4 [i_0];
                    var_26 = arr_4 [(short)8];
                }
                for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_27 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)4)) << (((/* implicit */int) ((((/* implicit */int) max(((short)-3), (((/* implicit */short) (signed char)-59))))) == (((/* implicit */int) (short)13)))))));
                    var_28 -= (signed char)15;
                }
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    var_29 += ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (((((/* implicit */int) (unsigned char)195)) << (((((/* implicit */int) (short)847)) - (832)))))));
                    var_30 = ((/* implicit */short) ((((((/* implicit */int) var_6)) != (((/* implicit */int) arr_0 [i_0] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)4064)) ^ (((/* implicit */int) (signed char)-8)))))));
                    arr_25 [i_0] [(short)1] [(short)1] = (short)-3712;
                    arr_26 [i_0] [i_0] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) (short)-6))))));
                    var_31 -= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_6] [i_6] [i_6]))))) && ((!(((/* implicit */_Bool) arr_11 [(signed char)6] [i_0] [i_6]))))))), (max((((((/* implicit */int) (signed char)-83)) | (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)252)))))))));
                }
                var_32 &= ((/* implicit */unsigned char) max((max((arr_15 [i_0]), (var_0))), (((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_0])) > (((/* implicit */int) arr_15 [i_1])))))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 1; i_7 < 6; i_7 += 1) 
                {
                    arr_29 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-33)), (arr_2 [i_7 + 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_33 = (short)0;
                        arr_33 [i_7] [i_0] [i_1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) arr_28 [(short)1] [i_7]);
                        var_34 = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)195)) ^ (((((/* implicit */int) var_12)) << (((((/* implicit */int) (signed char)34)) - (20))))))), (((/* implicit */int) (short)-2))));
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 4; i_11 < 8; i_11 += 2) 
                        {
                            arr_44 [i_11] [i_10] [(unsigned char)1] [i_10] [i_0] = ((/* implicit */unsigned char) ((short) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-8))))), (arr_13 [i_11 - 1] [i_11] [i_11 + 2] [i_11]))));
                            var_35 = ((/* implicit */short) min((max((((/* implicit */int) ((short) var_2))), ((-(((/* implicit */int) (short)20475)))))), (((/* implicit */int) arr_38 [i_0] [i_0] [i_9] [i_1] [i_0]))));
                            var_36 ^= ((/* implicit */unsigned char) arr_22 [i_9] [i_11 + 1]);
                        }
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            var_37 += var_12;
                            var_38 = ((/* implicit */short) (((+(((/* implicit */int) (signed char)-15)))) | (((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_35 [(short)5] [i_9] [i_9])) + (22097)))))));
                            arr_47 [i_0] [i_10] [(signed char)4] [(short)9] = ((/* implicit */short) ((((/* implicit */int) var_6)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        }
                        var_39 = ((/* implicit */signed char) min(((+((~(((/* implicit */int) (short)-18)))))), ((-(((/* implicit */int) (short)-16384))))));
                    }
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
                    {
                        arr_52 [i_0] [i_1] [i_1] [i_13] = min((((/* implicit */short) var_17)), (min((arr_27 [i_0] [i_0] [i_13]), (var_9))));
                        var_40 |= ((/* implicit */unsigned char) ((signed char) var_18));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (-(((/* implicit */int) var_17)))))));
                                var_42 = ((/* implicit */unsigned char) (+(((((/* implicit */int) ((((/* implicit */int) arr_30 [i_15])) >= (((/* implicit */int) (short)-6857))))) - (((/* implicit */int) var_7))))));
                                arr_59 [i_1] [i_1] [i_1] [i_1] [i_1] = min((((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)9808))))) || (((/* implicit */_Bool) (short)1792))))), (arr_51 [i_0] [i_15]));
                            }
                        } 
                    } 
                    arr_60 [i_0] [i_9] = ((signed char) var_9);
                }
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned char) var_10);
    var_44 = ((/* implicit */short) min((min((((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)48)))), (((/* implicit */int) ((short) var_13))))), ((((!(((/* implicit */_Bool) var_19)))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) var_18))))));
    var_45 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_12)))));
}
