/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186289
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */_Bool) var_4)) ? (-3609656604702415239LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-13330)), ((unsigned short)36751)))) ? (((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-4717)) : (-362928096))))) : (((/* implicit */int) max(((short)3), (((/* implicit */short) var_0)))))));
    var_16 = ((/* implicit */signed char) (short)17884);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (signed char)117)) == (((/* implicit */int) (signed char)-117)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (-((-(arr_2 [i_0] [i_0])))));
                    arr_8 [i_0] [i_0] [13LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((4112895874U), (((/* implicit */unsigned int) (unsigned short)65535)))), (((/* implicit */unsigned int) (unsigned short)61306))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15468))) : (4957562462008982290ULL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 7804633978243214327LL)), (8027726269686556326ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (1150260849U)))) : ((-(2251799813685247ULL))))))));
                                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (2251799813685247ULL)));
                                arr_16 [i_0] [i_1 - 3] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) | (-3609656604702415239LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 &= ((/* implicit */short) (-(((/* implicit */int) ((short) 12112257947555722776ULL)))));
        arr_17 [i_0] = max((((/* implicit */unsigned int) (unsigned short)15421)), (1057256503U));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_22 &= arr_18 [i_5] [(short)6];
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_19 [i_5]) : (arr_19 [i_5])));
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) : ((+(min((-9223372036854775807LL), (((/* implicit */long long int) 0U))))))));
}
