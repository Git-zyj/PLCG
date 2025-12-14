/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10276
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
    var_14 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((2147483647) % (((/* implicit */int) var_8))))), (((long long int) var_7)))), (min((((/* implicit */long long int) var_7)), (var_5)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)-24)) ? (18158513697557839872ULL) : (10729879878113554954ULL)))));
                    arr_9 [i_0] [(signed char)0] &= (+((+(1456573185))));
                    var_16 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (+(var_9)))) ? (((((/* implicit */_Bool) 4283988672U)) ? (10729879878113554926ULL) : (27ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)14]))))));
                    var_17 = ((/* implicit */unsigned short) arr_4 [(signed char)6]);
                    var_18 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_5 [(unsigned short)12])))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_8 [i_0] [i_0] [15U])))))) ? (min((((arr_1 [12ULL] [(signed char)2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (999780935720416825ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0]))))))) : (min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_3] [i_3] [i_3])), (15104922119443988704ULL)))));
                    var_20 *= ((/* implicit */unsigned int) (unsigned short)11078);
                    var_21 -= ((/* implicit */unsigned short) (((-(min((var_6), (((/* implicit */unsigned long long int) 3156840004U)))))) < (min((((/* implicit */unsigned long long int) ((1713886379953184178ULL) <= (((/* implicit */unsigned long long int) -8901379195885452175LL))))), (min((120259084288ULL), (((/* implicit */unsigned long long int) (unsigned char)30))))))));
                }
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_22 = (+(9223372036854775791LL));
                    var_23 = ((/* implicit */long long int) min((var_9), (((((/* implicit */int) arr_3 [14ULL] [i_1] [i_1])) / (4194304)))));
                    var_24 = ((/* implicit */unsigned char) ((min((999780935720416825ULL), (((/* implicit */unsigned long long int) arr_6 [i_4] [i_1] [i_1] [i_0])))) >> (((min((((((/* implicit */unsigned long long int) arr_0 [(unsigned char)8])) - (281474975662080ULL))), (((arr_12 [i_0] [(_Bool)1] [(unsigned char)5] [i_4]) << (((var_0) - (1870145677))))))) - (7074839375908037171ULL)))));
                }
                var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_8 [i_0] [i_0] [i_1]), (arr_8 [i_0] [i_1] [i_0]))))));
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : ((+(((/* implicit */int) var_7))))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 4; i_5 < 22; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_13 [11] [11] [(short)16]))));
                            arr_21 [i_0] [i_6] [i_5] [8LL] [i_0] = ((/* implicit */int) (-(((((unsigned long long int) 4157720236593084596ULL)) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2))))))));
                            var_28 |= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_5]))))), (min((((/* implicit */unsigned long long int) var_11)), (10729879878113554943ULL))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 13211566105589398323ULL))))) << (((16784640448091293130ULL) - (16784640448091293112ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
