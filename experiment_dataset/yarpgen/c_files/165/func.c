/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_12 [(short)11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) var_9)) : (arr_7 [i_1] [i_1 - 1]))) / (((/* implicit */unsigned long long int) (~(8921042001058204767LL))))));
                    var_11 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_8 [i_1 - 1]))))));
                    arr_13 [i_0] = ((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_2]);
                    var_12 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_10)))) / (((/* implicit */int) ((_Bool) arr_9 [(unsigned char)8] [(unsigned char)8])))));
                    arr_14 [i_2] [i_1 - 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 2])))) / (1857906131)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) var_8)) ? (1582416178) : (((/* implicit */int) (short)-1)))) > (((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 20; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            {
                arr_19 [i_3] [(unsigned char)20] = ((/* implicit */unsigned char) (+(min((504403158265495552ULL), (var_5)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) 17216010529677611436ULL);
                            var_15 = ((/* implicit */signed char) ((unsigned char) var_0));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 504403158265495552ULL)) ? (2165009902U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5))))))))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 857185073380146308ULL))));
                            var_18 = ((/* implicit */int) (~(((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) ^ (17589559000329405308ULL))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((unsigned char) var_1));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_9);
}
