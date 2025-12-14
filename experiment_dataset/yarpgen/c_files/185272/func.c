/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185272
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] [i_1] [1] [i_3] = ((/* implicit */short) (~(1012746500)));
                            var_19 &= ((/* implicit */short) max((((((unsigned int) 184903872)) >> (((arr_7 [i_1 + 1] [i_2 + 1] [i_2 + 1] [i_2]) - (3163262655U))))), (max((((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_8 [i_0] [i_1 + 1] [i_1] [i_2] [(unsigned char)4] [i_3]) : (((/* implicit */unsigned int) 184903848)))), (((/* implicit */unsigned int) max((var_3), (185228571))))))));
                            arr_10 [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) 1496703575)))));
                            arr_11 [i_3] = ((/* implicit */int) min((min((((/* implicit */unsigned int) -184903873)), (arr_7 [i_0] [i_2 + 1] [i_1 - 1] [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_1 - 1] [i_0] [i_5] [i_0] [i_5] = ((/* implicit */signed char) max((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(0LL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)18024)) : (((/* implicit */int) (unsigned short)18040)))) : (((arr_14 [i_0] [i_4 + 2] [i_5]) + (((/* implicit */int) var_2)))))))));
                            var_20 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_0 [i_4 + 2] [i_4 + 1])) * (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611963704830907673LL)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned short)47507))))) ? (arr_15 [i_1 - 1] [i_1 + 1] [i_4 - 1] [i_4 + 1]) : (((/* implicit */int) min(((unsigned char)25), ((unsigned char)230))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) (short)21963))))), (((arr_3 [i_0]) / (((/* implicit */long long int) var_16))))))));
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (int i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_6] [i_6] [i_8] = (((~(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_6])) ? (arr_19 [i_8] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 4294967295U)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16462))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_13 [i_1 - 2] [i_1 - 1] [i_7 + 1] [i_7 + 1]))) != (min((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (~((~(min((((/* implicit */int) arr_24 [(unsigned char)10] [i_0] [i_0] [8])), (var_16)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            {
                arr_36 [i_9] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_15)) == (arr_30 [i_9]))))));
                var_24 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_9])) / (arr_30 [(signed char)2])))) ? (((/* implicit */int) (short)12242)) : (max((arr_32 [i_10]), (1012746500)))))), (((max((((/* implicit */unsigned int) arr_34 [i_9])), (var_14))) + (((/* implicit */unsigned int) ((var_3) + (127))))))));
            }
        } 
    } 
}
