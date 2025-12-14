/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15871
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
    var_10 = ((/* implicit */int) max((((((/* implicit */_Bool) var_1)) ? ((+(3270002575838316763LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)9342))))))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_2))))))))));
    var_11 = ((/* implicit */short) max((var_0), (((/* implicit */long long int) (+(max((((/* implicit */int) var_8)), (-957387572))))))));
    var_12 = ((/* implicit */unsigned int) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) var_9))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967281U)))))) / ((-(5409401521913396025LL)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) -3270002575838316760LL);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
                            {
                                var_14 = var_8;
                                var_15 = ((/* implicit */short) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9345)))))));
                                arr_14 [i_1] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((var_4) ? (arr_9 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (var_3)))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)20703))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41756))) & (9U))))) : (((/* implicit */unsigned int) (((~(arr_8 [10] [i_3] [(unsigned short)9] [(unsigned short)9]))) ^ (((/* implicit */int) (_Bool)1)))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                            {
                                arr_18 [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) (short)-117)) : (((/* implicit */int) (unsigned char)13))));
                                arr_19 [i_2] [i_2] [(short)5] [i_4] [i_4] [(unsigned short)8] [i_6] = (-(((134152192U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                                arr_20 [i_6] [i_6] [i_2] = ((/* implicit */unsigned short) -5409401521913396016LL);
                                arr_21 [i_1] [i_1] [i_2] [i_2] [i_6] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((arr_17 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 1]) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) var_5))));
                            }
                            arr_22 [i_1] [i_1] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) min(((((_Bool)1) ? (5409401521913396001LL) : (((((/* implicit */long long int) 1502219658U)) / (var_3))))), (((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_3))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)49675))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [11] [i_2]))) : (((var_0) & (var_0))))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (795612334U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) (short)-25168)))))));
                            arr_29 [i_1] [i_2] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-20340)))) / (max(((~(arr_9 [i_8] [i_2]))), (((/* implicit */long long int) (short)-20343))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
                            {
                                var_18 |= ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (short)-11052))))));
                                var_19 &= ((/* implicit */_Bool) (-((-(2657872801246748744ULL)))));
                            }
                            /* vectorizable */
                            for (short i_10 = 1; i_10 < 11; i_10 += 4) /* same iter space */
                            {
                                arr_36 [i_2] = ((/* implicit */short) ((long long int) var_0));
                                arr_37 [i_1] [i_1] [i_1] [i_1] [2] [i_2] [(unsigned short)9] = ((/* implicit */short) arr_9 [i_1] [i_2]);
                            }
                            /* vectorizable */
                            for (short i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
                            {
                                arr_40 [(short)4] [i_8] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_4)))));
                                arr_41 [i_1] [i_2] [i_7] [i_1] [i_2] [i_11] = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                                arr_42 [i_11] [i_2] [i_2] [1LL] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))) >> (((((arr_8 [i_1] [i_7] [i_8] [i_11]) << (((((var_3) + (6230990072049324099LL))) - (27LL))))) - (1249927801)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
