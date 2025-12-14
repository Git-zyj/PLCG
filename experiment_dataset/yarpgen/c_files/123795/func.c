/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123795
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
    var_13 = ((var_9) % (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
    var_14 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_15 -= ((/* implicit */int) ((((((/* implicit */_Bool) min((4610560118520545280ULL), (((/* implicit */unsigned long long int) arr_0 [(unsigned char)8]))))) ? (arr_0 [14ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) / (((((/* implicit */_Bool) arr_0 [(unsigned char)0])) ? (arr_0 [14LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        var_16 = ((/* implicit */_Bool) (unsigned char)63);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 &= ((/* implicit */signed char) max((-5LL), (max((8602146784575017904LL), (((((/* implicit */_Bool) (unsigned char)0)) ? (-19LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))));
            var_18 |= ((/* implicit */unsigned char) (~(572998644)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_10)));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(arr_0 [i_2]))))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) -3996725110965656600LL))));
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(unsigned char)10] [i_4] [i_2] [8] [i_4] [i_4] [i_5])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [12LL] [i_3]))) : (70368727400448LL))))));
                        var_23 &= ((/* implicit */unsigned char) arr_8 [i_0] [3LL]);
                        var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 282323959)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                    }
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)92))) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) var_0))));
                    var_26 = ((/* implicit */unsigned short) -6288066538322376918LL);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_16 [i_0] = ((((/* implicit */_Bool) arr_11 [i_3] [i_0] [i_0] [i_0])) ? (0LL) : (((/* implicit */long long int) arr_15 [i_0])));
                    var_27 = ((/* implicit */short) ((((/* implicit */int) (!(arr_7 [i_2] [i_3] [i_6])))) - (((/* implicit */int) (signed char)38))));
                    arr_17 [15ULL] [15ULL] [15ULL] [i_3] [i_3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0 + 2] [i_0]))));
                }
                var_28 = ((/* implicit */int) ((_Bool) ((1364701788159319363ULL) - (1542163580061887103ULL))));
            }
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                var_29 += ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)200)))))));
                arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_4 [i_0] [i_2] [i_7])));
                var_30 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 1073741820U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_4)))));
            }
        }
        var_31 = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
    }
    var_32 = ((/* implicit */unsigned short) var_12);
}
