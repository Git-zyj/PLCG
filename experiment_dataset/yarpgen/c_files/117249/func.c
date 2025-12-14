/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117249
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
    var_12 += ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) 463615199)))) ? (((/* implicit */int) (signed char)-79)) : (((((/* implicit */int) (unsigned char)20)) | (((/* implicit */int) var_9)))))), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (~(max((((((/* implicit */int) (unsigned char)225)) & (((/* implicit */int) var_5)))), (arr_2 [i_0] [i_0]))))))));
                var_14 = ((/* implicit */signed char) min((var_14), (var_1)));
                arr_4 [i_1] [i_1 + 1] [i_1] = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_1 - 3])), (((((/* implicit */_Bool) 2472539473737651397ULL)) ? (15974204599971900219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9158)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((int) 2472539473737651388ULL))));
                var_16 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) min((537880674334003838LL), (((/* implicit */long long int) 2146435072))))) / (min((((/* implicit */unsigned long long int) var_0)), (arr_8 [i_2] [i_2]))))), (((/* implicit */unsigned long long int) var_2))));
                var_17 = ((/* implicit */signed char) 388273979);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (short i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            for (int i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_8)) ^ ((-(var_11))))), (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)-24), (var_7))))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_19 += ((/* implicit */int) var_8);
                        var_20 = ((/* implicit */signed char) max((var_20), (var_1)));
                    }
                }
            } 
        } 
    } 
}
