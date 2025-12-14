/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102120
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = (~(((/* implicit */int) (short)1792)));
        var_18 = ((/* implicit */short) (~(arr_1 [i_0])));
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_1 [(_Bool)1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [2]))))) : (((((/* implicit */_Bool) arr_1 [0LL])) ? (arr_1 [4LL]) : (arr_1 [(unsigned short)6])))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_20 -= ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
        arr_4 [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 6; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 7; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    {
                        arr_12 [i_4] [i_3] [i_3] [0] = ((/* implicit */short) min((((signed char) arr_5 [i_2 + 4] [i_2 + 3])), ((signed char)111)));
                        arr_13 [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned short)16718))))) ? (arr_11 [i_4] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1]) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) 4LL)) : (arr_11 [9] [i_3] [i_3 - 2] [i_3 - 2] [i_3] [i_3])))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */int) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_1)) ? (1573419488199971959LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))))) : (((/* implicit */long long int) max((((/* implicit */int) var_1)), (var_3))))))));
    var_22 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((unsigned short) -603877691))))) && ((!(((/* implicit */_Bool) max((((/* implicit */int) var_4)), (1170083222))))))));
    var_23 += var_0;
}
