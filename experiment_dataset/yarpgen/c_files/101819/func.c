/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101819
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
    var_15 = ((/* implicit */_Bool) ((long long int) var_8));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)255))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1114033495U)) && (((1114033477U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) var_4))))))))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned int) (unsigned char)125)))));
                }
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_18 [i_0] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((arr_7 [i_0] [i_1]) ? (arr_8 [i_0] [(_Bool)1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((arr_1 [i_3]) | (((arr_10 [i_3]) | (((/* implicit */int) arr_0 [i_3] [i_0])))))) * (((/* implicit */int) arr_0 [i_4] [i_4])))))));
                    }
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_12))));
                            var_20 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) min((arr_10 [i_5]), (arr_2 [i_0]))))) > (((int) arr_2 [i_0]))));
                        }
                        for (short i_7 = 1; i_7 < 12; i_7 += 4) 
                        {
                            var_21 |= ((/* implicit */int) arr_9 [i_0] [11LL] [i_3] [i_7]);
                            var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)137)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_5] [6]))) - (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (min((arr_8 [i_0] [i_3] [i_1] [i_7]), (2137587491093436439LL)))))));
                            var_23 |= ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [4LL])))), (arr_0 [i_3] [i_3])));
                        }
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)3318)))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)7285)))))));
                            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_13))) ? (((/* implicit */long long int) 2116236941U)) : (max((arr_14 [i_0] [i_0]), (arr_14 [i_3] [i_8])))));
                            var_26 = (~(max((4294967295U), (((/* implicit */unsigned int) (unsigned char)140)))));
                            arr_29 [i_1] = arr_15 [i_0] [i_0] [i_3] [i_5] [i_3] [i_1];
                        }
                        var_27 -= ((/* implicit */unsigned char) (-((((-(((/* implicit */int) (unsigned char)0)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3])))))))));
                    }
                    var_28 |= ((/* implicit */long long int) ((((((((/* implicit */_Bool) 4953192422330713234LL)) ? (var_13) : (1114033515U))) / (((/* implicit */unsigned int) ((arr_16 [i_0] [i_0] [i_1] [i_1] [i_3]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)130))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_12 [i_1] [i_1] [i_0] [i_0])))))))));
                    var_29 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) (+(3180933818U)))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_15 [(short)14] [(short)14] [(short)14] [i_1] [i_3] [i_1])) : (arr_8 [i_0] [i_0] [i_1] [i_3])))))), (var_1)));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_30 -= ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_9] [i_10]))) : (((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_10] [i_9]))) : (var_3)))));
                            var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))) && (arr_5 [i_0])));
                            arr_35 [i_1] [(unsigned char)13] [(unsigned char)13] [i_9] [14] = ((/* implicit */short) var_1);
                            arr_36 [i_1] [i_3] [(_Bool)1] [(_Bool)1] = var_14;
                        }
                        var_32 = ((/* implicit */long long int) max((-1013124316), (127)));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-112)))) ? (min((((((/* implicit */int) var_5)) + (((/* implicit */int) var_5)))), (((/* implicit */int) arr_16 [i_11] [i_9] [i_3] [i_1] [i_0])))) : (((/* implicit */int) ((3180933800U) < (3180933800U))))));
                            var_34 = ((/* implicit */unsigned int) (~((~(arr_1 [i_0])))));
                        }
                    }
                }
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((-(var_0))) + (((/* implicit */int) (short)-11075))))) & (var_11)));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        {
                            var_36 = arr_5 [i_1];
                            arr_46 [i_1] [i_1] [i_12] [i_12] [10] = ((/* implicit */unsigned char) ((-3465746176725884957LL) / (-9223372036854775805LL)));
                            var_37 = ((/* implicit */int) max((((((/* implicit */_Bool) -1325527077)) ? (arr_6 [i_0] [i_12] [i_13]) : (arr_6 [i_12] [i_12] [i_12]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_10 [i_13])))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))));
                            arr_47 [i_1] [i_1] [i_12] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) - (((((/* implicit */_Bool) ((((arr_1 [i_0]) + (2147483647))) << (((601095181U) - (601095181U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) : (max((arr_42 [i_0] [i_1] [i_1] [i_12] [i_1] [i_1]), (((/* implicit */unsigned int) arr_26 [i_0] [i_1] [i_1] [i_12] [i_13]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 |= ((/* implicit */short) (unsigned char)157);
}
