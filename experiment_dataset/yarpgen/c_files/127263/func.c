/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127263
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
    var_16 = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)-1))))));
    var_17 = ((/* implicit */int) (((((((_Bool)1) ? (6690670993025885764ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) ((11756073080683665852ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))))))), ((~(((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */long long int) -1)) : (arr_3 [i_0] [i_0])))))));
        var_19 += ((/* implicit */unsigned long long int) min((((_Bool) arr_3 [i_0] [i_0])), ((!(((/* implicit */_Bool) 11756073080683665844ULL))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (11756073080683665851ULL) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)))))));
            var_21 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-116))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-97))))) >> (((((/* implicit */int) var_6)) + (146))))))))));
                        arr_12 [i_4] [i_0] [i_3] [18U] = ((/* implicit */int) (+(2673442124U)));
                    }
                } 
            } 
            arr_13 [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_2]))) ^ (arr_3 [(signed char)8] [i_2 - 1]))));
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) != (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_7))) != (arr_6 [10]))))));
        }
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        arr_16 [(unsigned short)6] = ((/* implicit */signed char) arr_1 [i_5] [i_5]);
        arr_17 [i_5] = ((/* implicit */signed char) ((_Bool) (!(((((/* implicit */_Bool) 4196400240U)) || (((/* implicit */_Bool) arr_7 [i_5])))))));
        arr_18 [i_5] [(_Bool)1] = ((/* implicit */unsigned short) var_9);
    }
    var_24 = ((/* implicit */signed char) var_5);
}
