/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158719
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+((-2147483647 - 1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-2147483647 - 1)) : (2147483647))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483640)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)56149))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0]))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (2147483647)))), (((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (5989025353492798300ULL)))))))));
                    arr_9 [0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) max((((((int) arr_6 [i_2] [i_1] [i_2] [i_2])) ^ (297058617))), (((/* implicit */int) ((((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) var_5))))) < (((/* implicit */int) arr_3 [i_0])))))));
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) >> (((((/* implicit */int) ((signed char) arr_2 [i_1]))) + (97)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : ((~(5207185242947478581ULL)))));
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_3 [i_0]))) & (((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0])))))))));
                    var_16 |= ((/* implicit */int) ((unsigned int) 520192));
                }
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_8))))) ? (var_13) : (((/* implicit */int) arr_8 [i_0]))))));
                    var_18 = ((/* implicit */unsigned long long int) var_1);
                    arr_14 [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((/* implicit */unsigned short) ((short) arr_8 [i_0])))));
                }
                /* vectorizable */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_17 [i_0] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_12) == (((/* implicit */int) (unsigned char)124))))) == (((/* implicit */int) arr_8 [i_4 - 1]))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((871090072) & (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_0]) : (arr_1 [i_1]))) : (((/* implicit */unsigned int) (-(var_12))))));
                }
                for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */int) (short)19012)) >> (((((/* implicit */int) arr_15 [i_0])) - (12531)))))))) ? (((/* implicit */int) var_0)) : (((int) min((arr_15 [i_1]), (((/* implicit */short) arr_0 [i_0])))))));
                    arr_22 [i_1] [i_5] = ((/* implicit */int) var_3);
                    arr_23 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)35);
                }
                arr_24 [i_0] = ((/* implicit */unsigned char) ((((_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_8))))) : (arr_1 [i_0])));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) 
                {
                    var_21 += ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [3] [i_0])) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) (unsigned short)55626))))));
                    arr_27 [i_0] [i_1] = ((/* implicit */unsigned short) (-((~((~(724395666)))))));
                    arr_28 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)199)) - (((/* implicit */int) (unsigned short)32768)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_6 + 2]))))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6 - 2]))))))));
                }
                var_22 = ((/* implicit */unsigned long long int) ((((1431328176) & (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_4 [i_0])))))) & (((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)26)), (var_1)))), ((~(var_13))))) / (-741814236)));
}
