/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102386
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
    var_13 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((unsigned long long int) var_9)))) < (((/* implicit */int) var_5))));
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) + (((/* implicit */int) var_12)))) + (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_5)))))));
                var_15 = ((/* implicit */short) var_1);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6))) - (min((min((var_10), (((/* implicit */unsigned long long int) var_5)))), (max((((/* implicit */unsigned long long int) var_3)), (var_10)))))));
                            var_17 = ((unsigned long long int) ((_Bool) max((var_10), (var_10))));
                            arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_8))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (8070450532247928832ULL))))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */unsigned short) ((((long long int) min((((/* implicit */int) var_12)), (var_8)))) ^ (((((((/* implicit */int) var_12)) >= (((/* implicit */int) var_7)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)5779)) | (((/* implicit */int) (unsigned short)59757)))))))));
            }
        } 
    } 
}
