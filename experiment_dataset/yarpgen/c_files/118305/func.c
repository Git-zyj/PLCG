/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118305
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
    var_19 += ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (signed char)32);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_4 + 3] [i_4] [i_4 - 1] [i_4 - 3] [5LL]))))) ? (min((((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)6] [(unsigned short)7] [i_4]))) : (8271434109929331496LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 12086652372010901962ULL))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_4))))), ((unsigned short)13537)))))))));
                            var_22 += ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [(short)3]);
                            arr_13 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1] [i_4 + 1] [10])) > (((/* implicit */int) ((short) 1164186213U))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) > (-1395315622858505261LL))) ? (9LL) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-5LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_4 + 3] [i_4 - 1]) || (((/* implicit */_Bool) min((((/* implicit */short) var_14)), ((short)5937))))))))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 14; i_5 += 1) 
                        {
                            arr_17 [i_0] = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [10ULL])))))) >> (((min((var_18), (8271434109929331470LL))) - (8271434109929331463LL)))));
                            var_23 += ((/* implicit */unsigned char) min((-5LL), (((/* implicit */long long int) 712351335))));
                            arr_18 [i_0] [i_0] [i_0] [(_Bool)1] [14U] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_8 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1]))) / (((int) var_16))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_24 += ((/* implicit */_Bool) var_3);
                            arr_21 [i_6] = ((/* implicit */int) (-(min((arr_5 [(_Bool)0] [i_1] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_7))))))));
                        }
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((unsigned short)19887), (((/* implicit */unsigned short) (short)259))))), (((min((arr_12 [i_0] [i_2] [i_2]), (var_1))) ? (min((((/* implicit */unsigned long long int) var_3)), (7963252478794529527ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1]))))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_1] [i_1]));
                        arr_22 [i_2] [i_1] [0ULL] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_13)), (6360091701698649648ULL)));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1562497549)), (2417748136664200554ULL)))) || ((((_Bool)1) && (((/* implicit */_Bool) 0U)))))) || (arr_2 [i_0] [12ULL] [i_1])));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))))) | ((~(var_11)))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_29 += ((/* implicit */unsigned int) arr_11 [i_7] [i_0] [i_7] [i_0] [i_0]);
            var_30 = ((/* implicit */unsigned long long int) (unsigned short)15040);
            arr_25 [i_0] = ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) var_0)) - (30324))));
        }
        var_31 += ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) var_0)));
    }
}
