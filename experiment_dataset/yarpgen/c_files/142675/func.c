/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142675
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) -1432895761)) ? (1989837389U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [8U] [i_1] [i_3] [i_2] [(_Bool)1] [2LL] = ((/* implicit */unsigned int) var_11);
                            arr_12 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) max((min((arr_6 [i_0 + 1]), (((/* implicit */long long int) arr_3 [i_2 - 1] [i_3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)52)) && (((/* implicit */_Bool) (unsigned char)51)))))));
                            arr_13 [i_0 - 1] [i_0] [i_0] [i_3] = min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_1] [i_1] [2] [i_3 + 1] [i_1 - 2]))))), (min((min((var_10), (var_16))), (((/* implicit */unsigned int) ((var_18) / (((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            {
                var_21 = ((/* implicit */short) min((min((((arr_6 [i_4 - 2]) - (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) arr_4 [i_4 - 2] [i_4 + 1])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)214)))))));
                var_22 = ((/* implicit */short) (!(var_19)));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) var_6);
                            var_24 |= ((((/* implicit */_Bool) ((var_12) | (((/* implicit */int) ((arr_6 [i_4 + 1]) < (((/* implicit */long long int) var_3)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)178)))))) : (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) : (var_16))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((unsigned int) var_6));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) ((((/* implicit */long long int) -199648777)) / (2107952940025499833LL)))));
    var_27 = ((/* implicit */int) var_6);
}
