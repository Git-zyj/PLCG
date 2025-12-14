/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113600
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((short) (-(((/* implicit */int) (signed char)64))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)1356)) ? (((/* implicit */int) (short)21639)) : (-540832474))), (((/* implicit */int) (short)-16960)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (short)16960);
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-16955)) : (((/* implicit */int) (unsigned char)0)))))));
        arr_9 [(unsigned char)5] [i_1] = ((/* implicit */unsigned char) (+((+(arr_0 [i_1])))));
    }
    var_17 = ((/* implicit */short) 6U);
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62087))) - (2251799813684736LL)))) ? (-4155685559706440379LL) : (((/* implicit */long long int) max((3863450U), (((/* implicit */unsigned int) (signed char)-16))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)10724)) : (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)36641)))))))));
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 15; i_2 += 4) 
    {
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            {
                arr_17 [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 66846720)))))))));
                arr_18 [i_2] [(short)7] = arr_13 [8U] [i_3];
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_11 [i_2]))));
            }
        } 
    } 
}
