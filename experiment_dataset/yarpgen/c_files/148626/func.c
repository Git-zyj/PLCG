/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148626
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)255))));
        arr_4 [i_0] = ((/* implicit */short) (unsigned short)38650);
    }
    for (int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) (signed char)127);
        var_12 = ((/* implicit */short) var_9);
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)128)), (0LL)));
            var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-1800)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((arr_9 [i_1] [i_1 + 1] [i_1 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2834))))))), (((/* implicit */unsigned long long int) (signed char)-124))));
            arr_11 [i_1] = ((/* implicit */short) -795743812);
            var_14 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (arr_9 [(_Bool)1] [(_Bool)1] [i_1 + 2]))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2701944521U)) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49989)))));
                        var_16 = ((/* implicit */int) ((signed char) ((((-1959675776469443490LL) + (9223372036854775807LL))) >> (((4294967295U) - (4294967284U))))));
                    }
                } 
            } 
        }
    }
    var_17 *= ((/* implicit */unsigned char) min((((min((var_11), (((/* implicit */unsigned int) (unsigned char)2)))) * (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) << (((var_2) - (1108912069U)))))))), (((/* implicit */unsigned int) ((((/* implicit */int) min((var_4), (((/* implicit */short) var_9))))) >> (((((/* implicit */int) min((var_4), (var_4)))) - (9391))))))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (+((+(arr_18 [i_5 - 1])))));
        var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
        var_20 = ((/* implicit */unsigned long long int) (unsigned char)0);
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967289U)) ? (((((/* implicit */_Bool) 4294967289U)) ? (min((((/* implicit */long long int) 6U)), (504403158265495552LL))) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) 18U))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [(unsigned char)14] [i_6] [i_6] [i_6] [i_6])) ^ (((/* implicit */int) var_6))));
        var_22 *= ((/* implicit */signed char) var_2);
        arr_23 [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)9155)))))));
    }
}
