/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142124
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)234)) >= (((/* implicit */int) min((min((((/* implicit */signed char) var_11)), ((signed char)-20))), (max(((signed char)57), (((/* implicit */signed char) (_Bool)1)))))))));
                            var_14 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_1 [i_0])) ? (13532398479776962950ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), (arr_0 [i_0])))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 19; i_5 += 3) 
                    {
                        for (signed char i_6 = 3; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_16 ^= min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((6339155430998798662ULL) | (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) var_3)));
                                var_17 += ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_4] [i_5 - 4] [i_5 - 3] [i_6 + 1])), (((((/* implicit */_Bool) (unsigned short)2124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (12107588642710752953ULL)))))));
                                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_6] [i_5] [i_4])) - (37)))))) ? (max((arr_13 [i_0] [i_1] [i_4] [i_5 - 1] [i_6 - 2]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (max((((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1] [i_4]), (((/* implicit */int) (signed char)44))))), (6339155430998798662ULL))) : (((/* implicit */unsigned long long int) (~(var_7)))));
                                arr_15 [i_0] [i_1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) (signed char)-54);
                            }
                        } 
                    } 
                    var_19 = 18446744073709551615ULL;
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_20 += ((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) (signed char)17))))) ? (max((26ULL), (((/* implicit */unsigned long long int) 0LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)255), ((unsigned char)131))))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((max((((/* implicit */unsigned long long int) arr_0 [i_7 + 1])), (9072873994281121402ULL))), (((/* implicit */unsigned long long int) ((1653186281) % (((/* implicit */int) var_12))))))))));
                                var_22 = ((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((var_12), (((/* implicit */short) arr_4 [i_1] [i_8] [i_4] [i_7 + 2])))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (17742971481099376465ULL)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_7);
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)33)), (-264793664358976025LL))))));
}
