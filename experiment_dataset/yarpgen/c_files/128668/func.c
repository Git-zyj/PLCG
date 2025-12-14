/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128668
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((var_1) | (((/* implicit */long long int) max((((((/* implicit */int) (short)-2047)) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-28)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((signed char) -2147483646))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (2269659217U)))))), (max((var_0), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) < (11026328002476139699ULL))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((signed char) (short)-1))) : (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (_Bool)0)), (2269659217U)))))));
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [0U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)21818)))))));
                            var_22 -= ((/* implicit */long long int) (-(319840457U)));
                            var_23 = ((/* implicit */unsigned char) ((int) 11026328002476139701ULL));
                        }
                    } 
                } 
                var_24 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]))) : (((/* implicit */int) max((((/* implicit */short) arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])), ((short)-22781)))));
                /* LoopNest 3 */
                for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_4] [i_5] [i_5] = ((long long int) min((((/* implicit */short) var_14)), (arr_3 [i_6])));
                                var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) -522075527))) ? (-2147483624) : (((((/* implicit */_Bool) (short)956)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (unsigned short)11493))))))) / (2304717109306851328LL)));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_4))))))));
                                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_17 [i_6 + 2] [i_6 + 2] [i_4] [i_6 + 2] [i_6 - 1] [i_6] [i_6]), (((/* implicit */unsigned int) var_15))))) || (((/* implicit */_Bool) ((short) arr_17 [i_0] [i_0] [i_1] [i_6 + 2] [i_6] [12U] [i_6]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_17);
    var_29 = ((/* implicit */long long int) ((((((int) -1308214946)) != (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_9))))))) ? (max((((/* implicit */int) ((unsigned char) var_10))), (((-983801200) | (((/* implicit */int) var_18)))))) : (((/* implicit */int) ((var_6) > (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_13)) - (176))))))))));
}
