/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18656
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)16489))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)24659)) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) ((((/* implicit */int) (short)5930)) >= (((/* implicit */int) (short)4047)))))))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (((arr_3 [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_12)))))))));
                            }
                        } 
                    } 
                } 
                var_18 += ((/* implicit */unsigned char) ((_Bool) var_6));
                var_19 = arr_4 [i_0] [i_0];
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (((-2147483647 - 1)) <= (((/* implicit */int) (_Bool)0)))))));
    var_21 = ((/* implicit */unsigned int) min((((((var_5) << (((((-1116554364408376879LL) + (1116554364408376928LL))) - (49LL))))) >> (((((var_15) >> (((var_16) + (1174527775))))) - (963442392ULL))))), (max((((long long int) var_1)), (min((2029723549802163236LL), (var_5)))))));
}
