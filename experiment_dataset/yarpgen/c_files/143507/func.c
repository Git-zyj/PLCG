/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143507
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
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)22705)))))) << (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4290772992LL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)22705)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (((/* implicit */long long int) var_5)))) : (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_14)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-88)) : (var_8)))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)7)) ^ (((/* implicit */int) (short)-22716)))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            var_18 += ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)42807))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (short)-32751)))))) ? (var_5) : (max((((((/* implicit */_Bool) var_2)) ? (arr_0 [i_1]) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_1))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) arr_12 [i_0] [i_2] [i_2] [i_4]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_21 -= ((/* implicit */short) var_0);
                            var_22 = ((((/* implicit */_Bool) (unsigned short)42804)) ? (arr_4 [i_0]) : (arr_4 [(signed char)4]));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(8965423093451905323ULL)))) ? (((unsigned int) arr_4 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9))))));
                        }
                    }
                } 
            } 
            var_24 -= ((((/* implicit */_Bool) -540197847675996785LL)) ? (9349896863474008435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5649))));
            var_25 = ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), (arr_7 [i_0] [i_2])));
        }
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            var_26 = (~(max((9349896863474008409ULL), (((/* implicit */unsigned long long int) 2758863915U)))));
            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)5667)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-10686)), ((unsigned short)22705)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))) : (((-226554084) ^ (((/* implicit */int) (signed char)-51))))));
        }
    }
}
