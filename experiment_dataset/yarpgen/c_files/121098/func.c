/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121098
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
    var_10 = ((/* implicit */short) var_7);
    var_11 &= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_7)))))) - (((var_6) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32754)))))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned char)224))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) max(((unsigned char)42), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)128)))))));
                            arr_10 [i_0] [i_1] [(unsigned char)1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)17])) ? (-1822517122) : (((/* implicit */int) (unsigned char)104)))))))), (arr_8 [i_3] [i_1 - 1] [i_1 - 1] [i_0])));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_4))));
                        }
                    } 
                } 
                arr_11 [(unsigned char)8] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [7U] [7U])) || (((/* implicit */_Bool) ((unsigned int) var_0))))) ? (max((((/* implicit */unsigned long long int) var_1)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)45)) != (((/* implicit */int) arr_2 [i_1 - 1]))))))));
                var_15 *= ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_1 - 1])))) + (((/* implicit */int) ((short) arr_0 [i_1 - 1])))));
            }
        } 
    } 
}
