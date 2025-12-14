/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166276
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
    var_10 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_4)), (((1555711974874251511ULL) % (((/* implicit */unsigned long long int) var_2)))))) < (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 338881372)) ? (((/* implicit */int) var_6)) : (var_2)))), (var_1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */short) (((!(((/* implicit */_Bool) -9223372036854775791LL)))) ? (((((/* implicit */_Bool) ((arr_10 [i_0] [0U] [i_1] [i_2] [i_0]) % (arr_10 [i_0] [i_1] [12LL] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (549739036672LL) : (var_8)))) : (14248408455095740465ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4688)))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [2U] = ((/* implicit */signed char) (unsigned char)115);
                            var_12 = max(((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-1277), (((/* implicit */short) (_Bool)1)))))) > (((((/* implicit */_Bool) -8224040419909901041LL)) ? (9223372036854775774LL) : (-9223372036854775775LL)))))));
                            var_13 = arr_8 [i_1];
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) max((((/* implicit */long long int) 4161695136U)), (((((/* implicit */_Bool) -9223372036854775775LL)) ? (-6053784285250669299LL) : (-1LL)))));
            }
        } 
    } 
}
