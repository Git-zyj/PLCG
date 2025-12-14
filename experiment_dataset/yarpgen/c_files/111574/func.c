/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111574
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
    var_13 = ((/* implicit */int) var_3);
    var_14 = var_6;
    var_15 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (short)-14456))) ^ (var_7)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_3 [i_1 + 4] [i_0])))) ? (((((/* implicit */long long int) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) arr_6 [i_1] [i_1]))))) % (arr_4 [i_0] [i_1 - 2]))) : (((/* implicit */long long int) (~((-(((/* implicit */int) var_1)))))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) var_8);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_15 [1U] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) min((((unsigned int) arr_3 [i_0] [i_0])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)35))))))));
                            var_16 = ((((/* implicit */int) arr_2 [i_0] [i_2])) % ((~(((/* implicit */int) (signed char)-11)))));
                            var_17 = ((/* implicit */unsigned long long int) ((min((((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(signed char)10] [i_1] [0ULL] [i_1]))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) 4294967295U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((arr_11 [(short)13] [10ULL] [i_2] [i_3]), (((/* implicit */unsigned short) var_9))))))) : (((var_8) % (((long long int) var_1))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(25U)));
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])) ? (7956250924895603362ULL) : (13407252015214180210ULL))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_1)))))), (((/* implicit */int) var_6))));
}
