/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12191
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
    var_17 = ((/* implicit */long long int) ((_Bool) -1LL));
    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */int) (unsigned char)77))))) ? (((/* implicit */int) ((unsigned short) 9168859622061131691LL))) : (((/* implicit */int) (unsigned short)63056)))) : (((((/* implicit */_Bool) ((unsigned short) var_4))) ? ((-(((/* implicit */int) (short)3557)))) : (((/* implicit */int) var_12))))));
    var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1498468638)), (var_16)))) : (((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((int) 9007199254675456LL));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_3 [2LL]))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_10 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */short) ((unsigned char) ((((var_4) <= (9007199254675456LL))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1] [i_3] [i_1]))))) : (((((/* implicit */_Bool) (short)-17568)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0]))))));
                                var_22 *= ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                var_23 *= (!(((/* implicit */_Bool) -9007199254675457LL)));
                var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8669222069015556441LL)) ? (((((/* implicit */_Bool) 3236769579U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) : (min((7034459648962993367ULL), (((/* implicit */unsigned long long int) -5762820996991605643LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967295U))))));
            }
        } 
    } 
}
