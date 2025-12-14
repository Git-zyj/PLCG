/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137797
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
    var_11 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (short)10988)) - (10970)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((1880660337U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (var_8))), (((/* implicit */long long int) max((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (short)32592))))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_8 [i_2] [(short)7] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */short) (((-(arr_5 [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            /* LoopSeq 4 */
                            for (short i_4 = 3; i_4 < 16; i_4 += 1) 
                            {
                                arr_11 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_2] [i_3] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))))))));
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_4 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) var_7)) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1151))))))) : ((-(var_3))))))));
                                var_13 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_7 [i_1] [i_1] [i_1])))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                            {
                                var_14 = var_1;
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) (short)16606)))))));
                                arr_15 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_1]))));
                                var_16 = ((/* implicit */_Bool) (+((+((+(((/* implicit */int) (_Bool)1))))))));
                            }
                            for (unsigned short i_6 = 1; i_6 < 16; i_6 += 4) /* same iter space */
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6 + 1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) arr_12 [i_6 + 1] [i_3] [i_0] [i_0] [i_0]))))), ((+(((((/* implicit */long long int) var_9)) / (4910165764802600947LL)))))));
                                arr_19 [i_6] [i_1] [i_1] [(short)12] = ((/* implicit */short) (_Bool)1);
                                arr_20 [i_6 + 1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40133)))))));
                                arr_21 [i_1] [7LL] [i_2] [7LL] [i_6] [i_2] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            }
                            for (unsigned short i_7 = 1; i_7 < 16; i_7 += 4) /* same iter space */
                            {
                                arr_24 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((long long int) arr_14 [i_0] [i_1] [i_1] [(short)5] [i_0])) > (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_0)))))))) >> (((/* implicit */int) ((short) ((signed char) (_Bool)1))))));
                                var_17 = ((/* implicit */unsigned long long int) var_4);
                            }
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) var_0);
                var_19 = var_1;
            }
        } 
    } 
}
