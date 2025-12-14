/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157729
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) ((_Bool) arr_5 [i_2] [i_3])))), (((((/* implicit */_Bool) min((arr_13 [i_3]), (((/* implicit */unsigned short) arr_5 [i_0] [i_1]))))) ? (((/* implicit */int) max(((unsigned short)43734), (arr_12 [i_3] [i_1] [i_2] [i_3] [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) (unsigned short)0))))))))));
                            arr_14 [i_4] [i_1] [i_1] = ((unsigned char) arr_1 [i_4] [i_3]);
                        }
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) (unsigned char)228))))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) min((arr_4 [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_3])))))) : (min((((/* implicit */int) arr_2 [i_2])), (((((/* implicit */_Bool) (unsigned short)9174)) ? (((/* implicit */int) arr_2 [(unsigned char)9])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_1] [(unsigned short)12]))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [i_3] [i_5])) != (((/* implicit */int) arr_16 [i_0] [i_5] [i_2]))))) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_5]))));
                            var_16 = min((((/* implicit */unsigned short) arr_2 [i_1])), (var_4));
                            var_17 = (_Bool)1;
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)10))))))));
                            var_18 = ((/* implicit */_Bool) min((((/* implicit */int) var_9)), (((arr_10 [i_0] [i_1] [i_1] [(_Bool)1]) ? (((/* implicit */int) ((var_8) || (arr_10 [i_0] [i_0] [i_6] [i_3])))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */int) arr_12 [i_3] [i_3] [i_1] [(unsigned short)12] [(unsigned char)16] [i_1])) + (((/* implicit */int) arr_6 [i_0] [i_1])))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_3] [i_6] [i_1]))))) ? (min((((/* implicit */int) var_6)), (((((/* implicit */int) arr_0 [i_1] [i_1])) ^ (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_3] [i_6])))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_12 [i_3] [i_1] [i_2] [i_3] [i_6] [(unsigned short)2])))) || ((!((_Bool)0))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_26 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((unsigned short) var_2)))) + (min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_2] [i_2]))))));
                            var_20 = ((/* implicit */unsigned char) min((((((((/* implicit */int) (unsigned char)234)) * (((/* implicit */int) (unsigned char)14)))) * (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)233)))))), (min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)244)))), (((/* implicit */int) (unsigned char)2))))));
                            var_21 = ((/* implicit */_Bool) ((max((((/* implicit */int) arr_17 [i_3] [i_3] [(_Bool)1] [i_1] [(_Bool)1])), (((((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_3] [i_7])) - (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [(unsigned char)0] [i_7])))))) << (((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3])) ? (((((/* implicit */int) (unsigned char)227)) ^ (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_1 [i_2] [i_2])))) - (213)))));
                            var_22 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_12)))) * (((((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_2] [i_7])) ? (((/* implicit */int) arr_6 [i_7] [i_3])) : (((/* implicit */int) var_2)))) + (((/* implicit */int) ((unsigned char) var_1)))))));
                        }
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_3] [i_2] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_4))))) ? (((arr_5 [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_2] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))))))))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)160)) - (160))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) min((var_7), (var_7)))));
            var_26 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)26996), (arr_7 [(unsigned short)10] [(unsigned short)10] [i_0]))))))), (((((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)2645)))) * (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (_Bool)0)))))))));
        }
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(min((((/* implicit */int) arr_1 [i_0] [i_0])), ((+(((/* implicit */int) (unsigned short)8563)))))))))));
            arr_29 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_23 [i_8] [i_8] [(unsigned short)20] [i_0] [i_0]) ? ((-(((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)53)) - (25)))))))) ? (((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_8] [i_8])) - ((~(((/* implicit */int) arr_2 [i_0])))))) : ((+((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_8] [i_8]))))))));
            var_28 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_8])) : (((/* implicit */int) arr_6 [i_0] [i_8]))))));
            arr_30 [i_0] [i_0] [i_8] = min((arr_10 [i_0] [i_8] [i_8] [i_8]), (arr_6 [i_0] [(unsigned char)10]));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((~(((/* implicit */int) arr_8 [i_9] [i_9] [i_9] [(_Bool)1] [i_8] [i_0])))) & (((/* implicit */int) arr_22 [i_9] [i_0] [i_0] [(_Bool)1] [i_0])))))));
                var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((arr_8 [i_9] [i_9] [i_9] [i_8] [i_9] [i_9]) ? (((/* implicit */int) min((min((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_6)))), (arr_19 [(unsigned short)2] [i_0] [i_8] [i_8] [i_9])))) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_3)))) != ((~(((/* implicit */int) (unsigned short)27791))))))))))));
                var_32 = ((/* implicit */unsigned char) var_4);
            }
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) arr_5 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_31 [i_0] [i_8]))))) ? ((-(((/* implicit */int) arr_28 [i_10] [i_10])))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) var_13)))));
                var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)46545)) >> (((((/* implicit */int) var_4)) - (59405))))), (((((/* implicit */_Bool) arr_12 [i_10] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_28 [i_0] [i_8])) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_8] [i_8]))) & ((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_8] [i_8] [i_10])))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_8] [(unsigned short)10] [i_8] [i_10] [i_10])) ? ((~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_10])))) : (((/* implicit */int) var_12))))));
                var_35 |= ((/* implicit */unsigned short) arr_24 [(unsigned short)1] [i_8] [(unsigned short)1] [(unsigned short)1] [(unsigned short)1]);
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_38 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_2))))) / (((((/* implicit */int) (unsigned short)6)) + (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_11] [i_11])))))), (((((((/* implicit */_Bool) (unsigned short)0)) || ((_Bool)0))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_13 [(_Bool)1])) : (((/* implicit */int) arr_37 [i_11]))))))));
            arr_39 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(unsigned short)20] [i_0] [i_11])) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [(unsigned short)0]))));
        }
        var_36 += ((/* implicit */unsigned char) ((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))) | (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))))));
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) min((arr_19 [i_0] [(unsigned short)8] [i_0] [(unsigned short)8] [i_0]), (min((var_13), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))));
        arr_40 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)70))) : (((/* implicit */int) ((unsigned char) arr_16 [i_0] [(_Bool)1] [i_0])))));
    }
    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)205)) % (((/* implicit */int) (unsigned short)13518)))))));
    var_39 = ((/* implicit */unsigned char) max((var_39), (var_5)));
    var_40 = ((/* implicit */unsigned char) min((var_40), (var_6)));
}
