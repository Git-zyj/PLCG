/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159834
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_9))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                for (short i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_5 [i_0 + 2] [i_1])))) ^ (var_3)))) & (((max((((/* implicit */unsigned long long int) (unsigned char)30)), (arr_6 [i_0] [i_1] [i_2] [i_1]))) ^ (((/* implicit */unsigned long long int) var_1))))));
                        var_13 = ((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_2 + 3] [i_3 - 2] [i_2 + 1] [i_1]));
                        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_3]))) - (arr_1 [i_3]))) != (var_8)));
                        arr_11 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0] [(signed char)10])), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) : (((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_1] [(unsigned short)8] [i_3] [i_0 - 1]))))))));
                        var_15 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_5 [i_3 - 4] [i_2 + 2])))) - (((/* implicit */int) arr_7 [i_2] [3ULL] [(unsigned char)8] [i_2] [(signed char)13]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            arr_16 [i_0] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4]))))), (((((/* implicit */int) ((unsigned short) 143477145U))) + (((/* implicit */int) ((_Bool) arr_14 [i_0 + 2])))))));
            var_16 += ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_4])))), (((/* implicit */int) arr_8 [i_0])))) + (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) + (var_4)))))));
            arr_17 [i_0] [i_4] [i_0 - 1] = ((/* implicit */short) max(((!(((/* implicit */_Bool) 18446744073709551606ULL)))), (((((/* implicit */int) arr_14 [i_0])) == ((-(((/* implicit */int) var_9))))))));
        }
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 2]))) * (min((((/* implicit */unsigned long long int) (short)23708)), (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_6 [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) arr_19 [i_5] [i_5]);
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) arr_19 [i_5] [i_5]));
        var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125))))) > (((/* implicit */int) ((_Bool) arr_18 [i_5])))));
        var_19 = ((((/* implicit */unsigned int) ((int) arr_18 [i_5]))) % (arr_18 [i_5]));
    }
}
