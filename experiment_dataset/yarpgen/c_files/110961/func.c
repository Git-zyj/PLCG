/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110961
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) (-(((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) var_13)))))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_0 [i_0]))));
            var_20 = ((/* implicit */int) arr_1 [i_0]);
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((4040589656023304248LL) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_6 [i_2]) ? (((/* implicit */unsigned int) var_9)) : (705207306U)))) <= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 2010838405U)) : (3602112369010301873ULL))))))))))));
            var_22 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]);
            var_23 = ((/* implicit */int) (unsigned short)50190);
        }
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
        {
            var_24 = (((-(((/* implicit */int) (unsigned short)15345)))) - (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_2)))));
            var_25 = ((/* implicit */unsigned short) arr_10 [i_0] [i_3]);
        }
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                {
                    var_26 = ((/* implicit */int) ((2997294717U) + (3589759990U)));
                    var_27 = ((/* implicit */short) arr_13 [i_0]);
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) (unsigned short)15345);
        var_29 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_6 [i_0])))));
    }
    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_2))));
    var_31 = ((/* implicit */unsigned long long int) var_5);
    var_32 |= ((/* implicit */int) 3589759990U);
}
