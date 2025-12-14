/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137529
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
    for (int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            var_16 = min((((((/* implicit */_Bool) max((var_5), (((/* implicit */int) (unsigned char)188))))) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) ((arr_4 [i_0]) >= (((/* implicit */int) arr_3 [i_0]))))))), ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_0 [i_0] [i_1])))))));
            arr_6 [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_12));
            var_17 = ((/* implicit */int) var_2);
        }
        arr_7 [i_0] = ((/* implicit */short) (~((+(arr_5 [i_0 + 1] [i_0])))));
    }
    for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        var_18 += ((/* implicit */short) var_7);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_19 = ((/* implicit */short) var_2);
            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)49))));
        }
        for (int i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            arr_16 [i_2] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */int) var_11))))) ? (((((/* implicit */int) (short)17565)) % (((/* implicit */int) (short)-24250)))) : (((/* implicit */int) ((signed char) (unsigned char)51)))));
            var_21 = (!((!(((/* implicit */_Bool) min((5), (((/* implicit */int) (unsigned char)232))))))));
            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 2])))))));
        }
    }
    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_19 [i_5]) : (((/* implicit */int) (((~(((/* implicit */int) arr_18 [i_5] [i_5 - 1])))) == (arr_20 [i_5 + 1] [18ULL]))))));
        arr_21 [i_5] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned short) (signed char)121)), ((unsigned short)65513))), (((/* implicit */unsigned short) ((unsigned char) arr_20 [i_5 - 1] [i_5 - 1])))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_9)))))))));
        arr_22 [i_5] [i_5] = ((unsigned char) ((((/* implicit */_Bool) (signed char)110)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (var_7))))));
    }
    var_24 = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1765139181U))))), (2121301912U)));
}
