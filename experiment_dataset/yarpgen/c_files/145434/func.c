/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145434
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
    var_19 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_5)))))), (var_18)));
    var_20 = (short)-6290;
    var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)1683)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46108)) && (((/* implicit */_Bool) (short)29276)))))) : (7300776239900519129ULL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_22 = arr_1 [(unsigned short)1] [i_0];
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = max((min((((short) arr_0 [i_0] [(unsigned short)10])), (min((var_6), (arr_4 [i_0 - 1] [(unsigned short)6] [i_0 + 1]))))), (arr_2 [1ULL] [i_1 + 3]));
            arr_7 [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((short) (unsigned short)19428))), (((((((/* implicit */int) (unsigned short)1683)) < (((/* implicit */int) (short)-8209)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0])))))) : (arr_5 [i_0 + 1] [i_1]))));
            arr_8 [(short)14] [i_1 + 1] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)12503)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)21894))))))))) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_11 [i_0] [(short)0] [i_0] = ((/* implicit */unsigned short) (~(max((var_12), (16071648312443161402ULL)))));
            var_23 = ((/* implicit */short) 16194345482274548448ULL);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) max(((short)-19018), (arr_4 [i_0] [i_2] [i_3])))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_14))))));
                        var_25 = ((/* implicit */short) var_1);
                        var_26 = ((short) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_0 + 1])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (unsigned short)46108)) ? (((/* implicit */int) (short)21894)) : (((/* implicit */int) (unsigned short)46106))))));
                    }
                } 
            } 
        }
    }
}
