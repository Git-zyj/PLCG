/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173329
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_10)), (var_0)))))) ? (((/* implicit */unsigned long long int) (+(var_9)))) : (((((/* implicit */_Bool) min(((short)25209), (var_7)))) ? (((/* implicit */unsigned long long int) ((19U) | (4279233312U)))) : (var_12))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((unsigned long long int) var_7)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) <= (((((/* implicit */_Bool) arr_0 [i_1])) ? (min((var_3), (((/* implicit */int) (short)-25210)))) : (((/* implicit */int) (unsigned short)0))))));
                    var_16 -= ((/* implicit */unsigned long long int) (-((-(arr_4 [(unsigned char)4] [i_0] [i_2])))));
                    arr_7 [8LL] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) var_11);
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0] [i_2])), (min((((/* implicit */unsigned int) var_7)), (var_0)))))) ? (17056063449314790452ULL) : (((/* implicit */unsigned long long int) ((((var_3) != (var_4))) ? (((((/* implicit */_Bool) 2297514930U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((unsigned int) (unsigned short)12283))))), (((unsigned long long int) var_6)))))));
    var_19 = ((/* implicit */unsigned int) ((var_4) ^ (max((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_10))))), ((-(((/* implicit */int) var_8))))))));
}
