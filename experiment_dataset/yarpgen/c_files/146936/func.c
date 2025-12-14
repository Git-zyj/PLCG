/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146936
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
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)238)), (var_5)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_5))))))), (var_10)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 *= max((((/* implicit */unsigned long long int) var_4)), (var_7));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */_Bool) 117153810U);
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (short)-21873))))), (max((((/* implicit */long long int) (unsigned short)22844)), (7936792690623780704LL)))))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_4 [i_0]))))))) : ((+(min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (var_8)))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22871)) && (((/* implicit */_Bool) arr_10 [17LL] [i_1] [i_2]))))) * (((/* implicit */int) var_6))));
                        var_16 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)113))));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)42691))))))), (arr_4 [7LL]))))));
                        var_18 = ((/* implicit */unsigned int) arr_6 [i_0]);
                    }
                    var_19 += ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_4 [i_0])))), ((~(((/* implicit */int) (signed char)69))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */signed char) ((((/* implicit */int) (short)-16750)) <= (((((/* implicit */int) arr_10 [i_0] [i_5 - 1] [i_6 - 2])) % (((/* implicit */int) arr_10 [i_0] [i_5 + 1] [i_6 + 1]))))));
                                var_21 += var_7;
                                var_22 = ((/* implicit */unsigned short) var_2);
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (signed char)79)))) + (2147483647))) >> (((((/* implicit */int) min((arr_4 [i_5]), (((/* implicit */short) var_0))))) - (120)))))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) 10560738555584162668ULL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) min((arr_15 [i_6 + 1] [i_5] [i_1]), ((unsigned short)42694)))))))))));
                                var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) 413508930U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((var_8), (var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (var_2)))), (((((/* implicit */_Bool) var_5)) ? (((var_8) * (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
}
