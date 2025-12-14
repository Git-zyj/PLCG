/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11688
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
    var_10 = ((/* implicit */short) (-(((var_3) ^ (min((((/* implicit */unsigned int) var_7)), (var_3)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)-24412)))))));
                var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-24396)) || (((/* implicit */_Bool) (short)-14691)))) ? (arr_0 [i_1] [i_0]) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 2147418112U)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30720)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)28))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24435))) : (-7709787236793940788LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)30720)) || (var_6))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
    {
        arr_8 [i_2] [i_2 + 3] = ((/* implicit */short) arr_5 [i_2]);
        var_14 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) << (((((((/* implicit */int) (short)-3057)) % (((/* implicit */int) (short)-3065)))) + (3067))))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_15 |= ((/* implicit */signed char) ((arr_4 [i_4]) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_10 [i_2] [13LL] [13LL])))), (((/* implicit */int) max((arr_12 [(unsigned short)14] [i_2 + 3] [i_2 + 3] [i_2 + 3]), (arr_9 [i_2] [i_3] [i_4]))))))) : (((max((2147549194U), (((/* implicit */unsigned int) (unsigned short)35523)))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_4])) - (((/* implicit */int) arr_5 [i_3])))))))));
                    arr_14 [i_4] [i_3] [(signed char)20] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 2] [i_2 + 3])) ^ (((((/* implicit */_Bool) arr_10 [i_4] [i_2 - 1] [i_2 + 3])) ? (((/* implicit */int) arr_5 [i_2 - 2])) : (((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2 + 3]))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
    {
        for (int i_6 = 4; i_6 < 22; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_5 - 1])), ((unsigned short)19157)))), (((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_17 [i_7]))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5 - 1])))))) / (((((/* implicit */_Bool) arr_17 [i_5 - 1])) ? (((/* implicit */unsigned long long int) arr_16 [i_5 - 1])) : (13817537544628403217ULL)))));
                            arr_30 [i_6 - 4] [i_7] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)68))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((unsigned int) (unsigned char)128))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)1920))) : (arr_25 [i_6 - 3] [i_5] [i_6 - 3] [8ULL] [i_6 - 3])));
                            var_19 = ((/* implicit */unsigned short) arr_18 [i_6]);
                        }
                        arr_31 [i_5] [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_15 [i_5])), ((~((~(((/* implicit */int) arr_22 [i_6 - 1] [i_5]))))))));
                    }
                }
            } 
        } 
    } 
}
