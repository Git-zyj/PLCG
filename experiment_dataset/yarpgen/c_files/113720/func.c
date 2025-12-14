/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113720
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) (((+((+(var_4))))) <= (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1037))) != (103613468U)))))))));
                var_12 = ((/* implicit */int) (unsigned char)0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_13 = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [8LL] [i_3] [i_4] [i_3]))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) var_1))))))));
                            var_14 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1023)) ? (((/* implicit */int) var_3)) : (var_2)))) & ((~(3435728066395044608LL))))) ^ ((~(-3435728066395044608LL))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)161)) == (1013741782)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)43)) || (((/* implicit */_Bool) -3435728066395044609LL)))))));
                arr_16 [i_2] [i_3 - 2] = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) (unsigned char)0)) ? (arr_9 [i_2 - 1]) : (((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)147)))))));
            }
        } 
    } 
    var_16 = (short)1036;
}
