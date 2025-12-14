/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184959
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
    var_16 = var_7;
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] = ((((65536) << (((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) - (45543))))) + (((/* implicit */int) max((arr_1 [i_0 - 1] [i_0 + 3]), (arr_1 [i_0 - 1] [i_0 + 2])))));
                        var_17 = ((/* implicit */signed char) arr_0 [i_1]);
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_6 [i_2]))));
                    }
                } 
            } 
        } 
        var_19 = arr_4 [i_0 + 1] [i_0] [i_0];
    }
    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
    {
        arr_15 [1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)75), ((unsigned char)180))))))) | (((/* implicit */int) (unsigned char)75))));
        arr_16 [i_4] [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_1 [i_4 + 1] [i_4 - 1]))))) ? (((/* implicit */int) arr_13 [i_4 - 1])) : (min((arr_3 [(signed char)10] [i_4]), (((/* implicit */int) ((unsigned short) (unsigned char)128)))))));
        arr_17 [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((int) ((((/* implicit */_Bool) (unsigned short)62394)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned short)31744)))))));
        var_20 = ((/* implicit */signed char) max((((/* implicit */int) ((((((/* implicit */int) (signed char)75)) | (arr_6 [(signed char)4]))) <= (((/* implicit */int) max((((/* implicit */unsigned char) arr_14 [i_4])), (arr_5 [i_4] [(unsigned short)14]))))))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_4 + 1] [(unsigned short)11] [i_4 - 1])) : (var_6)))))));
        var_21 = ((/* implicit */unsigned short) arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]);
    }
}
