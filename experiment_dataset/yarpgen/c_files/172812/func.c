/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172812
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] = (((~(min((16661858976134807322ULL), (((/* implicit */unsigned long long int) 144565895U)))))) << (((/* implicit */int) arr_4 [i_1])));
                    var_11 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_1]))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_4 [i_2]), (arr_4 [i_0])))), ((+(((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) var_10)) ? ((-(((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551611ULL))))) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_8))))));
    var_13 |= ((/* implicit */unsigned int) min((min((5ULL), (5ULL))), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */int) var_8)), (var_1)))))));
    var_14 = max((min(((~(362906433802756364ULL))), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_7)));
    /* LoopNest 2 */
    for (short i_3 = 4; i_3 < 10; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_12 [i_3 - 3]))) != ((-((-(((/* implicit */int) (unsigned short)57668))))))));
                var_16 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) var_1)) ? (arr_6 [i_3]) : (7U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_11 [i_3])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    arr_19 [i_3] [i_5] = ((/* implicit */long long int) ((unsigned char) var_5));
                    arr_20 [i_4] = ((/* implicit */unsigned int) var_9);
                }
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) (unsigned short)57677))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4150401400U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (164934226)))))) % (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_3 - 2] [i_3 - 2]), (((/* implicit */short) arr_7 [i_3 - 4] [i_3 - 3] [(signed char)2]))))))));
                    var_18 = ((/* implicit */_Bool) min((min((arr_3 [i_3 - 3] [i_3 - 3] [i_3 - 1]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_8))))), ((+(arr_1 [i_4]))))))));
                }
                var_19 += ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0U)) | (3371809250777389266ULL)))) ? (((unsigned int) (unsigned short)24952)) : (((unsigned int) arr_14 [i_3 - 1] [i_3] [i_4]))));
            }
        } 
    } 
}
