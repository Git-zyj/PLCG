/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115120
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
    var_20 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (unsigned short)9340)), (((((/* implicit */_Bool) (unsigned short)39571)) ? (var_15) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27391)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (arr_1 [i_0])))) ? (arr_1 [i_0]) : (var_10)))) ? ((-(arr_1 [i_0]))) : (min((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19530)) > (var_13))))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_23 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)25987))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)2574)) < (((/* implicit */int) (signed char)-123))))) == (((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) (unsigned short)39549))))))) : (((/* implicit */int) (signed char)112)));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            arr_7 [i_1] [(signed char)10] [(signed char)10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-116)) + (((/* implicit */int) (signed char)-64))))) ? (((arr_4 [i_1] [i_2]) ? (((/* implicit */int) arr_4 [i_2] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)46258)) > (((/* implicit */int) (short)-30077)))))));
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2572)) & (((/* implicit */int) (unsigned short)39547))))), (min((((/* implicit */unsigned long long int) arr_5 [i_1])), (var_17)))));
            arr_9 [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) (short)2745)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33960))) : (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned long long int) arr_4 [i_1] [i_2])))));
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
        {
            arr_12 [i_1] [i_3] = ((/* implicit */int) (short)32744);
            var_25 ^= ((/* implicit */signed char) arr_1 [i_3]);
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_1])))) : (((((/* implicit */_Bool) (unsigned short)39567)) ? (((/* implicit */int) (unsigned short)58877)) : (((/* implicit */int) (unsigned short)3072))))));
        }
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min(((~(((((/* implicit */_Bool) (short)20641)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
    }
}
