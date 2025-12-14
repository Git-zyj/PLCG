/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179232
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
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    var_15 = ((/* implicit */int) var_11);
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_10))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9428232264068009597ULL), (((/* implicit */unsigned long long int) 63488))))) ? (min((9018511809641542013ULL), (((/* implicit */unsigned long long int) (unsigned char)155)))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) && (((/* implicit */_Bool) ((int) (+(((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1 - 1] [i_1 + 2] = ((((/* implicit */long long int) (~(arr_1 [(_Bool)1])))) > ((-(var_5))));
        var_17 = ((/* implicit */unsigned int) (~(arr_2 [i_1 + 2])));
        arr_8 [i_1 - 1] = ((/* implicit */_Bool) ((long long int) (_Bool)1));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)177)))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 &= ((/* implicit */unsigned char) (!(arr_5 [i_2] [i_2])));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 9018511809641542011ULL))));
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) -1073741824);
                    var_21 = ((/* implicit */unsigned char) ((unsigned short) arr_11 [i_4 - 1] [i_3]));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) (-(max((arr_6 [i_5]), (arr_6 [i_5])))));
        var_23 = ((/* implicit */signed char) max((arr_5 [i_5] [i_5]), ((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))));
    }
    var_24 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20675))) != ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (98304U))))));
    var_25 = ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */_Bool) 68719476735LL)) && (((/* implicit */_Bool) 15U)))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) max((var_7), (var_3)))))));
}
