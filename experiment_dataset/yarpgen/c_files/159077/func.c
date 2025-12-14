/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159077
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
    var_20 &= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_10))) > (min((min((223015370), (((/* implicit */int) var_9)))), (max((var_1), (var_1)))))));
    var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((unsigned int) 1813061995U)) != (((/* implicit */unsigned int) var_2))))), (((unsigned int) (~(((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) min((arr_9 [i_0] [i_0] [i_3]), (arr_9 [i_0] [i_2] [i_2]))))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_18))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned char) var_10)))))) > (4294967295U)));
                    }
                    arr_11 [i_0] [i_0] = min(((~(arr_5 [i_0]))), ((~(arr_5 [i_0]))));
                    arr_12 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) 4294967295U);
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */signed char) var_6);
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(-538485130)))), (max((633112000U), (((/* implicit */unsigned int) var_14))))))) ? (min((((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
}
