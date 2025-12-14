/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102788
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((9223372036854775806LL), (((/* implicit */long long int) 4294967295U)))))))) << (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5836149045584534843ULL)) || (((/* implicit */_Bool) var_3))))), (min((1U), (((/* implicit */unsigned int) var_10))))))));
    var_16 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [(_Bool)1] [i_3 - 1] [i_3 - 1] [i_3] [i_2] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_8)), (var_11))) << (((((max((var_11), (((/* implicit */unsigned long long int) var_14)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))) - (16777428625093716164ULL)))));
                                arr_14 [i_3] [(short)10] [i_1] [(signed char)2] = ((/* implicit */unsigned long long int) (((+((+(((/* implicit */int) var_12)))))) ^ ((~(((/* implicit */int) (short)16416))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                            {
                                arr_25 [i_1] [i_7] = ((/* implicit */_Bool) (unsigned char)204);
                                arr_26 [(unsigned short)6] [i_6] [i_1] [i_5] [(unsigned char)4] [(unsigned short)6] [i_7 + 1] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)19225))) % (var_7)));
                                var_17 = var_3;
                            }
                            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)5633)), ((+(13U)))))), (-7387637579305778094LL)))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (_Bool)1))));
                                var_20 = ((/* implicit */unsigned short) 1297791607728146304LL);
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                arr_31 [i_9] = ((/* implicit */signed char) var_0);
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) >= (((/* implicit */int) ((((/* implicit */int) var_6)) >= ((+(((/* implicit */int) (unsigned short)60116))))))))))));
                                var_22 = ((/* implicit */unsigned int) (((-(var_5))) <= (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-5617))))) << (((max((var_11), (((/* implicit */unsigned long long int) var_2)))) - (16777428625093716175ULL))))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5419))) % (var_9)))))));
                            }
                            for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 4) 
                            {
                                var_24 ^= ((/* implicit */unsigned short) (-((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)160)) <= (((/* implicit */int) (_Bool)0)))))))));
                                var_25 ^= ((/* implicit */unsigned char) var_12);
                            }
                            /* LoopSeq 1 */
                            for (short i_11 = 1; i_11 < 23; i_11 += 3) 
                            {
                                var_26 = ((/* implicit */unsigned long long int) max(((~(min((((/* implicit */long long int) var_6)), (var_3))))), (((((/* implicit */long long int) (-(314505487U)))) ^ (var_14)))));
                                arr_37 [i_1] [i_1] [i_6] [i_6] [i_11] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (!((_Bool)1))))));
                                arr_38 [i_0] [i_1] [i_5] [i_6] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(var_8))))))) == ((~(var_7)))));
                                var_27 = ((/* implicit */_Bool) (~((~(((((/* implicit */int) var_1)) << (((((/* implicit */int) var_12)) - (16095)))))))));
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) -1297791607728146304LL))));
                            }
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) var_10);
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((15297400677001005252ULL), (((/* implicit */unsigned long long int) (unsigned short)238)))))))) <= ((+(((((/* implicit */int) (unsigned short)28015)) << (((((/* implicit */int) var_0)) - (31)))))))));
}
