/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129660
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((17158706431146505658ULL), (((/* implicit */unsigned long long int) (unsigned short)39287)))) & (((/* implicit */unsigned long long int) -148349629))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(1031044218)))), (arr_6 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+((+((~(((/* implicit */int) var_13))))))));
                                var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_0] [i_4] [i_3])) | (((/* implicit */int) arr_4 [i_3] [i_2] [i_0]))))), (arr_8 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) max((max((max((((/* implicit */unsigned long long int) var_14)), (16253556595250188601ULL))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1])), (-110509746))) & (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_16)))))))));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1288037642563045976ULL))));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */short) max((((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) 148349653)) || (((/* implicit */_Bool) (unsigned char)48))))))), ((~((+(var_7)))))));
}
