/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121738
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
    var_15 += ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 0U)) < (6401524869640091436LL))))) / (4294967280U));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) max((var_16), ((!(((max((4294967295U), (arr_1 [7U] [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
        var_17 = 0U;
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (signed char i_3 = 4; i_3 < 22; i_3 += 4) 
            {
                {
                    var_18 = 7354173921026456086LL;
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((15U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    arr_12 [i_1] [i_2] [i_3] = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) arr_4 [i_3 - 2]))), (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) arr_4 [i_3 + 2])) : (((/* implicit */int) arr_4 [i_3 - 3]))))));
                    var_20 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (414323682342179780ULL)))) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_7 [22ULL]))))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 10914603339233940304ULL)) ? (arr_10 [i_1] [i_1] [20LL]) : (arr_10 [i_1] [i_1] [i_1]))) >= (min((((/* implicit */long long int) (unsigned char)174)), (4672154762851086850LL)))));
    }
}
