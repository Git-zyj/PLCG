/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164516
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
    var_10 = 2482159906U;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1233144151)) ^ (18446744073709551615ULL)))))))));
                            var_12 = ((/* implicit */unsigned int) (unsigned char)228);
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (((unsigned int) arr_7 [i_3] [i_2 + 2] [i_1] [i_0] [i_0])) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (arr_6 [i_0] [i_2])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_14 = max((((arr_10 [i_1] [0U]) - (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (var_1))))))), (var_9));
                            arr_14 [i_0] [i_0] [i_1] [i_1] [9ULL] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (arr_1 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1])))))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_6 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) -882659698)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967285U))) : (((/* implicit */unsigned int) 2147483647))));
                            arr_15 [i_0] [i_1] [i_1] [i_4] [i_0] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
}
