/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120905
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) var_0))))))) ? (((/* implicit */int) ((unsigned short) min(((signed char)29), (((/* implicit */signed char) var_8)))))) : (((/* implicit */int) var_4)))))));
    var_11 = ((/* implicit */unsigned int) min((366473452), (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 3483468414U)) && (((/* implicit */_Bool) (unsigned char)219))))), (var_0))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_10 [i_2] [i_2] [i_2] [i_3])) >= (((unsigned int) (short)-32762))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967273U)))))));
                                var_13 &= ((/* implicit */unsigned short) ((signed char) (-(arr_1 [i_0]))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) : (22U))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) min((((unsigned long long int) ((-1908340335) == (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5789067328503559393ULL)))))));
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_2] [i_1])))) ^ (((unsigned int) min((var_2), (((/* implicit */short) var_8)))))));
                }
            } 
        } 
    } 
}
