/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116845
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [12LL] |= ((/* implicit */long long int) min((((((/* implicit */int) var_8)) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [(short)14])))))), (((((/* implicit */int) arr_3 [i_0] [i_1])) | (((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (short)32344))))) >= (1105563200)))) : (((/* implicit */int) var_2))));
                    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((int) arr_6 [i_1] [i_0])))))));
                    arr_9 [i_0] = (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (signed char)127)));
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                {
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((((/* implicit */int) arr_0 [i_3])) * (((/* implicit */int) var_3)))) > (((/* implicit */int) (unsigned short)63550)))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)-105)) * (((/* implicit */int) arr_7 [i_1] [i_1] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)48)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (-3047039697925107587LL)));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) min(((short)16243), (((/* implicit */short) var_3))))))) : (var_9)));
                }
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                {
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_6 [(signed char)15] [(signed char)15]), (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] = ((/* implicit */short) (~(((long long int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0] [i_0] [i_6])))))));
                                arr_22 [i_0] [(short)9] [i_0] [i_5] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_10 [i_1])) : (arr_12 [i_0] [i_4])))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_15 &= ((/* implicit */long long int) (signed char)-119);
                    var_16 = ((/* implicit */_Bool) ((short) min(((~(6448248979175530326LL))), (((/* implicit */long long int) (short)-1)))));
                    var_17 = ((/* implicit */signed char) arr_11 [i_0] [i_1]);
                    var_18 ^= ((/* implicit */signed char) (unsigned short)1986);
                }
            }
        } 
    } 
}
