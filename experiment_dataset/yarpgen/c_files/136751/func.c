/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136751
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
    var_19 = ((/* implicit */_Bool) var_14);
    var_20 = ((/* implicit */unsigned int) ((((((_Bool) var_9)) || (((/* implicit */_Bool) ((unsigned int) var_18))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((var_14) ^ (((/* implicit */long long int) -2101378908)))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)127)))) >= (((unsigned int) (_Bool)1)))))));
    var_21 = ((/* implicit */short) (~(((/* implicit */int) var_18))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((signed char) (unsigned short)47969))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0] [i_0]), ((_Bool)1))))) : (((unsigned int) arr_4 [(_Bool)1]))))));
            var_24 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = max((var_0), (((/* implicit */signed char) ((_Bool) 4611686018427379712LL))));
                        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_3]))) ? (((long long int) arr_5 [i_0] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)107))))));
                        arr_13 [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max((var_17), (((/* implicit */unsigned long long int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                        var_25 = ((/* implicit */int) max((((/* implicit */unsigned int) ((signed char) arr_10 [i_0] [i_3]))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)29860))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_2])))) : (arr_1 [i_1])))));
                        var_26 = ((/* implicit */long long int) min((var_26), (-4611686018427379713LL)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_4])) ? (-4611686018427379727LL) : (arr_6 [i_1] [(unsigned char)2] [(unsigned short)16] [i_0]))), (((/* implicit */long long int) max((arr_15 [i_0] [i_1] [i_0]), (((/* implicit */unsigned char) var_8)))))));
                var_28 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1972697037U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4611686018427379699LL)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_0)))) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)65533)))), ((_Bool)1)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-32757)) ^ (((/* implicit */int) (unsigned short)65535)))))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    arr_19 [i_4] [i_1] [i_4] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [i_5 + 1] [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 2]))) : (4294967293U)))));
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_4])), (arr_9 [i_0] [i_5 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_5 - 1])) + (((/* implicit */int) (short)-32740))))) : (((((/* implicit */_Bool) -581431393439999863LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_1] [(_Bool)0]))))))))));
                    arr_21 [i_0] [i_0] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5]))))), (min((-479037164), (((/* implicit */int) (_Bool)1))))));
                }
            }
        }
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) min(((-(((/* implicit */int) var_0)))), (-15))));
        arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_0] [(unsigned char)8] [i_0]))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((var_5), (((/* implicit */int) var_0)))) : (arr_9 [i_0] [i_0])))));
    }
}
