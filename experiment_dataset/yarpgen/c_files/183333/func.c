/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183333
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
    var_10 = ((((/* implicit */_Bool) ((long long int) ((var_1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (min((((/* implicit */unsigned char) var_4)), (var_7))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_2))))), (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)127))))))));
    var_11 = ((/* implicit */int) 7851628300071971695LL);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -7851628300071971695LL)) || (((/* implicit */_Bool) -7851628300071971696LL)))))))), (min((((var_1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))), (((((/* implicit */int) var_1)) >> (((/* implicit */int) var_2))))))));
        var_12 = ((/* implicit */unsigned int) min((((1470479744) + (((/* implicit */int) (unsigned char)67)))), (((/* implicit */int) var_9))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            var_13 = (+(2541355709U));
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned char) var_2))))), (min((arr_8 [i_2 - 2] [i_2 - 2] [i_2]), (((/* implicit */unsigned int) arr_5 [i_2 - 1] [i_2 - 2])))))))));
            arr_9 [i_2] = ((/* implicit */int) var_8);
        }
        for (short i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)25)) ? (-4831125093318947652LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)100))))))));
            var_16 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */long long int) (short)-7786)), (7851628300071971708LL))));
        }
        for (short i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((/* implicit */long long int) (short)-32767)), (((((/* implicit */_Bool) ((signed char) var_3))) ? (min((((/* implicit */long long int) var_9)), (7851628300071971696LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1] [i_4]) != (((/* implicit */int) var_8)))))))))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_4]))))), (122880))))));
            var_19 &= ((/* implicit */unsigned int) -617582100);
        }
        var_20 = ((/* implicit */_Bool) var_4);
    }
}
