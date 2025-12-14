/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154239
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_0))))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)3)) & (((/* implicit */int) (unsigned char)253)))))))) - (((/* implicit */int) ((((/* implicit */_Bool) -12896436)) && (((/* implicit */_Bool) (unsigned short)40534)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)10] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-2698920346822538325LL))))))) != (((7630109223176930996ULL) & (((/* implicit */unsigned long long int) 353931689613411017LL))))));
                var_17 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)252)) || (((/* implicit */_Bool) (unsigned char)253)))) || (((arr_2 [7]) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))))) % (((/* implicit */int) ((((((/* implicit */int) (unsigned char)14)) ^ (((/* implicit */int) (unsigned short)32506)))) > (((((/* implicit */int) (signed char)124)) | (((/* implicit */int) (signed char)124)))))))));
            }
        } 
    } 
}
