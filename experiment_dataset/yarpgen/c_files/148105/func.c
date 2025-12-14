/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148105
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((max((var_0), (((/* implicit */unsigned int) (signed char)-26)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)250), (((/* implicit */unsigned char) (_Bool)1)))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) max((arr_0 [i_0] [i_0]), (var_1)))))))));
        var_11 = ((/* implicit */_Bool) (+((+(arr_1 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) arr_4 [i_1])))) ^ (((/* implicit */int) ((short) arr_4 [i_1]))))), (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1] [i_2] [i_3 - 1] [i_3 - 1]))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (arr_10 [i_1])))))));
                    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (var_9)))) || (((/* implicit */_Bool) min((var_7), (((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_3] [14U])) || (arr_9 [i_2] [i_2] [i_3 - 1] [i_3 - 1]))))));
                    var_15 = ((/* implicit */int) arr_4 [i_3 - 1]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */short) (unsigned char)1)), ((short)-18581))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((var_0), (((/* implicit */unsigned int) var_7)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_16 [i_4] [i_5] [i_6]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_4] [i_6])))) ^ (((arr_11 [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_7]))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_5] [i_6]))) : (var_0))), (((/* implicit */unsigned int) ((signed char) var_6)))))))))));
                    }
                } 
            } 
        } 
        var_19 &= ((/* implicit */unsigned int) var_5);
        var_20 ^= ((/* implicit */short) arr_18 [i_4] [i_4] [i_4] [i_4]);
    }
    var_21 = ((/* implicit */short) var_9);
}
