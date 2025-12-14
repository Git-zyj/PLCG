/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187343
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
    var_11 = ((/* implicit */_Bool) 3670016);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 ^= ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_0]);
                    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) 14585728209413991211ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) -9184061531025113715LL);
                                var_15 = ((/* implicit */short) (signed char)-13);
                                var_16 = ((((/* implicit */_Bool) ((unsigned short) (+(-103290865))))) ? (((/* implicit */int) ((short) 1536345206U))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned long long int) 2758622089U)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), (var_2))))))));
}
