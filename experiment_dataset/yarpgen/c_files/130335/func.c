/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130335
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)14760))));
        var_17 = ((/* implicit */_Bool) min((max((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((var_1) - (2296349367970356321ULL)))))))), ((~(max((3416921887U), (((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0]))))))));
        var_18 = ((/* implicit */short) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_1]);
        var_20 = ((/* implicit */int) var_7);
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516))) | (var_1)));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (min((((/* implicit */unsigned int) arr_5 [(_Bool)1] [i_3])), (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) min((((((/* implicit */int) var_5)) * (((/* implicit */int) arr_1 [(unsigned char)2])))), (((/* implicit */int) var_0)))))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_7 [i_2]))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) arr_14 [i_2] [i_2] [i_2] [i_6 + 1]);
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) 14175668908830706053ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_10 [i_2] [i_4 - 1] [i_5] [i_5]), (arr_17 [8LL] [i_4 + 2] [i_4 + 2] [8LL])))))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)2295))));
                }
                var_26 = ((/* implicit */short) max((((((((/* implicit */int) (short)-6940)) <= (((/* implicit */int) arr_15 [i_2] [i_2] [(unsigned short)11] [i_3] [i_3])))) ? (((10644247890036223799ULL) + (((/* implicit */unsigned long long int) 1414982524U)))) : (((/* implicit */unsigned long long int) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-17783)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)138)) && (((/* implicit */_Bool) arr_11 [(short)18] [i_3] [(short)18])))) ? (((/* implicit */int) min(((unsigned char)7), (((/* implicit */unsigned char) var_11))))) : (((/* implicit */int) (short)-8219)))))));
            }
        } 
    } 
}
