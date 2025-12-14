/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120138
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
    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) var_10));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1] [i_1] [i_1]))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_6 [i_1] [i_1] [i_1]))) : (((arr_6 [i_1] [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (1741589621U)))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_1)))) ^ (((/* implicit */int) (short)8203))))) : (((((((/* implicit */_Bool) var_0)) ? (9205434268792703826ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))))))))));
                var_16 = ((/* implicit */unsigned short) var_9);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */long long int) var_5);
        var_17 = ((/* implicit */int) ((arr_7 [i_2 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [(signed char)0])))));
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3]))));
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_19 &= ((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_12))));
                    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(10488372416978572738ULL)))) ? (((/* implicit */int) ((signed char) (unsigned short)51850))) : (((/* implicit */int) var_1))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (arr_4 [i_3] [i_3] [i_5])))) ? ((~(((/* implicit */int) (unsigned short)51849)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8203))) <= (arr_2 [i_3] [i_3]))))));
                }
            } 
        } 
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((unsigned long long int) var_8));
        var_23 -= ((/* implicit */unsigned long long int) (+(arr_22 [i_6])));
    }
    var_24 = ((_Bool) ((unsigned short) (+(((/* implicit */int) var_7)))));
}
