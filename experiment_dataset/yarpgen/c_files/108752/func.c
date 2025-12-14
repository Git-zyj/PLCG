/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108752
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
    var_14 += ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-1742)) : (((/* implicit */int) (signed char)4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) (~(max((((((/* implicit */int) arr_6 [(signed char)2])) ^ (((/* implicit */int) arr_1 [i_1 + 1])))), (((/* implicit */int) var_10))))));
                var_16 = min(((signed char)-1), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))))));
                var_17 ^= ((/* implicit */short) ((((_Bool) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_2 [(unsigned char)20] [(unsigned char)20]))))) ? (((/* implicit */int) ((_Bool) (+(var_13))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_2 [(signed char)19] [i_1 - 2]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [(short)8] [i_0] [(unsigned short)10] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_1)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_13) : (var_13)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) ^ (var_13)))))))));
                                arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)1))))) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 2] [i_1] [i_4 - 3] [i_4 - 3])) : ((-(((/* implicit */int) (unsigned char)113))))))) ? (((max((((/* implicit */int) var_8)), (arr_4 [(signed char)0] [(short)6]))) / (arr_4 [i_0] [i_0]))) : (min((((/* implicit */int) arr_12 [(signed char)19] [i_4 - 4] [i_4] [(signed char)5] [i_4 + 1] [(signed char)5])), (max((((/* implicit */int) arr_1 [i_2])), ((-2147483647 - 1))))))));
                                var_18 *= ((/* implicit */unsigned char) var_6);
                                var_19 = ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) && ((!((!(((/* implicit */_Bool) var_11)))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [(unsigned short)7] [i_0] = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_2)))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */signed char) arr_8 [(signed char)19] [i_1] [i_1] [i_1])), (var_5))), (arr_11 [i_2] [i_2] [(unsigned char)5] [(unsigned char)5])))) ? (((((/* implicit */_Bool) ((arr_8 [i_0] [17] [i_1] [i_0]) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) : ((+(((((/* implicit */_Bool) arr_11 [(signed char)4] [i_1] [(signed char)4] [i_2])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1])) : (arr_4 [(_Bool)1] [i_0]))))))))));
                }
            }
        } 
    } 
}
