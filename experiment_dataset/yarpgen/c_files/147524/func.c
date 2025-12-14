/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147524
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
    var_18 *= ((/* implicit */signed char) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (_Bool)1))))), (((-717675039574099896LL) ^ (2121693013363684468LL))))), (var_12)));
    var_19 *= ((/* implicit */short) var_16);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : ((((~(4066152600897409635LL))) / (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3)))))))));
        var_21 = min((min((var_16), (((/* implicit */long long int) arr_1 [i_0] [i_0])))), (((/* implicit */long long int) var_1)));
        arr_2 [i_0] = ((/* implicit */int) var_12);
        var_22 *= ((/* implicit */_Bool) var_9);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) ((signed char) ((288230376151187456LL) <= (4066152600897409622LL))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
        {
            arr_9 [i_1] [(signed char)15] [i_2 - 1] = ((/* implicit */short) (+(arr_8 [i_1 + 1] [i_1 + 3] [i_2 + 2])));
            var_24 += ((long long int) arr_4 [i_1 - 1]);
            var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_4 [0LL])) < (((/* implicit */int) arr_4 [i_1 + 3]))));
            var_26 = ((/* implicit */long long int) (short)16384);
        }
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_27 = arr_0 [14LL];
        var_28 -= ((/* implicit */long long int) ((short) min(((unsigned short)32759), (((/* implicit */unsigned short) max(((signed char)-113), ((signed char)112)))))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) min((var_12), (((/* implicit */long long int) ((signed char) ((arr_10 [i_3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))))))))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_30 = var_12;
            arr_14 [i_4] [i_3] = ((/* implicit */unsigned char) arr_12 [i_3] [i_4] [i_4]);
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)113)), (arr_7 [i_3])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_3] [i_4])), (arr_7 [i_3])))) : ((~(((/* implicit */int) (unsigned char)91))))));
            arr_15 [i_3] = ((/* implicit */long long int) arr_0 [5LL]);
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_5 - 3]))))) >= (max((var_11), (((/* implicit */long long int) var_13))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            arr_24 [i_3] [i_4] [i_4] [i_5] [i_7] = ((/* implicit */long long int) var_6);
                            arr_25 [i_5] = ((/* implicit */unsigned short) var_13);
                        }
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_33 += (short)-16385;
                            var_34 += ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_8)))));
                        }
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) max((((/* implicit */unsigned long long int) (short)19869)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6144))) / (arr_19 [i_5] [i_5] [i_5 - 3] [i_5 - 3]))))))));
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */long long int) arr_11 [i_3] [(signed char)1]);
    }
    var_37 += ((/* implicit */_Bool) max(((~(((/* implicit */int) ((_Bool) (unsigned char)150))))), (((/* implicit */int) var_14))));
}
