/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136073
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
    var_10 = ((/* implicit */short) ((unsigned char) ((long long int) max((((/* implicit */unsigned char) (_Bool)1)), (var_2)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) min((var_11), (min(((~(arr_1 [i_0] [i_0]))), (min((((/* implicit */long long int) var_5)), (var_7)))))));
        arr_3 [i_0] = min((((/* implicit */unsigned char) max((((signed char) (short)-2350)), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))), (((unsigned char) ((unsigned short) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) ((long long int) min((min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0]))), (min((((/* implicit */long long int) (unsigned short)60863)), (var_6))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_12 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_4)))));
        /* LoopNest 3 */
        for (long long int i_2 = 4; i_2 < 9; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] [(unsigned short)8] [i_3] = ((long long int) (!(((/* implicit */_Bool) (unsigned short)65516))));
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) (unsigned short)22408))), (min((arr_14 [i_2 - 3] [i_1] [i_2 - 3]), (arr_14 [i_4] [i_1] [i_2 - 3])))));
                        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */short) arr_8 [i_1] [i_4 + 1] [i_4 + 1])), (var_0))))));
                    }
                } 
            } 
        } 
    }
    var_14 -= ((/* implicit */signed char) max((var_8), (var_9)));
}
