/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18569
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((var_7) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) -12LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [14ULL])), ((unsigned short)65535))))))))))));
        var_11 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)65514)))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_12 = ((unsigned char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_9))))) && (((/* implicit */_Bool) ((unsigned short) 308298372148414821LL)))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 8424360761985311028ULL)))) && (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_8)))))))));
        arr_6 [i_1] [i_1] |= ((/* implicit */_Bool) var_6);
        arr_7 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */int) var_0)) * (((/* implicit */int) arr_1 [i_1])))), (((int) (unsigned short)4150))));
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_2 + 2] [i_2 + 2] [i_2 - 1]), (arr_9 [i_2 + 2] [i_2 + 1] [i_2 - 1])))) ? (((((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)144)))) << (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)0)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65534)) >= (((/* implicit */int) (unsigned short)5)))))));
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_4))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
        {
            arr_13 [i_3] [i_3] = ((/* implicit */_Bool) var_5);
            var_16 += ((long long int) (short)-11589);
        }
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
        {
            arr_17 [i_1] = ((/* implicit */unsigned short) var_8);
            var_17 |= ((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)47787)))))));
            arr_18 [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
        }
    }
}
