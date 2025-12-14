/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176103
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
    var_17 = var_5;
    var_18 = ((/* implicit */long long int) min((((int) ((int) var_4))), (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((min((((/* implicit */unsigned long long int) -1007586319976287074LL)), (6336430883883571803ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0]) - (((/* implicit */long long int) arr_1 [i_1]))))) && (((/* implicit */_Bool) (+(1489417958)))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) (-(1489417941)))) : (((arr_2 [i_0] [i_1]) - (((/* implicit */long long int) 4294967289U)))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_1 [21ULL]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))))) ^ (((long long int) arr_2 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_12 [19LL] [i_1] [i_1] [(signed char)14] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) max((arr_6 [12LL] [i_2 - 2]), (((/* implicit */unsigned long long int) (short)32767))))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)86))))) ? (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_2 + 1] [i_2 + 1] [i_2 - 1]))) : ((~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) (signed char)42))))))))))));
                            var_21 |= ((/* implicit */unsigned long long int) 4294967288U);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) (+(-1489417959)));
            }
        } 
    } 
}
