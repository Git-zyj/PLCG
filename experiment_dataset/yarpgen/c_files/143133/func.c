/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143133
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (+((+(3116779189015000520LL))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)2)))), (var_8)));
                                var_14 = ((/* implicit */_Bool) var_7);
                                var_15 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9761))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                var_17 = (((-((-(((/* implicit */int) var_2)))))) << (((((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned int) (signed char)-41)), (var_4))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-28))))))) - (4294967243U))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        arr_17 [i_5] [i_5 - 2] = (((!(((/* implicit */_Bool) 18446744073709551609ULL)))) || (((/* implicit */_Bool) 15279533289772795512ULL)));
        arr_18 [i_5] = ((/* implicit */unsigned long long int) (+(var_6)));
    }
}
