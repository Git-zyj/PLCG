/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169831
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((8191U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)13806))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)13788))));
        var_15 ^= ((/* implicit */unsigned char) var_8);
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((int) (((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_17 += ((((unsigned long long int) arr_0 [i_1 - 1])) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
            arr_5 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (137438953471LL)))));
        }
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max(((short)13806), ((short)-18633))))));
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */short) arr_4 [i_2 + 2]);
        }
    }
    for (long long int i_3 = 4; i_3 < 13; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) var_13);
            var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (1250428246)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_7 [i_4 - 1] [i_3] [i_3 - 4])))))));
        }
        arr_14 [i_3] = ((/* implicit */_Bool) (-((((_Bool)1) ? ((+(((/* implicit */int) (signed char)67)))) : ((+(((/* implicit */int) (signed char)-104))))))));
        arr_15 [i_3] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((var_11) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_3]))))));
    }
    var_21 *= ((/* implicit */unsigned char) var_8);
    var_22 = ((/* implicit */short) var_9);
}
