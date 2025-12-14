/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147769
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
    var_11 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (short)-1))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                arr_13 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */int) ((unsigned short) 2518152300317096631ULL));
                                var_12 |= min(((short)5), ((short)-1));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4])) : ((-(((/* implicit */int) ((unsigned char) (unsigned short)0)))))));
                            }
                            for (signed char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                            {
                                arr_16 [i_3] [i_3] = (~(13924981435235626174ULL));
                                var_14 = ((/* implicit */long long int) (-(18446744073709551602ULL)));
                                arr_17 [i_0] [i_1 + 2] [i_1] [i_1 + 2] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-31179))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) >> (((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))));
                                arr_18 [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17296237288157358306ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (0ULL)));
                                var_15 |= ((/* implicit */int) (~(var_3)));
                            }
                            for (signed char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_3] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46950))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65281)) << (((((/* implicit */int) var_1)) - (44255)))))) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29339))) : (4786653279934418106ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (unsigned short)65535))))))));
                                arr_23 [i_1] [i_1] [i_2] [6ULL] [i_6] [i_2] [i_3] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)0))))) & (((unsigned long long int) ((((/* implicit */_Bool) -1906884542679485849LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (arr_1 [i_2])))));
                            }
                            arr_24 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (var_9) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1]))))) || (((/* implicit */_Bool) (short)-7752))));
                            arr_25 [i_3] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 399971791680707076LL)) ? (((/* implicit */int) max(((unsigned short)38563), ((unsigned short)11270)))) : (((/* implicit */int) (signed char)3))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_6))));
                            arr_26 [i_0] [i_3] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((unsigned long long int) 149084831U));
                        }
                    } 
                } 
                arr_27 [i_1 - 2] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1 - 2])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)65515), (((/* implicit */unsigned short) (unsigned char)92))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7)));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2718002998U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))) ? (min((((/* implicit */long long int) (signed char)-1)), (1906884542679485849LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (short)23500))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65515))) | (var_10))))))));
    var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (signed char)3)) | (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)25))))));
}
