/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13822
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_2)), (min((((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 ^= ((/* implicit */int) (unsigned char)239);
                                var_13 = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) min(((short)10570), (((/* implicit */short) (unsigned char)155))))) : (((/* implicit */int) ((unsigned char) arr_9 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1]))))), (min((0), (((/* implicit */int) (unsigned char)0))))));
                                var_14 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)17758)) ? (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1 + 1] [2LL] [(short)2]) : (((/* implicit */int) (short)-25588)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (arr_3 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_1 - 1])) ? (arr_8 [i_4] [i_0] [(_Bool)1] [i_0] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_1 - 1]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((((arr_8 [i_2] [i_0] [i_1] [i_0] [(unsigned char)6]) | (((((/* implicit */_Bool) -9164784651043080157LL)) ? (-8848975445765046644LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_0] [i_2] [i_2] [i_0])))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) 12210389851799873006ULL))));
                    var_17 = ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) (short)9102)) ? (-9164784651043080157LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-512)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))))));
                    var_18 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)251)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)11108)))) : (1222426629)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (long long int i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            {
                var_19 -= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (short)-24477)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned char)247)))));
                arr_16 [23] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) min((arr_14 [i_6 + 2] [i_6 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (2044129735518630494LL)))))));
                var_20 -= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */short) var_2))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_1);
}
