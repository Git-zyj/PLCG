/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189340
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) (-((-(arr_3 [i_0] [i_0])))));
        var_17 += ((/* implicit */short) ((int) (-(arr_3 [i_0] [i_0]))));
        var_18 ^= ((((/* implicit */_Bool) var_15)) ? (-16777216) : (1946431926));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(6949318732190849003ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [1] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (15180635533669754294ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))))));
        var_20 += ((/* implicit */short) ((var_4) ? (var_0) : (((/* implicit */int) ((unsigned short) var_6)))));
        var_21 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))), ((+(var_0)))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) 1074542740U);
            var_23 = ((/* implicit */unsigned short) max((1100530068240996034ULL), (((/* implicit */unsigned long long int) (unsigned short)6312))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
            var_24 = ((/* implicit */short) min((((long long int) arr_7 [i_1])), (((/* implicit */long long int) arr_7 [i_1]))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_15 [i_1] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_8 [i_1] [i_3] [i_3]))))));
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-19019))));
            var_26 = ((/* implicit */unsigned int) min(((-(arr_12 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) (-(arr_9 [i_1] [i_1] [i_1]))))));
        }
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_27 = ((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)122))));
            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */int) 10107096184424254186ULL);
        }
    }
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_13))));
    var_29 = ((/* implicit */unsigned short) (+(max((var_13), (((/* implicit */long long int) min((var_5), ((unsigned short)53715))))))));
}
