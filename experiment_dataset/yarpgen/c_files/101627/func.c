/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101627
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((max((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0]))) >> (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0])))) - (1969111964))))) * (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_1))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56)))))))))));
        var_14 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) var_13)), (min((var_12), (var_12))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_0 [i_0]))))) > ((+(((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */int) arr_0 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) ((signed char) (signed char)51))) : (((/* implicit */int) ((signed char) arr_4 [i_1] [i_1])))));
        var_16 = ((/* implicit */unsigned char) ((_Bool) (signed char)51));
        arr_6 [i_1] = arr_0 [i_1];
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((int) (signed char)63));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            arr_14 [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((signed char) arr_12 [i_3 + 1] [i_3 - 1] [i_3]));
            arr_15 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_13 [(unsigned short)9] [(_Bool)1]))) ? ((+(arr_7 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1])))));
            arr_16 [i_2] [i_3] = ((/* implicit */signed char) var_1);
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_3 - 1])) % (((/* implicit */int) ((signed char) arr_13 [i_2] [i_2])))));
        }
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_1 [(unsigned char)15])) | (arr_9 [i_2] [i_2])));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 &= ((/* implicit */_Bool) arr_17 [i_4] [i_4]);
        arr_21 [i_4] = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) min((((/* implicit */short) arr_18 [i_4] [4U])), (var_13))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 3; i_7 < 22; i_7 += 2) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_31 [i_8 - 1] [i_5] [i_5] [14LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_24 [i_5 + 4] [i_6 + 1]) : (((/* implicit */int) arr_27 [i_5 + 1] [i_6 - 1])))))));
                            /* LoopSeq 1 */
                            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-24)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min(((signed char)-51), ((signed char)72)))) : (((/* implicit */int) (unsigned short)0))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_26 [i_9]))))))) + (((/* implicit */int) arr_32 [i_5] [i_8] [i_8] [i_7 - 3] [i_6] [i_5]))));
                                arr_35 [i_5 - 1] [(unsigned char)8] [i_6 - 1] [i_5] [i_7] [i_6 - 1] [3ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)153)) | (((/* implicit */int) (_Bool)1))));
                            }
                            arr_36 [i_5] [i_5] [i_6] [i_7 - 1] [i_8] [i_8 - 1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_33 [i_5 - 1] [i_6 + 2] [i_5] [i_8] [i_8 - 1]) ? (((/* implicit */int) arr_28 [i_6] [i_6 + 2] [i_8 - 1])) : (((/* implicit */int) arr_28 [i_5] [i_6 + 1] [i_8 - 1]))))), (arr_26 [(short)3])));
                        }
                    } 
                } 
                arr_37 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-46)) % (((/* implicit */int) (_Bool)1))));
                arr_38 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (short)31081)) >= (((/* implicit */int) (unsigned char)3))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (_Bool)1);
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))), (((/* implicit */int) min((((/* implicit */short) var_6)), (var_7))))))), (((((/* implicit */_Bool) min((var_10), (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) : (max((var_12), (((/* implicit */unsigned int) var_3))))))));
}
