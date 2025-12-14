/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178336
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (~(var_1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [(unsigned short)23] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
                var_11 += ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0 + 1] [i_0] [i_3] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) (_Bool)1)), (var_3)))));
                            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), (max(((unsigned short)42568), (((/* implicit */unsigned short) (_Bool)0))))));
                            var_12 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) var_0)))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (var_3) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (8326616662083331009LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */signed char) (_Bool)1))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */int) max((var_7), (var_9)))) | (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                                arr_23 [i_0 + 1] [i_0] [i_4] [i_4] [i_0] = min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [i_6])) << (((/* implicit */int) var_9))))), (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned long long int) arr_2 [i_4])));
                                arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) -3247191403999831413LL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-17465)), (18446744073709551607ULL)))))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (arr_1 [i_4] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
