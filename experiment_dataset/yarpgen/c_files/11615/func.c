/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11615
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1])), (arr_4 [i_0] [(unsigned char)12] [i_2]))), (((/* implicit */unsigned long long int) max((((int) var_7)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)38933)))))))));
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [10LL] [i_1])) ? (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned char) var_5)))))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38933))) : (arr_4 [i_0] [i_0] [i_0])))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_5 [(unsigned char)11]));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)26602)) ? (var_1) : (min((((/* implicit */long long int) var_9)), (var_1))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)26602)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9))))))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)26603), ((unsigned short)38932)))) ? (((/* implicit */int) (unsigned short)38927)) : (((/* implicit */int) (unsigned short)38933))))) ? (var_7) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6))), (((/* implicit */unsigned int) min(((unsigned short)38933), ((unsigned short)38916))))))))));
    var_14 = var_0;
}
