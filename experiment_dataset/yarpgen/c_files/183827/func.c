/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183827
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
    var_13 = ((/* implicit */unsigned char) (+((((_Bool)0) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (_Bool)1))))));
    var_14 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? ((+(((/* implicit */int) (unsigned char)104)))) : (((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)159)))))))));
        arr_2 [(_Bool)1] [(unsigned char)16] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_1 [i_0])))) * ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((unsigned char) (!(((/* implicit */_Bool) var_3))));
    }
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) var_11))))) + ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned char)14])) - (((/* implicit */int) var_2)))))))) - ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)244)))))))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_11))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (unsigned char)156))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_3])) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_11))));
            var_19 = ((_Bool) var_4);
        }
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            arr_16 [i_1] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            arr_26 [(_Bool)0] [(_Bool)1] [i_5] [i_4] [(unsigned char)9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_17 [i_7 + 1] [i_6] [i_5] [i_4]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (arr_0 [i_5])))) : (((/* implicit */int) arr_17 [i_1 + 1] [i_1 + 3] [i_5 - 1] [i_7 + 1])))) >> (((/* implicit */int) min((arr_10 [i_4]), (((var_7) && ((_Bool)1))))))));
                            var_20 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (_Bool)0))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)254))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) (unsigned char)206)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)174), (((/* implicit */unsigned char) (_Bool)1))))) == (((/* implicit */int) var_0)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 1; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_8] [(_Bool)1] [i_4])) ? (((((/* implicit */int) (unsigned char)188)) / (((/* implicit */int) arr_4 [i_1 + 3] [i_4])))) : (((/* implicit */int) arr_8 [i_6]))));
                            var_24 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [i_8])) > (((/* implicit */int) arr_21 [i_4] [(_Bool)1] [i_5 - 1] [i_4] [i_4])))))));
                        }
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), (((((/* implicit */int) ((unsigned char) (_Bool)1))) ^ (((/* implicit */int) (_Bool)1))))));
                        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1]))));
                        arr_29 [i_4] = ((/* implicit */_Bool) var_11);
                    }
                } 
            } 
        }
        arr_30 [(_Bool)1] = ((/* implicit */_Bool) (unsigned char)0);
        arr_31 [i_1 - 1] = arr_15 [i_1];
    }
    for (unsigned char i_9 = 2; i_9 < 17; i_9 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) min((arr_14 [i_9] [i_9] [i_9 - 2]), (((/* implicit */unsigned char) arr_8 [i_9]))))))), (((((((/* implicit */int) var_7)) * (((/* implicit */int) var_0)))) * ((~(((/* implicit */int) (_Bool)1))))))));
        arr_34 [i_9] = ((var_10) && (((_Bool) (!(var_10)))));
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_9] [i_9 + 1])) ? (((/* implicit */int) (!(var_2)))) : (((((/* implicit */int) var_1)) - ((~(((/* implicit */int) var_3))))))));
    }
}
