/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130293
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(signed char)9] [i_2] [i_0] = ((/* implicit */unsigned short) (((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30254))) * (var_7))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    var_16 = ((/* implicit */short) (+(((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) - (arr_1 [i_0 - 1] [i_0 - 1])))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (unsigned short)2797)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_0 - 1] = ((/* implicit */unsigned short) ((short) (!((!(((/* implicit */_Bool) var_5)))))));
                        arr_12 [8LL] [i_1] [i_1] [4LL] [(signed char)10] [(signed char)9] = var_9;
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 3; i_5 < 14; i_5 += 4) 
                        {
                            var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)35282), (((/* implicit */unsigned short) var_0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [(_Bool)1]))))))) : (((unsigned long long int) ((((/* implicit */_Bool) (short)27209)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30258))) : (-6635284153257772780LL))))));
                            arr_18 [i_0] [i_2] [i_5] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) ((((long long int) (unsigned short)35303)) << ((((((-(((/* implicit */int) (unsigned short)46315)))) + (46364))) - (8)))));
                            var_18 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_5 [i_0 - 1]))))));
                        }
                        var_19 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */int) (unsigned short)30245)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-27209))))))), (max((arr_15 [i_0 - 3] [(unsigned char)1] [(unsigned char)1] [i_2] [i_4]), (arr_15 [i_0 + 1] [i_2] [i_2] [8ULL] [i_4])))));
                        var_20 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_1 [i_1] [i_4])), (var_14))), (((/* implicit */unsigned long long int) var_9))));
                        var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 3])))) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1])));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_14))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) (_Bool)1);
                        arr_23 [i_0] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((1640595390595580389ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))))), (((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_17 [14U] [i_0 - 2] [i_1] [14U] [i_0]))))));
                    }
                }
            } 
        } 
    } 
    var_24 -= ((/* implicit */int) var_11);
}
