/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125492
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
    var_10 |= ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) ((unsigned short) (~(max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (arr_2 [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_2] [i_0] [i_0] [i_0])) % (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) && (((/* implicit */_Bool) arr_0 [i_0 - 3])))))));
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0])))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_2]))))))))) - (((long long int) ((unsigned int) var_7)))));
                }
                for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (_Bool)1);
                                var_14 ^= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [(unsigned short)4] [(unsigned short)4] [i_0]))) * (((((/* implicit */_Bool) arr_12 [(_Bool)0])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                                arr_17 [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [(short)9] [i_1] [(short)9])) : (((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (signed char)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (short i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2529111065364416080LL)))))));
                                arr_22 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) 2529111065364416079LL);
                            }
                        } 
                    } 
                    arr_23 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-1)), (arr_0 [i_0])))) ? (((arr_6 [i_0] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 16083245182256296994ULL))))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) max((((/* implicit */short) (_Bool)1)), ((short)6))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5)))))))) : (max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43019)) && (((/* implicit */_Bool) var_2)))))))));
                                arr_29 [i_9] [i_1] [i_9] [i_9] [i_0] = ((/* implicit */unsigned int) arr_26 [i_0] [i_1]);
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)0))) : (((2363498891453254604ULL) / (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_3] [i_9]))))))) ? (((((-2529111065364416072LL) / (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_8] [i_1]))))) / (((-2529111065364416078LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [13ULL] [i_0] [i_0]))))))) : (arr_2 [i_0])));
                            }
                        } 
                    } 
                    arr_30 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((short) (!(((/* implicit */_Bool) 5764778440361331754ULL)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)20089)))))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16593))))))))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= (((11131979532525930107ULL) >> (((((/* implicit */int) (short)-20081)) + (20130))))))))));
}
