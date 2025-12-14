/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176928
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [7LL] [7LL] [(_Bool)1] = ((/* implicit */short) min(((~(arr_4 [(_Bool)1] [i_2 - 2] [i_2] [i_2]))), (arr_4 [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 1])));
                    var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_2])) ? (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) 7340032U))))) : (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (short)-27370)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_1))))))));
                    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                    arr_9 [i_0 - 1] [i_1] [(signed char)11] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [(unsigned short)5] [(unsigned short)5] [i_2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 10905719759489814589ULL)) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (arr_4 [i_2 + 1] [14] [i_2] [17LL])))), (10905719759489814580ULL)));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((7541024314219737042ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) (~(var_4)))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) & (((/* implicit */unsigned long long int) ((int) (+(var_15))))))))));
}
