/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131455
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
    var_19 = ((/* implicit */short) var_13);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(2828788933U)))) ? ((-(((((/* implicit */_Bool) var_17)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)29815), (((/* implicit */short) (unsigned char)130))))) ? ((+(((/* implicit */int) var_15)))) : (var_12))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_21 = var_10;
        arr_3 [i_0] = ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))) : ((+(var_11))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            arr_10 [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned char) 0LL);
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_9 [i_2])))) ? (((/* implicit */int) ((-11LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) var_14)))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 3; i_3 < 13; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
                arr_13 [i_3 - 2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_14)))) : (((long long int) arr_5 [i_1]))));
            }
        }
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((int) ((unsigned char) arr_12 [10U] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]))))));
            var_25 = (~(var_11));
        }
        var_26 = ((/* implicit */unsigned int) (-((~(-7LL)))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */unsigned long long int) var_11)) : ((-(arr_0 [i_1 - 1])))));
            var_28 = ((/* implicit */unsigned long long int) var_3);
        }
    }
    for (short i_6 = 2; i_6 < 16; i_6 += 3) 
    {
        var_29 = ((/* implicit */long long int) arr_0 [i_6 + 1]);
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) min(((~(0))), (((((/* implicit */int) arr_2 [i_6 - 1])) | ((~(((/* implicit */int) (short)-29826)))))))))));
    }
    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_2))));
    var_32 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-29819)) ? (((/* implicit */int) (short)29826)) : (((/* implicit */int) (short)-29819))))));
}
