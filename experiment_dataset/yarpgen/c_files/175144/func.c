/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175144
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
    var_10 = ((/* implicit */_Bool) (+(var_6)));
    var_11 = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) var_7)), (var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] [i_1] |= ((/* implicit */signed char) arr_2 [(short)0] [(short)0]);
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) (unsigned short)65526))))))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_3]))) + (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])) ? (var_8) : (((/* implicit */long long int) (-2147483647 - 1)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_3 - 1] [i_2 - 1]))))) : (((((((/* implicit */_Bool) (unsigned char)248)) ? (arr_0 [5]) : (((/* implicit */long long int) arr_9 [i_0])))) % (((/* implicit */long long int) ((unsigned int) var_7)))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((var_2), (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])), ((+(1362775378)))))))))));
                var_15 = ((/* implicit */signed char) 1233593543);
                var_16 = ((/* implicit */int) ((unsigned int) arr_0 [i_0]));
            }
        } 
    } 
    var_17 = (((((~(((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned char)126)))))) + (2147483647))) << (((229376U) - (229376U))));
}
