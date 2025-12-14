/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175859
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
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_14 -= ((/* implicit */_Bool) (+(max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_3 [(unsigned char)0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((max((((arr_7 [i_0] [i_1] [i_3] [(unsigned short)0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0])))), (((/* implicit */int) min((arr_5 [i_0]), (((/* implicit */unsigned short) var_3))))))), (((((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 3] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4])) + (((/* implicit */int) arr_10 [i_4 - 2] [i_4 - 2] [(unsigned char)11] [i_4 + 2] [i_4 - 2] [(unsigned char)2])))))))));
                                var_16 += ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_11 [i_4 + 2] [i_4] [i_4] [i_4 - 2] [i_4 + 2] [(unsigned char)8]), ((_Bool)0)))), (((((/* implicit */int) max((arr_10 [i_0] [i_1] [i_2] [(unsigned short)4] [i_4 - 1] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) | (((/* implicit */int) min((var_0), (var_3))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_2] [(_Bool)1]))));
                }
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */int) min((arr_8 [(unsigned short)2] [i_1] [i_1] [i_0]), (((/* implicit */unsigned char) var_8))))), (((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) arr_3 [(unsigned char)12])) : (((/* implicit */int) arr_3 [(_Bool)1])))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [(unsigned short)0])) == (((/* implicit */int) var_9))))), ((~(((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_6] [(unsigned short)4] [i_6 - 1])) ? (((/* implicit */int) arr_8 [i_6 - 1] [i_5] [i_0] [i_0])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_14 [i_0] [(unsigned short)9] [i_0]))));
                            /* LoopSeq 3 */
                            for (unsigned char i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~((+((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_9 [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_3 [(unsigned char)4]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (arr_13 [i_1] [(unsigned short)14])))) : ((+(((/* implicit */int) max((arr_4 [i_1] [i_6 - 1]), (arr_19 [i_0] [i_0] [i_5] [i_0] [i_7])))))))))));
                                var_22 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) var_0)) % (((/* implicit */int) arr_3 [(unsigned short)10])))), (((/* implicit */int) var_4))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((-(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))))) - ((+(((/* implicit */int) var_3)))))))));
                                var_24 += (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(unsigned short)0] [i_5])) | (((/* implicit */int) max((arr_16 [i_0]), (var_0))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(((arr_7 [i_5] [i_5] [(unsigned short)4] [(unsigned char)2]) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) var_6)))))))));
                                var_26 *= var_1;
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_1))));
                                var_28 += arr_13 [i_0] [i_0];
                            }
                            /* vectorizable */
                            for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) /* same iter space */
                            {
                                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6 - 1] [i_6 - 1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))))));
                                var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) arr_4 [i_5] [i_9])) : (((/* implicit */int) arr_7 [i_6 - 1] [i_9 - 1] [i_9 + 1] [(_Bool)1]))));
                                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_0] [i_6] [(unsigned short)8])) < (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) arr_18 [(unsigned short)10] [i_6 - 1] [i_5] [i_1] [(unsigned short)10])) ? (((/* implicit */int) arr_20 [(_Bool)1] [i_1] [i_1] [i_6] [i_9 + 2])) : (((/* implicit */int) var_11)))) : ((((_Bool)0) ? (((/* implicit */int) arr_0 [(unsigned char)4])) : (((/* implicit */int) (unsigned short)31784)))))))));
                            }
                        }
                    } 
                } 
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))))))));
            }
        } 
    } 
    var_33 += ((/* implicit */unsigned short) var_11);
    var_34 = ((/* implicit */unsigned char) max((var_34), (var_4)));
    var_35 -= ((/* implicit */_Bool) (((-(((/* implicit */int) min(((unsigned char)127), (((/* implicit */unsigned char) (_Bool)0))))))) + (max(((+(((/* implicit */int) (unsigned char)67)))), (((((/* implicit */int) var_2)) >> (((((/* implicit */int) (unsigned char)91)) - (71)))))))));
}
