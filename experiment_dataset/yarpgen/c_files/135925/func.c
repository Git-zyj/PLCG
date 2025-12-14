/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135925
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_8)))))));
    var_11 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [(signed char)16]))));
                arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_1 [i_1 + 2])) || (((/* implicit */_Bool) arr_1 [i_1 - 2]))))));
                var_13 = var_1;
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_8))));
                            var_15 &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) ((unsigned char) (unsigned short)8445)))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                var_16 -= ((/* implicit */unsigned int) ((arr_0 [(unsigned char)13] [i_1 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                                arr_17 [i_0] [i_0] [i_2] [i_0 + 1] [i_0] [16ULL] [16ULL] = ((/* implicit */unsigned short) ((short) arr_10 [i_0]));
                            }
                            for (unsigned char i_5 = 3; i_5 < 22; i_5 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((var_7), (((/* implicit */int) ((short) var_7))))))));
                                var_18 = ((/* implicit */short) (((((~(((/* implicit */int) arr_6 [i_0])))) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))) * ((~((-(((/* implicit */int) arr_16 [i_2] [i_2] [i_2]))))))));
                                var_19 = ((/* implicit */_Bool) arr_0 [i_0 + 1] [16U]);
                            }
                            arr_21 [i_0] [i_2] = ((/* implicit */unsigned char) arr_14 [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_20 = ((/* implicit */signed char) arr_19 [i_0] [i_2] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [8ULL]);
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-119))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5))));
            }
        } 
    } 
}
