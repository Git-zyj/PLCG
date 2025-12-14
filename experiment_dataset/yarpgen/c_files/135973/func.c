/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135973
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-27611)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (unsigned char)151))))))));
    var_17 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23372)) != (((/* implicit */int) var_1))))), (((var_8) ? (var_9) : (9630626379981450767ULL))))) == (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (var_5)))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_7 [i_1] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) * ((+(16447846067327700104ULL)))))) ? (((((/* implicit */_Bool) (-(arr_7 [i_0] [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (short)14003)) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])))))) : ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)110)) == (((/* implicit */int) arr_0 [i_1] [i_2])))))))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) (~((~(((/* implicit */int) arr_1 [i_0]))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned char)117)))))) <= (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) (unsigned char)154))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((arr_7 [i_0] [i_0]) < (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])))))))));
                    var_20 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (((var_8) ? (16986661575410262952ULL) : (((/* implicit */unsigned long long int) var_13))))))) && (((/* implicit */_Bool) var_14))));
}
