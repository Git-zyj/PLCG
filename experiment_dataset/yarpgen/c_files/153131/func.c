/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153131
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) (short)16082);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) ? ((~(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [(short)20])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) (signed char)90))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)95)) / (arr_1 [4])))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) (signed char)85)))) : (arr_1 [(unsigned char)6])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_21 = (short)8344;
            arr_7 [i_1] [(short)20] = ((/* implicit */short) ((int) ((short) arr_3 [i_1] [i_1] [i_0 + 2])));
            var_22 = ((/* implicit */unsigned char) max((((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)62)), (arr_6 [i_1] [i_1 - 1])))) == (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_0 - 1]))))));
        }
        var_23 = ((/* implicit */signed char) arr_5 [(signed char)20]);
    }
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        arr_11 [i_2] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned char)12] [i_2])) || (((/* implicit */_Bool) (unsigned short)48119))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) arr_10 [i_2] [i_2]))))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-19759))))))));
        var_24 = ((/* implicit */_Bool) min((((((/* implicit */int) var_17)) & ((~(((/* implicit */int) arr_3 [20] [i_2 - 1] [i_2 + 1])))))), ((~(((/* implicit */int) arr_6 [(short)0] [i_2 - 2]))))));
    }
    for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
    {
        var_25 = var_15;
        var_26 = ((/* implicit */unsigned int) var_18);
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_15 [i_4])) | ((~(((/* implicit */int) arr_10 [i_4] [i_4 - 1]))))))));
        var_28 = ((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_12 [i_4 - 1])), ((unsigned char)115))))));
    }
    var_29 = ((/* implicit */signed char) max((min((max((((/* implicit */int) var_3)), ((-2147483647 - 1)))), (((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))), (min(((~(((/* implicit */int) var_14)))), (((/* implicit */int) max((var_16), (var_9))))))));
    var_30 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)6)), ((~((~(((/* implicit */int) var_18))))))));
}
