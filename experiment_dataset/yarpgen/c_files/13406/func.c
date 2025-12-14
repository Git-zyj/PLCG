/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13406
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
    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)252)), (0ULL)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((int) ((int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124)))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_6 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) var_11)))));
        var_17 = ((unsigned long long int) min((((/* implicit */unsigned long long int) ((unsigned int) 6718204031287365900LL))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))));
        var_18 += ((/* implicit */int) (!(((_Bool) arr_9 [i_2 + 1]))));
        arr_10 [3LL] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (arr_8 [i_2])));
    }
    for (short i_3 = 3; i_3 < 8; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) ((signed char) (~(((((/* implicit */int) var_11)) / (((/* implicit */int) (signed char)20)))))));
        var_19 = ((/* implicit */long long int) min((((signed char) (!(((/* implicit */_Bool) var_2))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))));
        arr_16 [i_3] = ((/* implicit */_Bool) (((+((+(arr_13 [8] [i_3]))))) * (((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-96)))) / (var_2))))));
        arr_17 [i_3] [i_3] = min((((int) 22ULL)), ((~(var_2))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_20 [i_3] = (!(((/* implicit */_Bool) ((int) 0LL))));
            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) 9031573078856145630ULL));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((unsigned short) (!(((/* implicit */_Bool) var_12))))), (((/* implicit */unsigned short) min((var_11), (((signed char) var_5))))))))));
            arr_22 [i_3] [i_3] [i_3 + 3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (((long long int) var_3))))), (((unsigned long long int) 0ULL))));
        }
    }
}
