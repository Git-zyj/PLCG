/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184568
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) var_13);
            var_18 = ((/* implicit */unsigned long long int) (-((-((~(((/* implicit */int) var_0))))))));
        }
        for (int i_2 = 1; i_2 < 8; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (long long int i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((unsigned long long int) (unsigned short)65532));
                            var_20 = ((/* implicit */short) ((signed char) 5ULL));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) (short)8684))), ((~(1560397432U))))))));
            var_22 += (+(((((/* implicit */_Bool) ((unsigned short) (short)-8687))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20468))) : (((((/* implicit */long long int) var_15)) - (arr_17 [i_0] [i_0] [i_0] [i_2 - 1]))))));
        }
        for (int i_6 = 1; i_6 < 8; i_6 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)6694))) != (9223372036854775807LL)))))))));
            var_24 = ((/* implicit */signed char) var_15);
        }
        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_5))))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)8684)) ? (min((4294967295U), (((/* implicit */unsigned int) -1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_27 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (9U)))));
        }
    }
    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_28 += ((/* implicit */unsigned int) var_3);
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_26 [i_8]) >= (arr_26 [i_8])))) & ((+(arr_23 [i_8] [i_8])))));
    }
    var_30 = ((/* implicit */short) var_6);
    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (-(((unsigned int) ((((/* implicit */unsigned int) -122813331)) + (var_4)))))))));
    var_32 = ((/* implicit */short) (-(217133263)));
}
