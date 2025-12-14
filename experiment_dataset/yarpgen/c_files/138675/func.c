/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138675
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
    var_11 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-796879911) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))) : (max((((/* implicit */long long int) var_5)), (-1LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (+(-796879911)))) || (((/* implicit */_Bool) ((2147483647) - (((/* implicit */int) (unsigned char)252))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9240))) <= (18367110613722523051ULL)));
                arr_6 [i_1] [i_1] [i_1] = var_10;
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)110)) ? (-1545290907) : (1940821234)))) ? (((long long int) 2147483647)) : (((/* implicit */long long int) (+(1630008421))))));
        var_14 = ((/* implicit */long long int) ((unsigned char) var_8));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)35107));
                    arr_18 [i_2] [i_4] [i_3] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)17081)) : (796879911));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_15 = ((/* implicit */short) var_4);
            arr_23 [i_6] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (short)0))))));
        }
        var_16 = ((/* implicit */signed char) 18446744073709551615ULL);
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)37)) / (((/* implicit */int) (_Bool)1))));
    }
}
