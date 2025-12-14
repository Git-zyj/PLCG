/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111602
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)19281))) & (var_5)));
    var_21 = ((/* implicit */unsigned short) (short)-19281);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) (signed char)62);
                var_22 = ((/* implicit */long long int) max((var_22), (max(((~(1682709247273854266LL))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                arr_14 [i_1] [i_3] [i_2] [i_1] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 2] [i_4] [i_1 - 1] [i_1])) || (((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2] [i_1 - 2] [i_4])))))) : ((~(751293166U)))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (-5411557601143902138LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1] [i_3])), ((unsigned short)63763)))))))) & (min((((/* implicit */unsigned long long int) 4270791614670204846LL)), (((unsigned long long int) (unsigned short)27))))));
                                var_24 = ((/* implicit */_Bool) (~(((long long int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (short)-19281)))))));
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1 - 1] [i_1]))))) & (((unsigned int) arr_6 [i_0] [i_0] [i_4])))))));
                                var_26 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)19273)), (14671744273885145844ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4096)) / (((/* implicit */int) arr_6 [i_1 - 1] [i_2] [i_1]))))) : (min((((/* implicit */long long int) arr_3 [i_0] [i_4])), (5411557601143902138LL))))), (((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) != (arr_7 [i_0]))))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                            {
                                var_27 = (_Bool)1;
                                arr_17 [i_0] [i_2] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_11 [i_5])))) ? ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_1] [i_1 - 1] [i_1] [i_2] [i_1 - 2]))));
                                var_28 = ((/* implicit */unsigned char) arr_0 [i_1]);
                            }
                            for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                            {
                                var_29 += ((/* implicit */signed char) (unsigned char)246);
                                var_30 = ((short) (+(((/* implicit */int) arr_18 [i_1 - 1]))));
                            }
                            for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                            {
                                arr_22 [i_7] [i_7] [i_2] [i_7] [i_7] = ((/* implicit */long long int) (unsigned char)252);
                                var_31 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)29)))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (arr_19 [i_0] [i_0])))));
                            }
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_13 [i_1 - 1] [i_1 + 1] [i_2] [i_3] [i_2]), (((/* implicit */long long int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((arr_21 [i_0] [i_0] [i_1 + 1] [i_2] [i_3]), (((/* implicit */long long int) (_Bool)1))))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65517))))), (11439070053655244009ULL)))));
                            var_33 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3141932514879035872LL)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) arr_11 [i_2]))));
                            var_34 = ((/* implicit */signed char) (unsigned short)1773);
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_3] [i_3] [i_1 - 2])), ((unsigned short)23782)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : ((~(((unsigned int) 10421466504107559955ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) min((min((var_2), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14182))))))))));
}
