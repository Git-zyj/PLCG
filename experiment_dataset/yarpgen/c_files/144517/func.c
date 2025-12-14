/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144517
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
    var_19 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_7)), (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */int) var_1)), (var_15))) == (((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) var_17)) - (17789)))))))))));
    var_20 &= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (var_13)))) << (((((/* implicit */int) var_1)) - (160)))))) > (((((-2173679210576647154LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)1695)) - (1695)))))));
    var_21 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_5)), (var_13))) * (((((/* implicit */long long int) ((/* implicit */int) var_18))) / (var_13)))));
                var_23 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (467883429)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (1784375008535630311ULL))) || (((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned char) var_14)))))))) << (((((var_6) * (var_6))) / (((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */int) var_3)))))))));
                            arr_12 [i_0 + 1] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_5)) << (((((/* implicit */int) var_3)) - (28742))))) + (((/* implicit */int) var_3)))) >= (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1))))));
                            var_25 ^= ((/* implicit */long long int) var_6);
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                var_26 = ((/* implicit */signed char) ((((var_6) >> (((/* implicit */int) ((((/* implicit */int) var_0)) != (var_15)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                                arr_16 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_7))));
                                arr_17 [0ULL] [i_1] [i_2] [i_1] [i_3] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (16662369065173921305ULL)));
                            }
                            /* LoopSeq 2 */
                            for (long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                            {
                                arr_21 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_5)), (max((((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_13))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_14)), (var_17))))))));
                                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_5)) - (61007)))))))) & (((((var_6) << (((((/* implicit */int) var_1)) - (107))))) / (((/* implicit */unsigned long long int) var_13)))))))));
                                var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_17))))) && (((/* implicit */_Bool) ((var_15) & (((/* implicit */int) var_4)))))))), (((((/* implicit */unsigned long long int) 5135988136296177562LL)) * (1784375008535630311ULL)))));
                                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_9)))) > (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_14)))))))), (((((/* implicit */int) var_14)) / (var_15))))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 14; i_6 += 4) 
                            {
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) / (var_13)));
                                arr_24 [i_2] [i_2] [i_3] [i_6] = ((/* implicit */unsigned long long int) var_5);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
