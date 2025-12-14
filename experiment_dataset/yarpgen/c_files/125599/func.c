/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125599
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [0U] [(signed char)10] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                var_12 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -479362237)) / (arr_3 [(signed char)10] [4ULL])))) ? (((/* implicit */unsigned long long int) -479362237)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (var_8)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [10]))) : (arr_3 [i_0] [(unsigned short)6]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1 + 1]))))))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 8; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_0 [i_2]))))) || ((!(((/* implicit */_Bool) arr_1 [i_3])))))))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (8774783815852338888ULL)))) ? (arr_3 [(_Bool)1] [(_Bool)1]) : (max((arr_3 [i_1] [8ULL]), (arr_2 [10ULL] [10ULL]))))))))));
                            var_15 = ((/* implicit */_Bool) max((max(((+(((/* implicit */int) var_11)))), (max((((/* implicit */int) arr_8 [(_Bool)1])), (arr_6 [(unsigned short)1]))))), (((/* implicit */int) ((((/* implicit */int) (short)0)) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))));
                            arr_10 [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_6 [i_0])))));
                            var_16 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_11))))) ^ (((((/* implicit */_Bool) -124140181)) ? (arr_3 [i_0] [(short)10]) : (((/* implicit */unsigned long long int) 825159571)))))) / (((/* implicit */unsigned long long int) (~(max((arr_7 [i_2 - 3]), (((/* implicit */int) (signed char)116)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_1);
}
