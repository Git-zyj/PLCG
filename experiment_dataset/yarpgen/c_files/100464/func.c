/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100464
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
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((signed char) (signed char)74);
        var_15 += ((/* implicit */signed char) (+(((((/* implicit */int) ((signed char) (signed char)89))) * (((/* implicit */int) ((((/* implicit */int) (signed char)110)) <= (((/* implicit */int) (unsigned char)83)))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_5 [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-23))))) ? (((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) max((arr_0 [i_1]), (arr_4 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((unsigned char) arr_1 [i_1]));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2])))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((min((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_6)))), ((+(((/* implicit */int) arr_8 [i_2])))))) < (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)83), (arr_3 [(unsigned char)14])))) <= (((/* implicit */int) ((signed char) (signed char)83)))))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [(signed char)11] [i_4])) ? (max((((/* implicit */int) ((unsigned char) (unsigned char)103))), ((-(((/* implicit */int) (signed char)53)))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_4 [i_4])))), (((/* implicit */int) arr_10 [i_2]))))));
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [(unsigned char)11] [i_2])) + (2147483647))) >> (((((((/* implicit */_Bool) min((arr_15 [i_4] [i_4] [i_4]), ((signed char)84)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_2 [(unsigned char)3] [(unsigned char)16]))))))) - (77)))));
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)133)) | (((/* implicit */int) (signed char)24))));
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_18 [i_5] = arr_7 [i_5] [i_5];
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)-114)) > (((/* implicit */int) arr_3 [i_5]))))), (arr_4 [i_5])))) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)145)) + (((/* implicit */int) arr_4 [i_5]))))))))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)120)) <= (((/* implicit */int) min((var_6), (var_12))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)52)), (var_6)))))))));
}
