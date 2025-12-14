/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140438
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [4LL] [4LL] [i_2] = ((/* implicit */unsigned long long int) var_1);
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) var_2)), (var_0))))) + (2147483647))) >> (((min((4906044961920767152LL), (((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_2 [(_Bool)1]))))))) - (216LL)))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
                        arr_15 [i_0] [i_0] [8LL] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) != (arr_3 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) == (2945383982993770140LL))))) : (((((/* implicit */_Bool) arr_10 [i_0] [(signed char)1])) ? (((/* implicit */long long int) var_4)) : (1729382256910270464LL))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_12 = ((/* implicit */long long int) ((((long long int) arr_2 [i_3])) < (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [14LL] [i_4])))))));
                            var_13 = min((arr_5 [(_Bool)0] [i_1] [5ULL]), (((/* implicit */unsigned long long int) arr_13 [i_4] [i_3] [i_0] [i_1] [i_0])));
                            arr_19 [i_0] [i_1] [i_0] [i_4] = arr_12 [i_0] [i_2] [14LL];
                        }
                        arr_20 [i_0] = ((/* implicit */long long int) ((((arr_1 [i_0]) ? (((/* implicit */int) arr_12 [i_0] [i_3 + 4] [i_0])) : (49152))) < (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_0] [i_3 + 3])) - (205)))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        arr_24 [18LL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((max((arr_4 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6294265757387142035ULL)) ? (-1729382256910270464LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_5 - 1])))))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_9)), (arr_16 [i_0] [i_0] [i_5 + 4] [i_5 - 1]))))));
                        arr_25 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_0])))) << (((((/* implicit */int) var_7)) - (238)))));
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        arr_28 [i_2] = (~(((unsigned long long int) arr_22 [i_1] [i_6])));
                        arr_29 [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [i_2] [i_1])) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        var_14 = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) ((var_11) ^ (((/* implicit */unsigned long long int) var_0))))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) (((((-(var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_2])))))))) / ((~(0ULL)))));
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))) % (var_4)))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((unsigned short) arr_5 [i_7 - 1] [i_0] [i_0])))) & (arr_22 [i_0] [20ULL])));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((int) var_8))));
    var_18 = ((/* implicit */int) var_3);
}
