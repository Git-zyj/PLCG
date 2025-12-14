/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183950
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((unsigned int) ((((/* implicit */_Bool) -7499952665392094196LL)) ? (3ULL) : (((/* implicit */unsigned long long int) -7704659373332270406LL))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) >= (2996678181023397610LL))))))))));
                    var_14 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)78)) ? (min((((long long int) 2917695161U)), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65528))))))) : (((/* implicit */long long int) var_12))));
                    var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3467053751U))))) : (((((/* implicit */int) var_1)) / (21451326))))), (((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) 2996678181023397597LL)))))));
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_4 [i_0] [i_1] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((1377272135U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57)))))))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)11467)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) -8356112490541467015LL)))) && (((/* implicit */_Bool) (~(1377272140U)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (0ULL) : (((/* implicit */unsigned long long int) var_3))));
}
