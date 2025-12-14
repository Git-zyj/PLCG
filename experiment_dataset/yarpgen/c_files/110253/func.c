/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110253
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
    var_20 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_19))))), (max((((/* implicit */unsigned long long int) var_0)), (var_12))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) < (((/* implicit */int) var_8)))) ? ((-(var_15))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            var_22 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [(unsigned char)7] [(short)5] [(_Bool)1] [(short)3]))))), (min((arr_0 [i_2] [i_1]), (arr_5 [i_2] [i_2])))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_3 [i_0] [i_1])), (arr_7 [(unsigned char)9] [i_1]))))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))))));
                arr_10 [i_1] [(_Bool)1] [3ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((min((var_12), (((/* implicit */unsigned long long int) arr_8 [(short)2] [i_1] [(short)2] [(short)2] [i_1] [i_0])))) != (var_16)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_3 [(unsigned char)8] [i_1]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            {
                arr_16 [(_Bool)1] = ((/* implicit */signed char) (+(((long long int) (short)32749))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) ((var_12) << (((((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) - (20843)))))))), ((!(((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_20 [i_4] [19LL] [(short)7] [(short)7] [i_8]))))))));
                                arr_24 [(short)12] [(short)12] = ((/* implicit */long long int) ((var_12) >> (min((min((2147483647), (((/* implicit */int) arr_14 [i_6] [i_7] [i_8])))), (((/* implicit */int) ((signed char) arr_15 [i_4] [(unsigned char)6])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
