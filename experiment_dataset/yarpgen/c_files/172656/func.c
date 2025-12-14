/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172656
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned char)7])) - (((/* implicit */int) (signed char)-84))))) && (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-79)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0])) - (248)))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) var_13);
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_3 [i_1]))))))) == (var_4)));
        var_15 = ((/* implicit */signed char) (((-(((/* implicit */int) var_0)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [3ULL])))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 4; i_3 < 12; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_17 [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [7ULL]))))))))));
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) min((arr_13 [i_2] [i_3] [i_4] [i_4]), (arr_1 [5ULL])))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_19 [i_5])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5])))))) & ((+(arr_18 [i_5])))))));
        arr_21 [i_5] = ((((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) arr_1 [i_5])) : (((int) 18446744073709551615ULL)))) - (((/* implicit */int) ((((/* implicit */int) arr_19 [(unsigned char)10])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
        var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_18 [i_5])))) ? (((/* implicit */unsigned long long int) ((int) (signed char)-112))) : (((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_18 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43)))))));
        arr_22 [i_5] = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_0 [i_5 + 2])) : (((/* implicit */int) arr_19 [i_5])))), (((/* implicit */int) arr_0 [8ULL]))))));
    }
    for (signed char i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
    {
        arr_26 [i_6] [(unsigned char)0] |= (+((-(arr_18 [(signed char)14]))));
        arr_27 [0ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 3289120957398405996ULL)) && (((/* implicit */_Bool) (unsigned char)31))));
    }
}
