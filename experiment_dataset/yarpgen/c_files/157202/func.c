/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157202
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
    var_10 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-38))));
    var_11 = ((/* implicit */unsigned char) ((unsigned long long int) (~(1113205719))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [(signed char)2] = ((/* implicit */signed char) min((((long long int) var_1)), (((/* implicit */long long int) ((unsigned char) arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1113205719)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1113205730))))) : (min((1113205719), (1113205718))))), (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max(((~(1113205726))), ((~(1113205718)))));
        var_12 = ((/* implicit */int) ((short) max((1113205718), (-1113205719))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((var_0) == ((~(((/* implicit */int) var_9)))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_0)), (arr_6 [i_1 - 1])))));
        arr_9 [i_1] = ((/* implicit */unsigned char) 1113205719);
        arr_10 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 1113205719)), ((-(arr_6 [i_1])))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_6 [i_1 - 1])))) ? (max((1113205730), (-1113205719))) : (((/* implicit */int) ((unsigned short) 1113205719)))));
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned long long int) -1113205719);
        arr_14 [i_2] = ((/* implicit */_Bool) arr_11 [i_2]);
        arr_15 [(unsigned short)17] [(unsigned short)17] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))) < (var_3)))));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) ((-1113205723) >= (var_0)))), (max(((~(1113205718))), ((-(1113205730)))))));
        var_14 = ((/* implicit */signed char) -1113205717);
        var_15 = ((/* implicit */long long int) max((-1113205730), (1113205719)));
        arr_19 [i_3] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_16 [i_3]))))));
    }
}
