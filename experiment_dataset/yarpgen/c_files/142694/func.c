/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142694
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)73)) * (((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_0)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) / (12156331368854430086ULL))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_4 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)15407))))) : (((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [8]))))))) * (min((((/* implicit */unsigned int) 621762590)), (((arr_0 [(unsigned short)10] [(unsigned short)10]) * (((/* implicit */unsigned int) 0))))))));
            var_11 ^= ((/* implicit */unsigned short) arr_1 [i_1]);
        }
        var_12 |= ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 389475965U)) || (((/* implicit */_Bool) (short)-4003)))) && (((((/* implicit */_Bool) 16)) && (((/* implicit */_Bool) arr_6 [i_2])))))) || (((/* implicit */_Bool) arr_5 [i_2]))));
        var_14 = ((/* implicit */short) min((((((arr_5 [i_2]) & (((/* implicit */unsigned long long int) arr_6 [(signed char)9])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1509345504)) > (arr_5 [i_2]))))))), (((/* implicit */unsigned long long int) ((arr_5 [i_2]) != (arr_5 [i_2]))))));
    }
}
