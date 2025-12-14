/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174523
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
    var_18 = ((/* implicit */unsigned long long int) var_1);
    var_19 = ((/* implicit */unsigned short) ((signed char) (-(((5902279379678287949ULL) >> (((((/* implicit */int) (unsigned short)10869)) - (10820))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_8)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_0])))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) (-(min((var_1), (((/* implicit */unsigned int) arr_2 [i_1])))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned short)62349)))), (((/* implicit */int) (_Bool)1))));
            var_20 = ((/* implicit */short) arr_1 [i_0]);
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) arr_1 [i_1]))), ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_1]))))))));
                var_22 = ((/* implicit */unsigned int) max(((unsigned short)14384), (((/* implicit */unsigned short) (short)32762))));
                var_23 = ((unsigned long long int) var_16);
                var_24 = ((/* implicit */unsigned int) ((((_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((signed char) arr_4 [i_1]))) : (min((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((short) 16974161346400668220ULL)))))));
                var_25 = ((/* implicit */int) ((unsigned char) (unsigned char)48));
            }
            for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                arr_15 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((unsigned short) (_Bool)1))) >> (((min((((/* implicit */unsigned int) arr_4 [i_0])), (var_16))) - (1840203082U)))))));
                var_26 = ((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 2]);
            }
            for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 2) 
            {
                arr_18 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 1] [i_4 + 3] [i_4 - 3])), ((~(-1)))));
                var_27 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_15)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_4 + 1]))))), (arr_3 [i_4 - 3] [i_4 - 1] [i_0])));
                var_28 = ((/* implicit */unsigned char) ((long long int) var_7));
                arr_19 [i_0] [i_1] [i_4 + 3] [i_4] = ((/* implicit */_Bool) ((unsigned int) max((arr_14 [i_0] [i_4 - 1]), (arr_14 [i_1] [i_4 + 3]))));
            }
        }
        arr_20 [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned int i_5 = 3; i_5 < 8; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 10; i_6 += 4) 
            {
                {
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) var_13))))))));
                    arr_26 [i_0] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_0])) * ((+((+(((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        var_30 += ((/* implicit */unsigned long long int) var_11);
                        var_31 = ((/* implicit */short) (_Bool)1);
                        var_32 = ((/* implicit */int) ((short) min((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_6] [i_6])), ((+(((/* implicit */int) arr_23 [i_0] [i_0])))))));
                    }
                }
            } 
        } 
        arr_29 [i_0] = ((/* implicit */short) ((unsigned short) var_0));
    }
    for (int i_8 = 3; i_8 < 21; i_8 += 4) 
    {
        arr_32 [(signed char)13] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_30 [i_8]), (arr_31 [i_8 - 1])))) == (((arr_31 [i_8 - 3]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_31 [i_8 - 1]))))));
        var_33 = ((/* implicit */unsigned short) (((!(arr_31 [i_8 - 2]))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_8]))))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) ((short) var_17))))) : (((((((/* implicit */int) arr_30 [i_8])) != (((/* implicit */int) var_7)))) ? (((/* implicit */int) arr_31 [i_8])) : (((/* implicit */int) var_6))))));
        var_34 = ((/* implicit */signed char) (+(((unsigned long long int) arr_31 [i_8 - 1]))));
    }
    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_10))));
}
