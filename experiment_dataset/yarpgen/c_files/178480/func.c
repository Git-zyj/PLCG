/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178480
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
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)53773)))), (-1757080847)))), ((+(min((((/* implicit */long long int) -1827758034)), (119449748616366812LL)))))));
    var_15 &= ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)49984)), (min(((~(-1827758032))), ((-(((/* implicit */int) (unsigned char)255))))))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_17 = 3310218018U;
                    var_18 = ((/* implicit */unsigned short) min((min((-1421283830), (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))), (max((((/* implicit */int) (signed char)51)), ((+(2028263011)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) max(((~((-(1ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)51)), (-1600035062)))), (min((((/* implicit */unsigned int) -1827758044)), (1121743549U))))))));
                        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((420255032), (((/* implicit */int) (unsigned short)32752))))))))));
                    }
                }
            } 
        } 
    } 
}
