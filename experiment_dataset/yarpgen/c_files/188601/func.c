/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188601
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 4; i_2 < 20; i_2 += 4) /* same iter space */
            {
                var_10 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
                var_11 = ((/* implicit */signed char) arr_1 [i_0 - 3]);
                var_12 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)14554)) ? (((/* implicit */int) arr_2 [i_0 - 3] [i_2])) : (((/* implicit */int) var_3)))) - (var_6))) << ((((((-(((/* implicit */int) ((short) var_3))))) + (67))) - (29)))));
            }
            for (signed char i_3 = 4; i_3 < 20; i_3 += 4) /* same iter space */
            {
                arr_10 [i_0] [i_0 - 3] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) var_0);
                var_13 -= ((/* implicit */unsigned char) (((~(((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)9] [20U] [i_1] [i_0]))))))) ^ (((/* implicit */long long int) (~(2280968475U))))));
                arr_11 [8U] [i_1] [i_3] [6U] = ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_3 [i_0]))))), (max((arr_9 [i_0] [7U] [i_0] [i_3]), (((/* implicit */unsigned int) var_2)))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_1))))));
            }
            for (signed char i_4 = 4; i_4 < 20; i_4 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */int) (unsigned short)192);
                arr_14 [i_0] [i_0] [i_4] = ((/* implicit */long long int) 2280968475U);
            }
            arr_15 [i_0 - 2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned short) 2013998820U)), (max((var_0), (((/* implicit */unsigned short) var_3))))))) ? (((var_7) + (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [10U])) ? (var_8) : (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_13 [i_0 - 1] [i_0 - 3])))))));
            var_15 = var_1;
            var_16 = ((/* implicit */unsigned short) ((long long int) ((arr_9 [i_1 - 1] [i_1 + 1] [i_0 - 3] [i_0 - 3]) == (((/* implicit */unsigned int) arr_3 [i_0 - 3])))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) var_0);
            var_18 = ((/* implicit */unsigned int) ((int) ((_Bool) arr_6 [i_0 - 2] [i_0] [i_0] [i_0])));
            arr_19 [i_0] [6U] [(signed char)3] = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [(_Bool)1]);
        }
    }
    var_19 = ((/* implicit */short) var_7);
    var_20 = ((/* implicit */signed char) min((var_5), (((/* implicit */long long int) ((var_4) & (((/* implicit */unsigned int) (((_Bool)1) ? (var_2) : (((/* implicit */int) (unsigned short)192))))))))));
    var_21 -= ((/* implicit */short) var_3);
    var_22 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) ((short) var_0))) : (min((var_2), (var_6)))))));
}
