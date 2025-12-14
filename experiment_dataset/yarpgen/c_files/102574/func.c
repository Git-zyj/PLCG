/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102574
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
    var_10 ^= ((/* implicit */int) min((((/* implicit */long long int) var_4)), ((~(2403093884953009948LL)))));
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max(((unsigned short)42693), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_2)) != (var_8))))))), (((((((/* implicit */_Bool) 9793654111127537967ULL)) ? (8653089962582013648ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned long long int) var_3)))))))));
    var_12 = ((/* implicit */long long int) var_9);
    var_13 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)-95))) & ((-(((/* implicit */int) (short)32755))))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57611))) >= (arr_2 [i_1])))) == (((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_0]))))))))))));
                var_15 = max((((/* implicit */int) max((arr_1 [i_0 + 4]), (((/* implicit */unsigned char) (signed char)91))))), (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-54)) && (((/* implicit */_Bool) -6191123349235020995LL))))) + (2113854007))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
}
