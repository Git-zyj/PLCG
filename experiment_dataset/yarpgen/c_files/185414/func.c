/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185414
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (min((((/* implicit */unsigned long long int) var_17)), (274877906943ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)112))))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (((min(((_Bool)1), (var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0]));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (signed char)-40);
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_2))) && (((/* implicit */_Bool) var_16))));
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (13821433559100089542ULL)));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                arr_23 [i_6] [i_5] [i_5] [1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 + 2] [i_5 - 1])) ? (((var_6) ^ (6491358277708143635LL))) : (arr_20 [i_5 - 2] [i_6 - 1] [i_6 - 2])));
                var_22 = ((/* implicit */short) arr_9 [i_6 + 1] [i_6 - 1] [i_6]);
            }
            for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (13821433559100089542ULL));
                var_24 = var_1;
                arr_27 [i_0] [i_5 + 2] [i_7] = ((/* implicit */signed char) ((arr_1 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                var_25 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) % (3940649673949184ULL))));
                var_26 = ((/* implicit */unsigned int) 18446743798831644672ULL);
            }
            var_27 |= ((/* implicit */unsigned long long int) ((unsigned char) arr_12 [i_0] [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_0] [i_5]));
            arr_30 [7LL] = ((/* implicit */unsigned short) ((1084581912U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5 + 2] [i_5] [(unsigned char)2] [i_5])))));
        }
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            arr_34 [i_0] = ((/* implicit */long long int) ((var_11) | (var_4)));
            arr_35 [i_9] [i_9] &= ((((/* implicit */_Bool) arr_31 [i_0] [i_0])) ? (arr_31 [i_0] [i_0]) : (arr_31 [i_0] [i_9]));
            var_28 = ((/* implicit */long long int) ((_Bool) arr_9 [i_0] [i_0] [i_0]));
            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)7)))))));
        }
        arr_36 [i_0] [i_0] = ((/* implicit */int) arr_11 [i_0] [i_0]);
        var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2370839414U)))))));
    }
    var_31 = var_15;
}
