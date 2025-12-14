/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13581
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_5 [i_1] [i_1 - 4]))))) <= (((3475861586560128126ULL) - (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(short)9] [i_2]))))));
                    var_18 *= ((/* implicit */signed char) ((unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((signed char) arr_5 [i_2] [i_1]))))));
                    var_19 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_15), (var_8)))) ^ (((/* implicit */int) (signed char)-1))))), (max((6475074753650154261ULL), (((/* implicit */unsigned long long int) (unsigned char)49))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        var_20 += ((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (short)25898))))), (1401719559)))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_2), (arr_10 [(_Bool)1] [(_Bool)1]))))) : (min((((/* implicit */long long int) var_6)), (arr_11 [14LL] [i_3]))))));
        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_10 [i_3 - 2] [i_3]), (arr_10 [i_3 + 2] [i_3])))), (max((arr_9 [i_3 + 3]), (((/* implicit */unsigned long long int) (short)9367))))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_15))));
}
