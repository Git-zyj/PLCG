/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126559
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
    var_10 = ((/* implicit */signed char) ((((((((/* implicit */int) var_7)) < (((/* implicit */int) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((1446146746890334825LL), (-1446146746890334826LL))))) & (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_11 += ((/* implicit */long long int) (((~((-(((/* implicit */int) var_2)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)65408))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) ((unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (arr_1 [i_0] [i_0]))), ((-(arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)-33)), (((((arr_1 [i_0] [(unsigned char)21]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) / ((-(arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)127)) ? (-1446146746890334826LL) : (-1446146746890334825LL)))))) ? ((-((~(arr_0 [i_0]))))) : (min((min((((/* implicit */unsigned long long int) (unsigned short)127)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((arr_1 [i_1] [i_1]) / (arr_0 [i_1])));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_2))));
    }
    var_14 = ((/* implicit */unsigned char) 1446146746890334825LL);
}
