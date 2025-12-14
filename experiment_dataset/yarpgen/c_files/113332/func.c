/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113332
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8042581235856776099LL)))))) % (max((arr_3 [i_0 - 3] [i_0]), (((/* implicit */unsigned long long int) 3975316840U))))));
                                var_15 = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 100335040U))));
                            var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0 + 3] [i_0] [i_5] [i_6]))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((min((((((/* implicit */int) (short)13718)) ^ (((/* implicit */int) (signed char)121)))), ((~(((/* implicit */int) (short)13718)))))), (((/* implicit */int) var_9)))))));
                            var_19 = ((/* implicit */long long int) var_13);
                        }
                    } 
                } 
                arr_18 [i_0] [i_1] = ((/* implicit */int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4446859746559057232ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))), ((!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (long long int i_8 = 4; i_8 < 21; i_8 += 2) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3975316828U)) != (281474976702464ULL)))), (((unsigned int) 319650467U))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7351760027955444819ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1235625444U)))) || ((_Bool)1))))) ^ ((-(((unsigned int) 3975316828U))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) var_2);
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 11094984045754106796ULL)) ? (7351760027955444820ULL) : (((((((/* implicit */unsigned long long int) 319650468U)) + (7383168068555914229ULL))) << (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_1)))))), (((long long int) ((_Bool) 2224814296U)))));
    var_25 = ((/* implicit */unsigned int) (+(min((((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (616603406044969396LL) : (((/* implicit */long long int) var_3)))))))));
}
