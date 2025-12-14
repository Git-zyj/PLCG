/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112367
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (4294967293U))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (arr_0 [i_0])))))))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (arr_5 [i_1])))))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)63))))) : (max((5765664992292368455LL), (((/* implicit */long long int) 283253770U))))))));
                var_15 = ((/* implicit */short) (+(((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((max((((short) var_3)), (((/* implicit */short) var_1)))), (var_0)));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)98)), (arr_12 [i_2] [i_3] [i_3] [i_3])))), (min((((/* implicit */unsigned int) var_10)), (arr_3 [i_2])))));
                    arr_13 [i_2] [i_3] [i_3] = ((/* implicit */long long int) (+(((arr_10 [i_2]) | (arr_10 [i_2])))));
                    arr_14 [4ULL] [i_4] = ((/* implicit */short) ((((/* implicit */int) (short)32758)) != ((-(((/* implicit */int) (unsigned char)34))))));
                    arr_15 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) != ((-(((/* implicit */int) max(((unsigned char)34), (((/* implicit */unsigned char) (signed char)-89)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned int) arr_20 [i_5]);
                    arr_23 [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5])))))) | (max((((((/* implicit */unsigned long long int) 4011713541U)) - (5664105743706151170ULL))), (arr_17 [i_5] [i_7])))));
                }
            } 
        } 
    } 
}
