/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130438
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), (arr_0 [i_0] [i_1])))) ? (((((/* implicit */_Bool) max(((unsigned short)60182), ((unsigned short)5378)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 4397053710045301174LL)) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)60184)))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_1]);
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) min(((unsigned short)60179), ((unsigned short)5911))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) (-((-((((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2])))))))));
        var_12 = ((/* implicit */unsigned char) min(((!((!(((/* implicit */_Bool) arr_7 [i_2])))))), (((((/* implicit */_Bool) max(((unsigned short)1), (((/* implicit */unsigned short) arr_9 [i_2]))))) && (((/* implicit */_Bool) arr_7 [i_2]))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) 11313899078068318446ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(2093056)))) ? (681758157U) : (((((/* implicit */_Bool) 1226850326U)) ? (3068116979U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5335)))))));
        var_13 -= ((/* implicit */unsigned long long int) (_Bool)1);
        arr_16 [(unsigned short)6] = ((/* implicit */unsigned short) ((unsigned int) (short)13927));
        arr_17 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5361))));
    }
    var_14 = var_4;
}
