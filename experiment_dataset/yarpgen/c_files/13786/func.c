/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13786
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
    var_12 = ((/* implicit */_Bool) max((var_2), ((short)0)));
    var_13 = ((/* implicit */_Bool) var_6);
    var_14 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((-2131608879) > (((/* implicit */int) (_Bool)0))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [i_2] [i_2])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))))));
                            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) -7530383259394614443LL)) ? ((+((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))) : (((/* implicit */unsigned int) -1073741824))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_0] [i_0] [i_3] [i_4] [i_1])) ? (((/* implicit */int) arr_8 [8LL])) : (((/* implicit */int) arr_13 [(signed char)3] [7ULL] [i_2] [i_2] [i_2])))))))) ? (min((((/* implicit */int) ((-1073741819) != (((/* implicit */int) arr_0 [(unsigned short)10] [(unsigned short)10]))))), (((((/* implicit */_Bool) arr_9 [(signed char)6] [i_2] [i_3] [(unsigned short)3])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_4 [i_1] [i_1])))))) : (-1073741811))))));
                                var_19 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_4 - 1] [i_4 - 1] [i_3] [i_0]))) >= ((((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) 16642998272LL))))))));
                                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != ((+(((/* implicit */int) max((arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [(unsigned short)14] [i_4 - 1]), ((_Bool)1))))))));
                                arr_16 [i_0] [i_0] [i_4] [i_2] [i_3] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || ((_Bool)1))))));
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) -1073741820);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((((((/* implicit */_Bool) max((18446744073709551608ULL), (((/* implicit */unsigned long long int) var_8))))) ? ((+(((/* implicit */int) (short)15)))) : ((~(((/* implicit */int) (short)1)))))) < (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) var_5))))));
}
