/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111302
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((_Bool) arr_5 [i_0] [i_1] [i_1]))));
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) & ((~(4294967295U))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((((/* implicit */unsigned long long int) (+(2953623818U)))) | (max((2147481600ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)31217))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0])))))));
                                arr_15 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) 1734601105)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_4 + 2] [i_4] [i_4])))) + (((/* implicit */int) var_12))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-27))))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((-884595334627828385LL) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (signed char)-27);
}
