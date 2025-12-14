/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13066
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_13 = ((unsigned short) var_0);
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) var_5);
                        var_14 = ((int) var_3);
                        var_15 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_10))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0] [i_2]))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */int) ((signed char) (~(var_6))));
        var_16 = ((/* implicit */long long int) ((unsigned int) var_12));
    }
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
    {
        arr_14 [i_4] [i_4] = (-(((/* implicit */int) ((short) ((unsigned short) 4227858432U)))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((short) var_5))) / ((-(((/* implicit */int) var_4))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_12))));
        arr_15 [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned short) var_9)), (var_5))))), (arr_8 [i_4] [i_4] [i_4])));
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        var_19 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) var_10)) : (var_6))), ((-(((/* implicit */int) var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5])) | (((/* implicit */int) (unsigned char)136)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_16 [i_5])), (arr_7 [i_5] [i_5])))) ? (((int) var_6)) : (((/* implicit */int) ((signed char) var_9))))));
        arr_18 [i_5] &= ((int) ((((/* implicit */int) ((signed char) var_6))) == (((/* implicit */int) ((_Bool) var_0)))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) 9223372036854775807LL))) : (((/* implicit */int) var_9)))))));
    }
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) max((((/* implicit */int) var_11)), (-1523000389)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((int) var_8))) == (((long long int) var_7))))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (var_6)))), (((unsigned int) var_0))))) ? (((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) var_3))))) : (((/* implicit */int) var_2))));
}
