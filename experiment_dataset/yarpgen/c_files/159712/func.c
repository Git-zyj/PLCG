/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159712
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
    var_18 -= ((/* implicit */_Bool) var_10);
    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)31211), (((unsigned short) (unsigned short)9590))))) ? (2456354651857568300LL) : (((/* implicit */long long int) 1754360484U))));
    var_20 += ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (unsigned short)52126)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) % (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) (unsigned short)58299)), (4363689917138383234LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) var_15))))) * (((((/* implicit */_Bool) (unsigned short)52129)) ? (11484117416358531378ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13342)))))));
                    var_22 ^= ((/* implicit */unsigned long long int) var_5);
                    arr_6 [i_2] = ((/* implicit */unsigned short) var_3);
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned short)13395)), (1874358119)))));
                }
                for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) var_13))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) ? (max((11218441130012784453ULL), (((/* implicit */unsigned long long int) 1874358110)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40)))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        for (short i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) var_8);
                                var_25 = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                }
                var_26 = ((/* implicit */unsigned short) var_12);
            }
        } 
    } 
}
