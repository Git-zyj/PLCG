/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112406
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
    var_13 += ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (var_5)))) / (min((((/* implicit */long long int) var_3)), (((var_9) - (var_9)))))));
    var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) 63)) ? (var_2) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1))))))))));
    var_15 = ((/* implicit */short) (~(((var_9) & (((/* implicit */long long int) (+(var_4))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = 63;
                    var_18 = ((/* implicit */unsigned short) 945321237);
                    var_19 *= ((/* implicit */short) (-((-(var_2)))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_20 -= ((/* implicit */unsigned long long int) var_11);
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_0 [i_4]) : (arr_7 [i_3])))) ? (max((10964993670937272475ULL), (((/* implicit */unsigned long long int) (unsigned short)10680)))) : (((/* implicit */unsigned long long int) ((int) arr_0 [i_3])))));
            var_22 = ((/* implicit */unsigned short) -1320309863);
        }
        var_23 = ((/* implicit */signed char) arr_3 [i_3]);
        var_24 = (+(1320309863));
        arr_16 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) 3719774403497145161ULL)) ? (((/* implicit */unsigned long long int) (+(arr_13 [i_3] [i_3] [i_3])))) : (((((/* implicit */_Bool) (+(-20)))) ? (((/* implicit */unsigned long long int) var_8)) : (((3719774403497145161ULL) - (((/* implicit */unsigned long long int) 26))))))));
    }
}
