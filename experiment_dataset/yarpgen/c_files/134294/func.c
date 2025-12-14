/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134294
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
    var_13 = ((/* implicit */short) (~(max((((/* implicit */int) min((var_1), (var_6)))), (var_10)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) (signed char)8);
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_1 [i_0]))));
        var_16 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-76))))) ? (((((/* implicit */int) var_12)) + (((/* implicit */int) (signed char)40)))) : (min((var_5), (((/* implicit */int) arr_2 [i_0])))))), (max((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) var_2))))), ((-(((/* implicit */int) arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_12))));
        arr_8 [i_1] = ((/* implicit */int) arr_6 [i_1] [i_1]);
        var_17 = ((((/* implicit */_Bool) (unsigned char)93)) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_6))))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)189))))) ? ((+(((/* implicit */int) arr_9 [i_2] [(short)15])))) : ((+(((/* implicit */int) (_Bool)1))))))));
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(var_9))) >> (((((/* implicit */int) arr_12 [i_2] [i_2])) - (8707)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2116941509U)))))))) : ((~(arr_10 [i_2])))));
        var_19 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) ? ((-(((/* implicit */int) arr_11 [i_2] [i_2])))) : (((/* implicit */int) arr_9 [i_2] [i_2]))))), (max((((/* implicit */unsigned int) min(((unsigned char)189), ((unsigned char)164)))), (min((var_9), (((/* implicit */unsigned int) arr_9 [i_2] [i_2])))))));
    }
    var_20 = var_10;
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */int) arr_15 [(unsigned char)1] [i_3]);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (((((+(((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1])))) | (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) var_12))))))) * (max(((~(((/* implicit */int) (unsigned char)93)))), (((/* implicit */int) max(((unsigned short)256), (((/* implicit */unsigned short) var_11))))))))))));
        arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_3] [i_3])) > (min((((/* implicit */int) var_1)), (var_0)))));
    }
    var_22 = ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))));
}
