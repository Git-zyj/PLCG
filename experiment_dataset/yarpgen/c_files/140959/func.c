/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140959
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
    var_14 = ((/* implicit */signed char) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) * (var_9)));
        arr_4 [i_0] = ((/* implicit */unsigned int) (unsigned char)71);
    }
    for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (1057657592U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-32))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3237309723U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0ULL])))))) ? ((~(((arr_7 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))))))) : (((/* implicit */long long int) ((((2552092147U) ^ (2552092145U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58151))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64942))))) ? (((((/* implicit */int) (_Bool)1)) << (((14411340035868450920ULL) - (14411340035868450913ULL))))) : (((/* implicit */int) ((2552092147U) < (((/* implicit */unsigned int) 672464786)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_4)));
    }
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        var_17 = ((/* implicit */long long int) (-((+(((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_5 [i_2]))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 4; i_3 < 16; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) 5178161349294156717LL);
                    var_19 = ((/* implicit */unsigned char) ((12393177595151709280ULL) + (((/* implicit */unsigned long long int) 1340166141U))));
                    var_20 = var_13;
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned long long int) 2552092163U);
                                arr_23 [i_2] [i_3] [i_4] [i_5 - 1] [i_3] = ((/* implicit */_Bool) arr_10 [i_5]);
                            }
                        } 
                    } 
                    arr_24 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) -1964789001)), (arr_16 [i_4] [i_3] [i_4] [i_4]))))) - (((((((/* implicit */_Bool) arr_19 [i_2] [i_2 - 2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_11))) + (((var_4) ^ (((/* implicit */long long int) var_13))))))));
                }
            } 
        } 
        arr_25 [i_2 + 2] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (503612637613233464ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : ((-(((/* implicit */int) (signed char)0)))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 4035404037841100683ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))))) : (((/* implicit */unsigned long long int) var_9)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5689)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))) : (1161256713U))))));
}
