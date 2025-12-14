/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12545
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
    var_12 -= (((+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)29)), ((unsigned short)6146)))))) - (((int) (-(((/* implicit */int) (unsigned char)212))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) ((int) arr_2 [i_1]))));
            var_14 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_4) > ((~(((/* implicit */int) arr_8 [i_1] [i_2]))))))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((((/* implicit */int) (unsigned char)104)) << (((var_2) + (522738486))))))))));
            arr_11 [(unsigned short)4] [i_1] &= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)104)))), (arr_9 [(unsigned short)2]))), (((arr_8 [i_1 + 2] [i_1 + 2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 1]))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_4]))))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    arr_19 [i_1] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) ((unsigned char) (unsigned short)13311))) : (((/* implicit */int) (unsigned char)191))))) ? (((/* implicit */int) (unsigned short)13311)) : (((/* implicit */int) (unsigned short)60311))));
                    arr_20 [i_1 + 2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((signed char) arr_9 [i_3]));
                }
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((arr_8 [i_1 + 3] [i_1 + 1]) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_7 [i_1 + 2] [i_6] [i_1 - 1])))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) arr_5 [i_1])) : (arr_14 [i_1] [i_3] [i_4]))))))));
                    var_17 -= ((/* implicit */_Bool) var_6);
                }
                arr_23 [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((((_Bool) arr_7 [i_1 + 3] [i_3] [i_4])) ? (((((/* implicit */int) arr_18 [i_1] [i_3] [i_4])) / (arr_14 [i_4] [i_3] [i_1]))) : (((arr_17 [i_1] [i_3] [i_3] [i_4] [i_1]) ? (((/* implicit */int) arr_7 [i_4] [i_3] [i_1])) : (((/* implicit */int) arr_22 [i_4] [i_3]))))))));
                arr_24 [i_4] [i_3] [i_1] = ((unsigned char) var_11);
                arr_25 [i_3] = var_0;
            }
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                arr_30 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)156)) <= (((/* implicit */int) (signed char)-79))));
                arr_31 [i_3] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_7] [i_7])) - (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_14 [i_7] [i_3] [i_1 + 1])))))))))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((((/* implicit */int) arr_22 [i_1] [i_1 + 1])) - (var_2))))))));
                arr_32 [i_3] [i_3] [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((arr_2 [i_7]), (((/* implicit */unsigned char) arr_21 [i_1] [i_3] [i_3]))))) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_7])) ? (var_3) : (((/* implicit */int) arr_12 [i_1]))))) ? (((((/* implicit */int) arr_29 [i_1] [i_3] [i_3] [(unsigned short)11])) >> (((/* implicit */int) arr_17 [i_7] [i_7] [i_3] [i_7] [i_7])))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_7] [(unsigned char)8] [i_3] [i_1])) : (((/* implicit */int) var_10)))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_7])) && (((/* implicit */_Bool) arr_29 [(unsigned char)17] [i_3] [i_3] [i_1]))))))))));
            }
            arr_33 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_3])) + (((/* implicit */int) var_9)))))) ? (arr_14 [i_1] [i_1] [5U]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_6))))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) << (((((/* implicit */int) var_11)) - (161)))))) ? ((~(((/* implicit */int) ((unsigned char) arr_4 [i_1]))))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_7))))))));
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_0), (arr_13 [i_1] [i_3] [i_1])))), ((-(((/* implicit */int) var_6))))))) ? (max((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_11))))), (arr_27 [(_Bool)1]))) : (((/* implicit */int) var_10))));
        }
        arr_34 [i_1 + 3] = ((/* implicit */unsigned char) (~(((((arr_26 [(_Bool)1]) == (((/* implicit */int) var_7)))) ? (((/* implicit */int) ((_Bool) arr_1 [i_1] [i_1]))) : (arr_26 [(unsigned char)16])))));
    }
}
