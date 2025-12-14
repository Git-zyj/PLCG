/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13160
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-((+(arr_6 [i_1] [i_1])))))), ((-(max((((/* implicit */unsigned long long int) var_11)), (var_7)))))));
                            arr_9 [i_1] [i_2] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((max((arr_0 [i_0]), (arr_7 [i_0 - 1] [i_1] [i_1] [i_2] [i_1]))) >> (((arr_0 [i_0]) + (692790011)))))) : (((/* implicit */short) ((max((arr_0 [i_0]), (arr_7 [i_0 - 1] [i_1] [i_1] [i_2] [i_1]))) >> (((((arr_0 [i_0]) + (692790011))) - (862748567))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((min((arr_8 [(unsigned char)16] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) var_4)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18956)) ? (var_10) : (((/* implicit */unsigned int) var_13))))))), (max((min((var_9), (((/* implicit */long long int) arr_5 [i_0] [(unsigned short)6] [i_0])))), (var_9))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) arr_1 [i_1] [i_4 + 1]);
                    var_18 = ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_0]);
                    var_19 = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) <= (arr_6 [i_0 - 1] [i_0 - 1])))));
                }
                for (unsigned int i_5 = 4; i_5 < 17; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)18931))));
                    var_21 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 + 2] [i_0 + 2] [i_5 - 2] [i_5])), (var_6)))));
                }
                /* vectorizable */
                for (short i_6 = 4; i_6 < 19; i_6 += 2) 
                {
                    arr_16 [i_1] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) var_2)) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0])) : (-3640549871621703212LL)))));
                    var_22 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0] [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? ((~(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                                arr_22 [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_8 + 1]);
                                var_24 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_0] [i_8])) && (((/* implicit */_Bool) arr_0 [i_1])))) ? (((((/* implicit */_Bool) arr_10 [i_6] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56460))) : (2996551173U))) : (((/* implicit */unsigned int) arr_10 [i_1] [i_1]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    arr_27 [i_0] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_10 [i_0] [i_10])) : (arr_15 [i_0 + 2] [i_0] [i_9 - 1] [i_9]))))));
                        var_26 += ((/* implicit */unsigned short) var_1);
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_9))));
                        arr_30 [i_0] = ((((/* implicit */_Bool) 2384531212659881791LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : (-7659253622739510541LL));
                    }
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)46575)))))));
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (var_12))))) : (((arr_18 [i_9] [i_9 - 1] [i_9] [i_1] [i_9] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2561979817648385209LL))))))));
                    var_30 = ((/* implicit */unsigned short) var_10);
                }
                arr_31 [i_1] [i_1] |= arr_7 [i_0] [i_0] [i_0] [i_1] [i_0];
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (short)13386)))))) ? (((/* implicit */long long int) var_13)) : (min((8987554778847671031LL), (((/* implicit */long long int) var_13))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) -5279183006189998778LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))))));
    var_32 = ((/* implicit */unsigned short) var_1);
}
