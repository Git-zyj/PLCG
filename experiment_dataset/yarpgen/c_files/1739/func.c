/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1739
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (3386052839U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) var_17))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (unsigned char)240)))))))) : (var_18)));
    var_21 = ((/* implicit */unsigned short) ((unsigned char) var_14));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), ((~(((arr_0 [i_0 - 1] [i_0]) ? (arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [2U]), (((/* implicit */short) (signed char)-103))))))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_10 [i_0 - 1] [i_0] [i_2] = var_17;
                    var_23 ^= ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 281474439839744ULL)) ? (((/* implicit */int) (short)-32739)) : (((/* implicit */int) var_11))))), (min((arr_8 [i_0] [i_1 + 1] [i_2] [i_2]), (((/* implicit */unsigned long long int) (short)14249))))))));
                    var_24 = ((/* implicit */short) var_0);
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_3))));
                }
                for (int i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    var_26 *= (short)-32739;
                    arr_13 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) (((-(var_15))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13)))))))) <= (min((((/* implicit */int) ((signed char) var_17))), ((-(((/* implicit */int) var_9))))))));
                }
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_8))));
                var_28 = min(((short)32739), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32754))) == ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_18)))))));
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] = ((/* implicit */unsigned long long int) (signed char)69);
                            var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)29501)), (((((/* implicit */int) (short)26140)) / (((/* implicit */int) (signed char)111))))))), (min((((/* implicit */unsigned long long int) var_13)), (18446462599269711881ULL)))));
                            var_30 = ((/* implicit */long long int) max((var_7), (((/* implicit */unsigned short) ((_Bool) arr_2 [i_0] [i_1 - 1])))));
                            var_31 = ((/* implicit */short) min(((-(max((((/* implicit */int) (short)-25192)), (arr_16 [i_0] [i_1 - 1] [i_0] [i_4] [i_0]))))), (((((/* implicit */_Bool) ((unsigned char) (unsigned short)62662))) ? (((/* implicit */int) min(((unsigned short)41185), (((/* implicit */unsigned short) arr_1 [i_0]))))) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12)))))) | (((/* implicit */int) (unsigned short)59744))));
}
