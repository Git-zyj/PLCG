/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180676
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */short) ((signed char) (signed char)-1));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) (unsigned short)23600);
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-9223372036854775779LL))))));
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((arr_9 [i_4] [i_2 - 2] [i_1 - 2] [i_0 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24)))))));
                            var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) min(((-2147483647 - 1)), (((/* implicit */int) var_15)))))) ? (((int) ((arr_11 [i_4] [i_4] [i_4] [i_4] [(unsigned short)13]) - (((/* implicit */int) (signed char)12))))) : (((/* implicit */int) ((((unsigned long long int) arr_11 [i_0] [(signed char)6] [i_2] [i_2] [i_4])) >= (((/* implicit */unsigned long long int) 281474976710655LL)))))));
                            var_19 *= ((/* implicit */short) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_1] [i_2] [i_1] [(signed char)14] &= ((/* implicit */signed char) var_15);
                            var_20 = ((/* implicit */unsigned short) ((unsigned char) ((long long int) (~(((/* implicit */int) (signed char)-70))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) | (((/* implicit */int) ((_Bool) var_4)))));
                        }
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (_Bool)1))) <= (((((/* implicit */int) arr_1 [i_1 + 2] [i_0 + 4])) * (((/* implicit */int) var_4)))))))));
                        var_23 = ((/* implicit */unsigned int) -9223372036854775779LL);
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) ((9223372036854775779LL) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3578204329U))))));
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            {
                arr_23 [i_7] [i_6 - 1] = ((/* implicit */signed char) (_Bool)1);
                var_25 = ((/* implicit */unsigned char) 9223372036854775778LL);
                var_26 -= ((/* implicit */unsigned short) ((signed char) (short)-9540));
            }
        } 
    } 
}
