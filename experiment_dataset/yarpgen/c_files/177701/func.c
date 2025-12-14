/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177701
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(arr_0 [(unsigned char)17] [i_0 - 2])));
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_16 = ((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (((/* implicit */int) (signed char)-60)) : (arr_2 [7LL] [i_1]))))))) : ((~(arr_2 [i_0 + 1] [i_0 + 1]))));
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))))) > (((min((arr_5 [(signed char)10] [(signed char)10]), (arr_5 [i_0 - 1] [i_0 - 1]))) / (((((/* implicit */int) (unsigned char)223)) << (((((/* implicit */int) var_6)) - (65)))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            arr_10 [(unsigned char)1] [8U] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (-(0U)))), (16478774305744459081ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0 - 1]))))))))));
            arr_11 [i_0] [(unsigned char)16] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_2 - 1] [17]))));
            var_17 = min((((/* implicit */int) (unsigned char)44)), (((var_9) % ((-(arr_5 [i_0] [0LL]))))));
            arr_12 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (unsigned char)164)), (arr_8 [i_2] [i_0 + 1])));
        }
    }
    var_18 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (1787084043U))))))));
    var_19 = ((/* implicit */int) var_8);
    var_20 = ((/* implicit */int) var_4);
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (max((var_13), (((/* implicit */long long int) var_3))))))) ? ((-(min((var_13), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
}
