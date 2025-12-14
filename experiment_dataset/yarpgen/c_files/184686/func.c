/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184686
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) (unsigned char)198);
                                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 + 1])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((10900448668330998116ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((10900448668330998116ULL) > (((/* implicit */unsigned long long int) -3355350111869556833LL))))))));
                    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0] [13])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) ((signed char) 4196851090U))) : (((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) (short)0)))))))));
    var_24 |= ((/* implicit */short) min(((-(((((/* implicit */_Bool) var_15)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) var_9))));
    var_25 = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (14966927720699330594ULL))) ? (14843109166910030058ULL) : (var_0))) & (((/* implicit */unsigned long long int) ((unsigned int) 3603634906799521557ULL))));
    var_26 |= ((/* implicit */int) var_17);
}
