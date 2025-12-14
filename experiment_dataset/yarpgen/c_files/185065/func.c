/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185065
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
    var_11 = ((/* implicit */long long int) max((min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_6)), (var_1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) min((arr_2 [i_0 + 1] [i_0 + 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_1]))))))));
                            arr_11 [i_0] [i_0] [(unsigned char)9] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */signed char) (_Bool)1)))))))) | ((-(((/* implicit */int) var_8))))));
                            arr_12 [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                arr_14 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1661917631U)) ? (((/* implicit */unsigned long long int) -283440250)) : (9669157587771413087ULL))) >= (((arr_4 [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 743481891)) * (arr_6 [i_1] [i_1] [i_0]))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((int) -283440241));
    var_13 = ((/* implicit */unsigned long long int) var_2);
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1799100905)))))));
}
