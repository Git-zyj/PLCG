/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165235
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) arr_3 [i_0])), ((~((+(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_3 [i_0])), (14454021970465968128ULL)))))) ? (min((((/* implicit */long long int) arr_1 [i_1] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) | (arr_2 [i_0] [i_1]))))) : (var_12)));
            var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (short)-11327)) : (((/* implicit */int) (!((_Bool)1))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */int) (+((-(arr_0 [i_0])))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_14 [i_0] [i_0] [i_2] [i_4] [i_4]), (arr_9 [i_0] [i_1] [(short)6]))))))) ? (((/* implicit */int) (short)11317)) : ((~(((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (_Bool)1)))))))));
                            var_20 = ((/* implicit */_Bool) min((min((arr_3 [i_0]), (arr_3 [i_0]))), (((/* implicit */unsigned char) (((~(((/* implicit */int) (short)-11317)))) <= (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_3] [i_2])))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) || (((/* implicit */_Bool) ((unsigned int) -1065904124)))))), ((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_0] [i_5]))))));
                            var_22 = ((unsigned long long int) (_Bool)1);
                        }
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [i_0])), ((+(18446744073709551615ULL)))));
                    }
                } 
            } 
        }
        for (signed char i_6 = 2; i_6 < 18; i_6 += 2) 
        {
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
            var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_6] [i_6 - 1])) ? (arr_16 [i_6] [i_0]) : (var_6)))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)29))))), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
            var_26 = ((/* implicit */int) ((arr_19 [i_6 + 1] [i_6]) >> (((/* implicit */int) ((min((4294967290U), (((/* implicit */unsigned int) var_10)))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))))))));
            var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (var_4)));
            /* LoopSeq 1 */
            for (short i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_28 = ((/* implicit */long long int) ((signed char) 1761216104));
                    arr_25 [i_0] [i_6] [i_0] [i_8] = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        arr_28 [i_0] [i_7 + 1] [i_7 + 1] = ((/* implicit */int) ((unsigned int) min(((-(((/* implicit */int) (short)-11310)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_6] [i_0])), (var_15)))))));
                        var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [5U] [(_Bool)1] [i_0]))));
                    }
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        arr_31 [i_0] [i_6] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                        arr_32 [i_0] [i_6 - 2] [i_7] [i_6 - 2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)10207))));
                    }
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_0]);
                }
                for (unsigned int i_11 = 3; i_11 < 18; i_11 += 4) 
                {
                    var_30 = ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_30 [i_6 - 1] [i_7 - 1] [i_7 + 1] [i_0] [i_11 - 2]), (arr_30 [i_0] [i_0] [i_7 + 1] [i_0] [i_11 - 3])))), (((arr_30 [i_6] [i_7 + 1] [i_7 - 1] [i_0] [i_11 - 2]) ? (((/* implicit */int) arr_30 [i_0] [i_7 + 1] [i_7 + 1] [i_0] [i_11 - 1])) : (((/* implicit */int) (_Bool)1))))));
                    arr_36 [i_0] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 4294967283U)), (9004101329296105255ULL)));
                    var_31 = ((/* implicit */_Bool) var_15);
                }
                var_32 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                arr_37 [i_0] [i_6] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */short) arr_20 [i_0] [i_0])), (var_5)))) ? (min((((/* implicit */unsigned long long int) var_3)), (18010000462970880ULL))) : (((/* implicit */unsigned long long int) 1065904142)))), (((/* implicit */unsigned long long int) var_12))));
            }
        }
        /* vectorizable */
        for (signed char i_12 = 2; i_12 < 17; i_12 += 4) 
        {
            var_33 = ((arr_38 [i_0] [i_12 + 1] [i_0]) + (arr_38 [i_12] [i_12 + 1] [i_12 + 1]));
            arr_42 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_0] [i_12 - 2])) : (((/* implicit */int) ((short) arr_19 [12LL] [i_12])))));
            var_34 = ((/* implicit */signed char) var_12);
        }
        var_35 = ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned int) var_9))));
        arr_43 [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) >> (((/* implicit */int) (!(arr_20 [i_0] [i_0]))))));
    }
    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))));
    var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
}
