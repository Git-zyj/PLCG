/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170446
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((((var_4) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0])))), (((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (1683191444)))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) << (((var_1) - (9814281624811235613ULL)))))) ? ((-(513213753U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((6357543161704700361ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((_Bool) (+(((((/* implicit */_Bool) 5550982620453009253LL)) ? (((/* implicit */long long int) 134217728U)) : (6103747893444742139LL)))))))));
                                var_22 &= ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_23 = max((134217728U), (((/* implicit */unsigned int) max((((((/* implicit */int) var_12)) <= (arr_18 [i_7] [i_7] [i_7] [i_8] [i_7]))), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_3))))))));
                                var_24 = ((((/* implicit */_Bool) (((+(((/* implicit */int) var_13)))) % (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2919343191133324634LL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) 134217728U))))));
                                arr_30 [i_7] [i_8] = (-(((/* implicit */int) (_Bool)1)));
                                var_25 = ((/* implicit */_Bool) arr_16 [i_7] [i_8] [i_7] [i_7] [i_11]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_26 = (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_6)))) ? (((6828104582213585825ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : ((-(var_1))))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1))))));
                            var_28 = (~(5550982620453009267LL));
                            var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) 2995689745U)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (short)27586)))))));
                            var_30 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)39953)) ? (341230298069872998ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7] [i_8] [i_7] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (597454178U)))))) ? (max((((/* implicit */unsigned int) arr_32 [i_8])), (3697513119U))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (11342705694161575453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((var_9), (((/* implicit */unsigned int) var_8)))) : (((((/* implicit */_Bool) var_11)) ? (1802493428U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            {
                                arr_41 [i_7] [i_8] [i_14] [i_7] [i_16] = ((/* implicit */_Bool) ((((_Bool) 4645635357529248294LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15850)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_11)))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) arr_31 [i_8] [i_8] [i_8] [i_7]))))));
                                var_31 *= var_6;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
