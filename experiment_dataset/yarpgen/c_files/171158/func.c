/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171158
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
    var_11 *= ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (var_2) : (var_0))) | (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_10)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ ((~(var_2)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned short)7532)))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (max((var_1), (((/* implicit */unsigned int) var_3)))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) + (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)102)))))))));
                                arr_12 [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)-109))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] [i_5] = ((/* implicit */_Bool) var_3);
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_2))));
                                var_17 += ((/* implicit */unsigned long long int) var_4);
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_3] [20U] = ((/* implicit */short) ((max((var_0), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_0] [i_2] [i_3] [i_5])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43)))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2]))));
                                var_19 = ((/* implicit */_Bool) ((short) (-((~(((/* implicit */int) var_9)))))));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((unsigned long long int) max(((unsigned char)212), (((/* implicit */unsigned char) (signed char)-40)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((max((var_4), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (!((_Bool)1))))))) ^ (((/* implicit */int) max(((!(((/* implicit */_Bool) var_10)))), (((_Bool) (unsigned char)131)))))));
    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (var_1)))))) % (((long long int) (~(var_2))))));
}
