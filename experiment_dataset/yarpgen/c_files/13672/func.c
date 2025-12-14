/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13672
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)11))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1])) : (var_7)))), (((long long int) (unsigned char)223)))))))));
                var_15 = ((/* implicit */signed char) max((((/* implicit */int) var_2)), (((((((/* implicit */int) (unsigned char)223)) != (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1])))) : ((-(((/* implicit */int) var_6))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) / (var_5)))) ? (((/* implicit */long long int) arr_5 [i_3] [i_1] [i_2] [i_3])) : ((-(var_11)))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (min((arr_3 [i_0] [i_2] [i_3]), (((/* implicit */unsigned long long int) var_2))))))));
                            var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) - (var_1)))) ? (((/* implicit */long long int) (-(arr_10 [i_1] [(unsigned char)0] [i_3] [i_3] [i_0])))) : ((~(var_5)))))) ? (arr_11 [i_0]) : (arr_3 [i_0] [i_1] [i_2])));
                            arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(var_4)))), (min((((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_0] [i_0])), ((+(23ULL)))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) arr_1 [i_0] [i_1])), (((((/* implicit */_Bool) arr_1 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_1 [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) ((((/* implicit */int) ((short) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))) / ((+(((/* implicit */int) arr_1 [i_0 - 1] [i_1]))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) var_4))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 4; i_4 < 23; i_4 += 3) 
    {
        for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            {
                var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_12)) >> (((var_5) - (1528661695023717821LL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4])) & (((/* implicit */int) arr_15 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) var_7)) ? (3149241811299704199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))))) : (((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) var_9))))) - (((((/* implicit */unsigned long long int) var_11)) / (10026689050717303586ULL)))))));
                var_20 = ((/* implicit */unsigned long long int) (+(((int) arr_15 [i_5] [i_5]))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (11513465647763471651ULL))))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_4] [i_4]), (((/* implicit */unsigned char) var_0))))) ? ((-(var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_5] [i_7]))))))))) ? (min((arr_23 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5 - 2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (4398046380032LL))))));
                            var_23 = ((/* implicit */unsigned char) (signed char)120);
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43152))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) var_2)))))));
}
