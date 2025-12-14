/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137465
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
    var_18 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-6595922685449320679LL) : (6595922685449320679LL)))) ? (max((16578658879276011600ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) 2821894854U))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) < (max((var_12), (var_12)))))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_9), (((long long int) (_Bool)1))))), (((((((/* implicit */unsigned long long int) var_5)) ^ (2102601285439696908ULL))) % (((/* implicit */unsigned long long int) (((_Bool)0) ? (var_17) : (((/* implicit */unsigned int) var_13))))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((max((arr_1 [i_0]), (arr_1 [i_1]))) + (((/* implicit */unsigned int) var_3))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)0)))) + ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_4] [i_2] [i_2])) : (((/* implicit */int) arr_3 [16] [i_0]))))))) || (((/* implicit */_Bool) ((var_9) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_3 + 1] [i_2] [(unsigned char)16] [i_1] [(unsigned char)16])) ? (((/* implicit */int) var_4)) : ((-2147483647 - 1))))))))));
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))), (arr_7 [i_3] [i_2] [i_1])))) ? ((+(var_12))) : (max(((~(((/* implicit */int) (_Bool)0)))), ((-(((/* implicit */int) (unsigned short)45184))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = var_3;
}
