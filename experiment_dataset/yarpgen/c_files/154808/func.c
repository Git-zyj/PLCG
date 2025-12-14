/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154808
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
    var_12 = ((/* implicit */long long int) var_5);
    var_13 = ((/* implicit */long long int) (+((+(max((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_8)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_1]))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_9)))) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))) : (max((arr_1 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2])) | (((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) ((signed char) arr_7 [i_0] [i_0] [(unsigned char)3] [i_0])))))) % (((/* implicit */int) ((unsigned short) (signed char)74)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_3] [i_0] [i_0] = ((/* implicit */long long int) (+(((arr_12 [i_0] [i_3 + 1] [i_3 + 1] [i_3 - 1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_3 - 1] [i_0]))))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3 + 1] [i_3 + 1])) || ((_Bool)1))))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((arr_3 [i_0]) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)6718))))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (~(1615654656))))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (var_5))) + (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_2]) : (arr_1 [i_2])))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) + (131820819183128964ULL)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_0] [i_0] [i_0] = (+(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) max(((unsigned short)26542), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
}
