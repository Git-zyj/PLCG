/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171612
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) (unsigned char)102)) | (((/* implicit */int) var_11)))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)102))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [(unsigned char)7])) : (((/* implicit */int) var_0)))) | (((((/* implicit */int) arr_2 [(unsigned char)7] [(unsigned char)4] [(unsigned char)4])) + (((/* implicit */int) var_6))))))) ? (((((((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) + (((/* implicit */int) arr_2 [i_1] [i_1 - 1] [i_1])))) + (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) var_1)))))) : (((((((/* implicit */int) (unsigned char)149)) > (((/* implicit */int) var_2)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) arr_6 [i_0] [i_1])) + (((/* implicit */int) (unsigned char)10))))))));
                    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_0)))) ? (((((/* implicit */int) (unsigned char)127)) | (((/* implicit */int) var_16)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_10)))))))) ? (((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)153)))) : (((((/* implicit */int) ((((/* implicit */int) (unsigned char)254)) == (((/* implicit */int) var_10))))) ^ (((((/* implicit */int) (unsigned char)106)) ^ (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [(unsigned char)17] [i_1])) : (((/* implicit */int) var_17))))) ? (((((/* implicit */int) arr_10 [i_4 + 1] [i_1] [i_2] [i_3] [i_2])) ^ (((/* implicit */int) (unsigned char)149)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)150)) || (((/* implicit */_Bool) arr_8 [i_0]))))))) * (((/* implicit */int) ((((((/* implicit */int) arr_7 [i_0] [(unsigned char)14])) + (((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_1 - 2] [i_4 - 1] [i_4])))) >= (((((/* implicit */int) (unsigned char)124)) << (((((/* implicit */int) (unsigned char)77)) - (70))))))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)14)) + (((/* implicit */int) (unsigned char)153))));
                                arr_12 [i_0] [(unsigned char)13] [i_2] [(unsigned char)14] [i_2] [(unsigned char)22] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_4 - 1] [i_2])) ? (((/* implicit */int) arr_6 [(unsigned char)10] [i_4])) : (((/* implicit */int) arr_5 [i_1 + 1] [(unsigned char)23] [i_4])))) - (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_4])) : (((/* implicit */int) (unsigned char)58))))))) ? (((((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)153)))) + (((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_18 [(unsigned char)15] [(unsigned char)18] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [(unsigned char)6])) : (((/* implicit */int) arr_17 [i_0] [(unsigned char)18]))))) ? (((((/* implicit */int) arr_6 [(unsigned char)21] [(unsigned char)9])) << (((((/* implicit */int) (unsigned char)238)) - (218))))) : (((((/* implicit */_Bool) arr_4 [(unsigned char)21] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [(unsigned char)22])) : (((/* implicit */int) arr_17 [i_5] [i_0])))))) >> (((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (unsigned char)133)))) - (16)))));
                                arr_19 [(unsigned char)12] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) var_17))))) ? (((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned char)31)))) : (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)197)))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_1])))) != (((((/* implicit */int) (unsigned char)116)) % (((/* implicit */int) var_11)))))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */int) (unsigned char)232)) + (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)10)) > (((/* implicit */int) (unsigned char)122)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned char)114)))) >= (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_5]))))))) : (((((((/* implicit */int) var_12)) > (((/* implicit */int) arr_4 [i_1] [(unsigned char)8])))) ? (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_10)) - (51))))) : (((((/* implicit */_Bool) arr_4 [(unsigned char)14] [i_5])) ? (((/* implicit */int) arr_14 [i_1] [(unsigned char)8] [(unsigned char)4] [(unsigned char)4])) : (((/* implicit */int) (unsigned char)212))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) & (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)185)) > (((/* implicit */int) (unsigned char)115))))) : (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)154)) | (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (unsigned char)11)) % (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_1 - 3])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)218)))) < (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)0)))))))));
                }
            } 
        } 
    } 
}
