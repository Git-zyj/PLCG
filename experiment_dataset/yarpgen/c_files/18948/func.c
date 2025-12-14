/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18948
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
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] [0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
            var_20 = ((/* implicit */unsigned int) ((unsigned char) arr_4 [i_0] [i_0] [i_1]));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (4645958851169716853LL)))) && (((/* implicit */_Bool) ((signed char) arr_0 [i_0])))));
    }
    for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-7017)) + (2147483647))) >> (((-8780827782757487259LL) + (8780827782757487260LL)))));
        var_23 = ((/* implicit */long long int) arr_3 [10U] [10U] [10U]);
        arr_10 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (12574181025034977886ULL)));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 2) 
    {
        for (short i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            {
                arr_17 [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-7012)), ((-2147483647 - 1))))) ? (((/* implicit */int) min(((unsigned char)64), ((unsigned char)231)))) : (((/* implicit */int) min((arr_14 [i_4 + 3]), (((/* implicit */unsigned char) var_18)))))));
                var_24 += ((/* implicit */int) (unsigned char)70);
                arr_18 [i_4] [i_4 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_12))) ? (arr_0 [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-7017))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4]))))))));
                var_25 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_12))));
    var_27 = ((/* implicit */short) var_3);
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-7020))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1606886711)))))));
}
