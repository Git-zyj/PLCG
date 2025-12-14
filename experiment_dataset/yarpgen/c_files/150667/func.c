/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150667
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_14), (var_1)))), ((~(var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)0))))) : ((-(2199023255551LL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [16LL] [16LL] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)16384))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_4] [4] [i_0] [i_0] = ((/* implicit */unsigned char) max((((int) ((((/* implicit */int) (unsigned char)241)) | (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)207)), ((unsigned short)56666)))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_11))))) : (min((((/* implicit */int) (unsigned char)73)), (1984747062)))))));
                                arr_16 [i_4] [i_3] [i_3 - 1] [16] [i_3] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) min(((unsigned short)8025), (((/* implicit */unsigned short) (short)14250)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_3))));
}
