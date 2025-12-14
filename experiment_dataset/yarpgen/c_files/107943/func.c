/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107943
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
    var_16 = ((/* implicit */short) (-(((unsigned long long int) min((((/* implicit */int) var_4)), (16383))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43215)))))) * (arr_1 [i_1] [i_0]))));
                    arr_9 [(unsigned char)20] [i_2] [i_2] [i_2] = (((((+(var_2))) * (((/* implicit */unsigned int) -16383)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (5878142347346683485LL)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((-9083715922378200235LL) - (((/* implicit */long long int) ((/* implicit */int) var_1)))))) > (((unsigned long long int) (_Bool)1))))), ((~(((/* implicit */int) (short)5827))))));
}
