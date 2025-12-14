/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180464
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_3 [(unsigned char)16] [(unsigned char)16] = (+((-9223372036854775807LL - 1LL)));
        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5202674469276316035LL)) && (((/* implicit */_Bool) (short)-18613))));
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) var_3);
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned int) (short)32767)))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [11LL]))))) << (((((/* implicit */int) arr_0 [i_2])) - (101)))));
        var_20 = ((/* implicit */_Bool) var_15);
        var_21 = ((/* implicit */unsigned int) arr_5 [i_2]);
        arr_8 [i_2] = ((/* implicit */_Bool) var_6);
    }
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (short i_4 = 3; i_4 < 11; i_4 += 1) 
        {
            {
                var_23 = ((/* implicit */short) ((signed char) (+(arr_5 [i_4 + 4]))));
                arr_15 [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_5 [i_4 + 4])) || (arr_1 [i_4 + 3]))));
            }
        } 
    } 
}
