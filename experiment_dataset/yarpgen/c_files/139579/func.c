/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139579
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
    var_12 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_6)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) max((11071943212935172028ULL), (11071943212935172033ULL)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_1] [(signed char)0] = ((/* implicit */unsigned short) 17162974631417593698ULL);
                                var_13 *= ((/* implicit */unsigned short) 1283769442291957918ULL);
                                arr_13 [i_1] [i_4] = ((/* implicit */int) 8057252816278759828LL);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) ((int) ((int) 15U)));
                var_14 -= ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_3 [i_1 + 3] [(unsigned char)0])), (17162974631417593698ULL))));
                var_15 = ((/* implicit */unsigned long long int) ((int) 1283769442291957913ULL));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((1283769442291957924ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)17)), (8057252816278759833LL)))) ? (arr_11 [i_5 + 1] [i_5] [i_5] [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_18 [8U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)46855)) ? (((/* implicit */unsigned long long int) 1067523545)) : (3798899049768740852ULL))))))));
                var_18 = ((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_5] [i_6] [i_6]);
                arr_23 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))) < (7374800860774379588ULL)));
                arr_24 [i_6] = ((/* implicit */int) arr_2 [i_6]);
            }
        } 
    } 
}
