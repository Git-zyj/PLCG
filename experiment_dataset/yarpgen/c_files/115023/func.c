/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115023
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
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-71))))) * (((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)70)))))) % (((/* implicit */int) (unsigned short)12290))));
    var_15 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) ((long long int) var_0))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)114)))))));
        var_17 += ((/* implicit */int) (unsigned char)111);
        arr_3 [(_Bool)1] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)143))))), (arr_0 [(unsigned char)0])));
        var_18 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) ((unsigned char) min((arr_2 [i_0]), (arr_0 [i_0])))))));
        var_19 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) (unsigned short)12299);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_0))));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
        var_23 |= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_9))) * (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2])) <= (((/* implicit */int) (unsigned char)227)))))));
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        arr_8 [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_2] [i_2 + 2]))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2076401522)) ? (((/* implicit */int) (unsigned short)53245)) : (-2076401522)));
        var_26 = ((/* implicit */signed char) var_12);
        var_27 = ((/* implicit */short) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_3]))))) ? (((/* implicit */int) (short)-23957)) : (((/* implicit */int) ((_Bool) (unsigned char)143)))))));
        arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [13] [i_3]))))), (((short) var_5))))) * (((((/* implicit */int) arr_4 [i_3 - 2] [i_3 - 1])) | (((/* implicit */int) arr_9 [i_3]))))));
        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_3] [i_3]))));
    }
}
