/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131820
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
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 -= ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) <= (5919711379374033209ULL)))), (((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-650464404280794153LL))))), ((((+(arr_3 [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)0])))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (max((var_5), (((/* implicit */unsigned int) (signed char)-69))))))) ? ((-(arr_2 [i_0] [i_0] [i_1]))) : (((((/* implicit */_Bool) var_5)) ? (var_4) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_2) : (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [0U]))))), (((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69)))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1])))))));
        var_14 = ((/* implicit */unsigned char) ((((int) ((int) arr_7 [0ULL]))) / (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (arr_0 [i_2] [i_2]) : (var_11))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-69)) ? (var_4) : (((/* implicit */int) var_6))))))))));
        arr_8 [i_2] [13LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)59)) >= (var_8)))), ((-(arr_3 [i_2 + 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((arr_1 [i_2]), (((/* implicit */short) (signed char)-79)))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) != (arr_3 [16U])))))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-60)), (var_1)))), (max((arr_7 [i_2 + 2]), (((/* implicit */unsigned long long int) var_10))))))));
    }
    var_15 = ((/* implicit */int) var_0);
}
