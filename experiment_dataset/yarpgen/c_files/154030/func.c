/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154030
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 3817665710U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2999884615U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2876515258U)))) ? (max((4294967295U), (3213431872U))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4))) : (1418452052U))))) : (2688762170U)));
                    var_17 = ((/* implicit */short) max((3213431872U), (1418452038U)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_3] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_3] [i_3 + 2] [i_3] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-31883)))))) : (max((((/* implicit */unsigned int) (short)-32532)), (arr_6 [i_1] [i_3 + 4] [i_3 + 2] [i_1]))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (max((57344U), ((-(min((var_12), (arr_4 [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            var_19 = min(((-(min((2700515424U), (4077664104U))))), (((/* implicit */unsigned int) var_11)));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_10 [i_6] [i_6] [i_6] [i_5]))));
        }
        var_21 = ((((/* implicit */_Bool) (unsigned short)62159)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32532))) : (1418452037U));
        var_22 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_5] [i_5])), (var_14))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 536739840U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5])))))));
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 11; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) var_1);
                    var_24 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_17 [i_8] [i_7] [(unsigned short)3])), (((((/* implicit */_Bool) var_0)) ? (var_7) : (57344U)))))) ? (min((var_14), ((-(2876515259U))))) : (max((((((/* implicit */_Bool) (short)7168)) ? (arr_0 [i_8] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7 + 2] [i_5]))))), (((/* implicit */unsigned int) ((short) 2876515236U))))));
                    var_25 &= ((/* implicit */unsigned int) ((3655769235U) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(2318821090U))))))))));
                    arr_24 [i_7] [i_7 - 1] [i_7] = ((((/* implicit */_Bool) (+(2319004087U)))) ? (((((/* implicit */_Bool) 3647663482U)) ? (3576904120U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12124))))) : (min((4020294722U), (((/* implicit */unsigned int) arr_22 [i_7] [i_7])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_5] [i_7] [i_7])) ? (((/* implicit */int) arr_18 [7U])) : (((/* implicit */int) var_1))))) ^ (max((1081535423U), (3618689570U)))))) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) + (max((0U), (3678735563U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7])))));
                        var_27 -= var_6;
                        arr_27 [i_9] [i_7] [i_7] [(unsigned short)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3007616300U), (((/* implicit */unsigned int) (short)9758))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)384))))))) <= (1032898910U)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)-20997), ((short)-31353))))) > (min((((/* implicit */unsigned int) var_11)), (2591108412U))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 3; i_10 < 10; i_10 += 2) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [11U] [i_7 + 1] [i_7])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-24490)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)43))))) : ((-(arr_2 [i_7])))));
                        var_29 = ((/* implicit */short) 1032898904U);
                        var_30 = ((/* implicit */unsigned short) (short)1436);
                        var_31 = ((/* implicit */unsigned int) (unsigned short)18230);
                    }
                }
            } 
        } 
    }
    var_32 &= max((((((/* implicit */_Bool) min((2304989648U), (1578895437U)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10047))) : (1594451871U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))), (max((((((/* implicit */_Bool) 3262068398U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13052))) : (3576904120U))), (min((644173795U), (3650793506U))))));
}
