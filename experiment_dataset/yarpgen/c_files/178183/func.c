/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178183
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = min((((/* implicit */int) ((signed char) ((_Bool) (unsigned short)32765)))), (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_4 [i_0] [i_0])))));
                var_19 = ((/* implicit */int) (signed char)127);
                arr_6 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) min((arr_3 [i_0] [12LL] [i_0]), (arr_3 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) (unsigned short)32770)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_2]))));
                var_21 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_2]) : (arr_10 [i_3] [i_2])))) ? (((/* implicit */int) (unsigned short)32770)) : (((((/* implicit */int) (unsigned short)32770)) | (((/* implicit */int) (unsigned short)32765)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60721)) ? (4219176502226855119LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2624)))));
                            arr_18 [i_5] [i_4] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_15 [i_5] [i_4] [i_2]);
                            var_23 = ((/* implicit */unsigned short) (-(min(((+(arr_14 [i_2] [i_2]))), (((/* implicit */int) arr_15 [i_2] [i_3] [i_5]))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) max((((arr_9 [i_2]) << (((((/* implicit */int) arr_16 [i_3] [i_2] [i_2])) - (32999))))), (((((/* implicit */_Bool) (unsigned char)180)) ? (arr_10 [i_2] [i_2]) : (arr_9 [i_3])))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-9160)) : (((/* implicit */int) var_9))))) ^ (((((/* implicit */unsigned long long int) var_17)) | (18446744073705357312ULL)))))));
    var_26 += ((/* implicit */unsigned int) var_7);
    var_27 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((_Bool) var_10)))));
}
