/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140037
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)18)) << (((var_6) - (457415346U))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)22] [i_0])))))));
                    arr_9 [i_0] = ((/* implicit */short) 211268475U);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_19 [i_3] [i_3] [i_3] = ((/* implicit */short) (+(min((((/* implicit */int) var_11)), (arr_13 [i_3])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_6 = 4; i_6 < 13; i_6 += 2) 
                    {
                        arr_22 [i_6] [i_6] &= ((/* implicit */short) arr_2 [i_5] [i_5]);
                        var_18 = ((long long int) (+(((/* implicit */int) (unsigned char)20))));
                        var_19 &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (0ULL))));
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_12))))) ^ (((((/* implicit */_Bool) (signed char)-1)) ? (arr_8 [i_4]) : (((/* implicit */int) arr_3 [i_4] [i_6]))))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) max((((((0ULL) / (((/* implicit */unsigned long long int) 1169126681)))) * (((18446744073709551612ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5783444087083716663LL)) ? (6615229041834944163LL) : (arr_24 [i_5] [i_4]))))));
                        arr_25 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_3), (var_12)))) ? (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) / (var_13))))), (((unsigned long long int) (+(((/* implicit */int) (short)-1081)))))));
                    }
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [9] [10LL])) * (((max((3ULL), (((/* implicit */unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) ((int) (short)-10808)))))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned short) var_6);
}
