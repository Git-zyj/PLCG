/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159491
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (short)7461);
        var_11 ^= ((/* implicit */_Bool) min((max((((arr_0 [i_0] [1]) + (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7461))) < (arr_0 [20] [i_0])))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-24897)))))));
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((long long int) (((~(arr_1 [i_0]))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (short)7461);
        var_12 *= ((/* implicit */unsigned long long int) (unsigned char)255);
        arr_8 [i_1] = ((/* implicit */_Bool) min((((((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)32)))) ? (((11981986440402845317ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7462))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (arr_5 [i_1]))))));
        var_13 = ((/* implicit */unsigned short) min(((+(arr_1 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1))))))))));
    }
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65524))));
}
