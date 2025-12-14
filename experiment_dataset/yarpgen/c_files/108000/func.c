/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108000
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_0] |= min((((-3102330840987626607LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-38))))), (((/* implicit */long long int) (-((+(((/* implicit */int) (short)25081))))))));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13)))))))))))));
                            var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned short) max(((signed char)43), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])))))))), (var_9)));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_0] [(unsigned char)14] [i_1] [i_1]), (max((((/* implicit */unsigned short) (short)-1)), (var_4))))))) + (max((2657169442U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)5399))))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((max((((((/* implicit */unsigned long long int) -1)) ^ (16339063743376188139ULL))), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (((/* implicit */unsigned long long int) (unsigned char)255)))))));
}
