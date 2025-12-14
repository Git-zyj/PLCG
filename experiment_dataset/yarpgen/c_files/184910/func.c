/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184910
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
    var_14 = ((/* implicit */short) max((((((var_12) ? (2092609021U) : (((/* implicit */unsigned int) -597707258)))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((_Bool) var_2))));
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -6802873319155844395LL)) ? (((long long int) arr_6 [i_3] [i_1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) -597707258)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                            var_16 = ((/* implicit */unsigned long long int) ((4294967295U) | (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((unsigned short) arr_1 [i_2]))))))));
                            var_17 = (unsigned char)34;
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) max((((arr_3 [i_0]) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (-3745935607624326582LL)))) : (var_13))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (short)18499)))))))));
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(-597707258)))) / ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) + (4160181897U)))))));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)50212), (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18353))) : (var_0))) : ((~(17084538227454137506ULL))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) -1581075503);
                            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) var_13))), (min((var_11), (arr_5 [i_5] [(unsigned char)15]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
