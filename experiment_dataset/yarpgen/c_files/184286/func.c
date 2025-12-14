/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184286
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
    var_20 *= ((/* implicit */unsigned short) 6LL);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)6142)), (-572904010)));
        var_22 *= max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((4294967284U), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) -2182878733880946541LL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (unsigned char)244);
                                arr_16 [2] [10U] [2] [i_0] [i_1] [10U] [i_0] &= ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                                var_24 = ((/* implicit */signed char) arr_3 [i_3] [i_3] [i_3]);
                                arr_17 [(unsigned char)12] [(unsigned char)12] [i_2] [i_3] [i_4] [i_3] [i_3] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (-2182878733880946518LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))), (((/* implicit */long long int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) (short)8108)), ((~(17165046752795513245ULL)))))));
                                arr_18 [i_1] = ((/* implicit */unsigned int) (~((~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-2182878733880946518LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 4; i_5 < 12; i_5 += 3) 
                    {
                        arr_23 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [1U] [i_5])) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) arr_15 [i_0]))))))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) (unsigned short)26746)), (arr_20 [i_0] [i_0] [i_1] [i_2] [i_5 + 1])))))))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */int) 12563092977256196649ULL);
        var_27 = ((signed char) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7834))) : (arr_22 [i_0] [i_0] [i_0] [i_0])));
    }
}
