/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159670
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
    var_13 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 3833682810376808932LL)) || (((/* implicit */_Bool) var_4))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4270994222U)) ? ((-(max((3833682810376808932LL), (((/* implicit */long long int) var_5)))))) : (min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) 4919802352976137153LL)) ? (var_7) : (((/* implicit */long long int) var_0))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned long long int) arr_4 [i_1]);
                    var_16 = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) 5083525771135231245LL))))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3833682810376808924LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2016950722U)) ? ((~((~(((/* implicit */int) (unsigned char)196)))))) : ((+(((/* implicit */int) (unsigned char)204))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */signed char) ((unsigned char) 2278016574U));
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3833682810376808932LL)))) ? (min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) 3265289375U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26388))) : (arr_12 [i_0] [i_1] [i_3] [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
