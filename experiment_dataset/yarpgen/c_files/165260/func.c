/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165260
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
    var_19 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (((-(var_1))) <= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-2256)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1417))) : (arr_2 [10U] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)1))))))))));
        arr_3 [4] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 450036817U)))))), (1048512U)));
        var_22 *= ((/* implicit */_Bool) ((unsigned long long int) max(((-(0U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) <= (3894457887U)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)3))))), ((+(arr_4 [i_2] [i_3])))))) ? (((/* implicit */int) (unsigned short)49263)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_2] [4U])), (var_0)))))))));
                    arr_12 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) arr_0 [i_3]);
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_3 + 1] [i_1])) ? (arr_10 [i_3] [i_3 - 1] [i_3 - 1]) : (arr_11 [i_1] [i_3 + 1] [(_Bool)1])))) ? (max((arr_11 [(unsigned short)8] [i_1] [i_3 + 1]), (arr_11 [i_3 + 1] [i_2] [i_3 + 1]))) : (((unsigned long long int) var_3)))))));
                    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */long long int) min(((signed char)(-127 - 1)), ((signed char)7)));
    }
    var_26 &= (((_Bool)1) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) var_10)) % (((/* implicit */int) var_10))))))) : (min((((/* implicit */unsigned int) ((int) var_0))), ((~(0U))))));
}
