/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100455
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_3 [i_0]))));
                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2768168648988073568ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (max((var_17), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(short)10]))) : (501458453037985455LL))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_22 = (_Bool)0;
                            var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_0)))) ? (((/* implicit */unsigned long long int) -1910321359)) : (max((((/* implicit */unsigned long long int) arr_3 [i_2])), (arr_5 [(signed char)6] [i_2] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) ((unsigned short) (short)-15))))))));
                            arr_8 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [13LL] [i_1]))) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 3])) : (((/* implicit */int) arr_0 [i_1] [i_3]))))) ? ((~(((/* implicit */int) ((signed char) var_1))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_10)))), (((var_17) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                            arr_9 [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
                arr_10 [(unsigned short)19] [i_1] = ((/* implicit */int) arr_5 [(unsigned short)14] [i_0 + 3] [i_0]);
                var_24 *= ((/* implicit */signed char) ((short) min((((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) | (((/* implicit */int) (short)-32761)))), (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ ((~(-501458453037985456LL)))))) ^ (var_0)));
    var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) != (((((/* implicit */_Bool) ((signed char) var_1))) ? ((~(var_11))) : (var_11)))));
}
