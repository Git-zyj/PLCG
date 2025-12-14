/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140695
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) 8527673361208890863LL);
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)139)) ? (8527673361208890863LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2))))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)139)))))));
                    var_22 -= ((((/* implicit */int) var_7)) - (((/* implicit */int) var_19)));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((arr_13 [8LL] [i_2] [i_2]) ? (((/* implicit */int) arr_4 [i_2] [8U])) : ((-(((/* implicit */int) var_19))))));
    }
    /* vectorizable */
    for (long long int i_5 = 3; i_5 < 12; i_5 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((-4475020154816318823LL) - (((/* implicit */long long int) -923462347)))))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_5 - 2])))))));
        var_26 |= ((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5 - 2]);
    }
    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        arr_20 [i_6] |= ((/* implicit */unsigned char) (+(8527673361208890863LL)));
        arr_21 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) 2048540416U)), (arr_0 [i_6]))) >> ((((-(var_15))) + (8575206010442657325LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_17)));
        arr_22 [i_6] [i_6] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((-1120076032) >= (((/* implicit */int) var_2)))))) == (min((((/* implicit */long long int) arr_19 [i_6])), (arr_1 [i_6] [22LL])))))), (max((-163708672), (((/* implicit */int) var_7))))));
    }
}
