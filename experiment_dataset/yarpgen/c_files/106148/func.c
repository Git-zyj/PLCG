/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106148
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 8931687148229516751ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2888069425U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2 - 3])) << ((((-(arr_7 [i_0] [i_0] [i_0] [8U] [i_0] [i_0]))) - (1009536987017123507ULL))))))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1406897871U)) ? ((~(var_1))) : (((/* implicit */int) ((_Bool) 7832426184506169364ULL)))))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_3)) : (var_1))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) var_8);
                var_16 *= ((/* implicit */unsigned short) max((0U), (((/* implicit */unsigned int) (unsigned short)33115))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_11)) <= (min((((/* implicit */unsigned long long int) var_0)), (var_10))))) ? (((min((var_5), (((/* implicit */long long int) var_4)))) / (((/* implicit */long long int) (+(-610890674)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) var_4)))))));
    var_18 = var_7;
    var_19 += ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1443424673))))) : (((((/* implicit */_Bool) 7832426184506169364ULL)) ? (((/* implicit */int) (short)7199)) : (var_6))))))))));
                    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_11 [i_4]) & (((/* implicit */int) ((unsigned char) 4072200771836913749ULL)))))), (max((14654633733634292394ULL), (3416520049763494237ULL)))));
                    arr_18 [i_4] [i_5] [i_6] = ((/* implicit */int) max(((unsigned short)14637), (((/* implicit */unsigned short) (short)4066))));
                }
            } 
        } 
    } 
}
