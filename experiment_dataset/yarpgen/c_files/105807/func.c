/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105807
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) (~(var_6)));
                            var_20 -= ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) var_13)), (2424114772963040077LL))));
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((unsigned int) max((arr_7 [i_3 + 1] [i_3 + 1] [i_3] [i_3]), (((/* implicit */unsigned char) arr_5 [i_0] [i_1] [16ULL] [i_3])))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) arr_8 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [16U]);
                            var_21 &= ((/* implicit */unsigned int) (((~(((/* implicit */int) min((arr_6 [i_0] [i_1] [i_3]), (((/* implicit */short) var_14))))))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_0])))) : (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1]))) & (var_9))))) - (217LL)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */int) max(((unsigned short)13226), (arr_11 [i_0] [i_0] [i_1] [i_0])))) << (((((var_17) + (2029362770))) - (22)))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((arr_1 [i_0]) << (((max((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])), (var_2))) - (894571426363948955LL))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) / (((/* implicit */int) (unsigned short)41454)))))))) - (1))))))));
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (((1186932734) / (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0] [i_1])))))) / ((-(((var_18) ^ (((/* implicit */long long int) ((/* implicit */int) var_14))))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (+(var_16))))));
}
