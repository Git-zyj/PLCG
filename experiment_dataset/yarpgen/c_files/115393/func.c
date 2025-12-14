/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115393
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
    var_18 &= (~(var_9));
    var_19 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */unsigned long long int) -5747156051903211592LL)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
    var_20 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-21552))))) == (var_13)))), (5747156051903211591LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-5747156051903211592LL)));
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_6);
            var_22 *= ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_1]);
        }
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) 2251799813685247LL);
            var_24 = ((/* implicit */int) ((arr_0 [i_0]) & (1457605699933301807LL)));
        }
        for (short i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
            {
                var_26 = (unsigned short)13306;
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) & (arr_0 [i_0])))))));
                var_28 = ((/* implicit */unsigned short) var_15);
                var_29 ^= ((/* implicit */_Bool) arr_2 [i_0]);
                var_30 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
            for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_0]))) == (var_9))) ? (((/* implicit */unsigned long long int) (-(0)))) : (18446744073709551615ULL)));
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) arr_10 [i_3] [(short)11] [i_7]);
                            var_33 *= ((/* implicit */unsigned long long int) (-(arr_0 [6ULL])));
                            arr_22 [i_3] [i_3] [i_5] [i_6] [(short)13] [i_7] = ((/* implicit */long long int) var_17);
                            var_34 *= ((/* implicit */short) var_1);
                        }
                    } 
                } 
            }
            arr_23 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3] [i_3 - 1]))) & (var_10)));
            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)46)) ? (15) : (((-1) & (1626143582))))))));
        }
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) & (arr_21 [i_0] [i_0] [i_0] [2LL] [i_0] [i_0])))) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_9 [7] [i_0]))));
    }
}
