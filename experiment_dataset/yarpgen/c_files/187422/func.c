/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187422
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_1))))) ? (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (signed char)-8))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_13)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_0)))));
                var_19 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (signed char)8)))));
            }
        }
        arr_7 [i_0] = max((((/* implicit */short) ((var_4) > (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))))), (((short) 34359607296LL)));
    }
    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (signed char)12)))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) min(((-(var_3))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))));
                            arr_19 [i_3] [i_3] [i_5] [i_5] [i_7] [i_4] [i_3] = ((/* implicit */unsigned short) (signed char)11);
                            arr_20 [i_3 - 1] [i_4] [i_3] = ((/* implicit */unsigned int) (+(((((17) - (((/* implicit */int) (unsigned short)65535)))) - (((var_0) ? (((/* implicit */int) var_12)) : (17)))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            arr_24 [i_3] = ((/* implicit */unsigned short) (~(min((var_11), (((/* implicit */long long int) ((var_5) >= (((/* implicit */int) (_Bool)1)))))))));
                            var_22 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_12)))), ((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) ((int) max(((-(var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -29)) ? (((/* implicit */int) var_6)) : (var_3)))))));
                        arr_25 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (unsigned short)65507)))));
                        var_24 = ((/* implicit */signed char) (+(0)));
                    }
                } 
            } 
        } 
        arr_26 [i_3] = ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))) << (((((/* implicit */int) (unsigned short)65513)) - (65503))));
    }
    var_25 += ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_16))));
    var_27 = ((/* implicit */unsigned long long int) var_0);
}
