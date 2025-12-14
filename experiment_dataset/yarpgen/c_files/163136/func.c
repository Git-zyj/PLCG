/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163136
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) % (var_0)))) ? (((/* implicit */int) max((var_7), (arr_0 [i_0])))) : ((~(((/* implicit */int) arr_2 [i_0 + 1]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_12 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) (!(var_7)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_19 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((3510477231U), (((/* implicit */unsigned int) (unsigned char)214))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (unsigned short)63064))))) : ((-(17327063660098256904ULL)))))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) var_0))), (arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_4])))) ? (max((min((arr_3 [i_0]), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_5 [i_0]))))))));
                                var_18 += max(((unsigned short)30933), ((unsigned short)37025));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)23717)), (11371820759108363258ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) % (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-23717))))), (((((/* implicit */_Bool) var_9)) ? (arr_18 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
        var_20 ^= ((/* implicit */short) (-((~(arr_9 [i_0 + 1] [(_Bool)1])))));
    }
    var_21 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-1)), (5997558365340990215ULL)))))))));
    var_22 = ((/* implicit */int) var_9);
    var_23 |= ((/* implicit */int) min((((max((var_3), (((/* implicit */unsigned long long int) var_16)))) & (((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) ((unsigned short) var_15))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
