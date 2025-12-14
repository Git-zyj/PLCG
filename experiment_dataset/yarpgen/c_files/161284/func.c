/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161284
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) max((22U), (((/* implicit */unsigned int) var_7)))))))) ? ((-(((unsigned int) (unsigned char)192)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((5174662667206183135ULL) >= (((/* implicit */unsigned long long int) 3130236650U))))))))));
    var_13 = ((/* implicit */signed char) 9110227442313605700LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_8);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) -19)), (((((1132575282966368512ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1164730646U)))) : ((~(17314168790743183104ULL)))))));
                                arr_12 [i_0] [i_0] [i_2] [i_1] [15ULL] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 560796168283919174LL)))))))), (((var_2) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_3] [i_4])))))))));
                                var_16 |= ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_11))))), ((~(((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) max((3130236652U), (((/* implicit */unsigned int) (_Bool)1)))))));
            }
        } 
    } 
    var_17 += ((/* implicit */long long int) (((+((-(((/* implicit */int) (unsigned char)216)))))) == ((~(((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_8))))))));
}
