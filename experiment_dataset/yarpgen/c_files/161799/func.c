/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161799
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) arr_0 [i_0]))));
        var_11 |= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_12 *= ((/* implicit */unsigned short) var_3);
        var_13 = ((/* implicit */short) 8021764779382930515LL);
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_14 = max((((long long int) -1LL)), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 6175368084947226375ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) var_8)) ? (12271375988762325240ULL) : (12271375988762325238ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) >= (min((1316590304U), (((/* implicit */unsigned int) var_9)))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) (short)4)))));
        arr_10 [i_2] = min((((int) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_8)))), ((+(((((/* implicit */_Bool) (unsigned short)54978)) ? (1438943596) : (-1392815334))))));
    }
    for (int i_3 = 4; i_3 < 14; i_3 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) (+(((long long int) -1053601515))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_6))));
                    arr_20 [i_3] [8] [(unsigned short)13] [14U] = ((/* implicit */int) var_3);
                    arr_21 [i_3] = ((/* implicit */int) ((short) 2147483640));
                }
            } 
        } 
        arr_22 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), ((+(var_2)))))) : (18446744073709551604ULL)));
    }
    var_17 = ((/* implicit */unsigned short) var_5);
}
