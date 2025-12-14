/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103459
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_10 ^= ((((var_0) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_1 [i_0] [i_0]))))))) : ((-(((/* implicit */int) var_9)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
            var_12 ^= ((/* implicit */unsigned short) var_0);
            var_13 ^= ((/* implicit */_Bool) (-(var_8)));
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                            arr_14 [i_4] [i_1] [i_1] [i_3] [i_4] |= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0)))))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((var_8) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])))))))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) ? (((var_4) / (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_1])))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 22; i_6 += 2) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (arr_17 [i_0] [i_0] [i_5] [i_6 - 1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : ((-(arr_17 [i_0] [i_0] [i_5] [i_6]))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6]))))));
                    var_18 *= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-108))));
                }
            } 
        } 
    }
    var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)8885))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_9))))))));
}
