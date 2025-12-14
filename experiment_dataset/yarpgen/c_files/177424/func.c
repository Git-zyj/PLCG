/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177424
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_6), (((/* implicit */signed char) ((_Bool) var_16)))))) >> (((((/* implicit */int) min(((signed char)120), (((/* implicit */signed char) var_13))))) & (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_2 - 3]), (arr_6 [i_2 - 2])))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_2 - 2]))) : (((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) arr_10 [i_4 - 1] [3U] [i_2] [i_1] [(signed char)14]);
                                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                                var_22 = ((/* implicit */unsigned int) var_14);
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [(signed char)8]))))) ? (((/* implicit */int) ((signed char) arr_3 [i_4 - 1] [i_3 + 3] [i_2 - 1]))) : (((/* implicit */int) ((unsigned short) arr_9 [(signed char)0] [(unsigned short)2] [(_Bool)1] [i_1] [(signed char)6] [(signed char)16] [(unsigned short)0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_16))), (((((/* implicit */_Bool) arr_11 [(_Bool)1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_14 [(unsigned char)12])))))))))));
                arr_15 [i_6] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) arr_13 [i_6]))))));
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (((((-(((/* implicit */int) arr_14 [(_Bool)1])))) == (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_0)) + (20))))))) ? (((/* implicit */int) max((arr_11 [(_Bool)1]), (((/* implicit */signed char) arr_14 [4U]))))) : (((/* implicit */int) (signed char)-102)))))));
                var_26 *= ((/* implicit */_Bool) ((signed char) (((!(((/* implicit */_Bool) arr_13 [(unsigned char)2])))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) var_1)))));
            }
        } 
    } 
    var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned char i_7 = 4; i_7 < 19; i_7 += 3) 
    {
        arr_18 [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_12 [(unsigned short)17] [(_Bool)1]))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_12 [(signed char)8] [i_7 - 2])) == (((/* implicit */int) arr_12 [(_Bool)1] [i_7 + 1]))))))));
    }
}
