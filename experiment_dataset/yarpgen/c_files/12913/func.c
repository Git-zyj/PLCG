/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12913
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
    var_15 = ((/* implicit */short) var_0);
    var_16 = ((unsigned int) ((((/* implicit */_Bool) (short)31695)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-29)))) : (((unsigned long long int) (short)248))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_17 = (~(14046701209202295574ULL));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-117)) & (((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-12))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (signed char)-96)))))) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)146)))) != (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((_Bool) ((arr_2 [i_0] [i_2 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
                }
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [(short)5])) ? (((/* implicit */int) (unsigned char)31)) : (-157276464))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) arr_3 [i_1 - 1] [i_0]))))) ? (((-1449583523077320647LL) & (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_7 + 1] [i_7] [i_7] [i_7 - 2] [i_7 - 1] [i_7])) ? (((int) (unsigned char)32)) : (((/* implicit */int) ((signed char) arr_24 [i_7 - 3] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 2])))));
                                var_21 = ((/* implicit */short) arr_19 [i_5] [i_6] [i_7]);
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (short)-13895)) / (((/* implicit */int) var_12)))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) (unsigned short)29759)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) > (var_8))));
}
