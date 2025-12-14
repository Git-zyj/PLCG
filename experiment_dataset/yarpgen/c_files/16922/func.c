/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16922
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
    var_10 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)103)) >> (((var_1) + (3696625738545530175LL)))))), (min((((/* implicit */unsigned long long int) min(((unsigned char)218), (((/* implicit */unsigned char) (signed char)-99))))), (var_3)))));
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned int) max((var_4), (var_0))))), (max(((+(var_3))), (((/* implicit */unsigned long long int) var_4)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) ((_Bool) (signed char)-122));
            arr_5 [i_0] = ((/* implicit */unsigned char) 11424564491712485745ULL);
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_1))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) var_9));
        }
        for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) var_7);
            var_14 += ((/* implicit */unsigned long long int) arr_1 [i_2 - 1] [i_2 + 3]);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 4; i_6 < 20; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((_Bool) (_Bool)1));
                            var_16 += ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                    } 
                } 
            } 
            arr_20 [i_3] [i_3] [i_0] = ((var_7) + (((/* implicit */int) (signed char)-99)));
            var_17 *= ((/* implicit */short) var_1);
            var_18 ^= ((((/* implicit */_Bool) -1914873696)) ? (((((/* implicit */unsigned long long int) var_1)) | (var_3))) : (((/* implicit */unsigned long long int) (~(var_1)))));
        }
        /* LoopSeq 1 */
        for (long long int i_7 = 4; i_7 < 20; i_7 += 2) 
        {
            var_19 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_7 + 2]))));
            /* LoopSeq 1 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned char) var_3)))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8])) ? (((/* implicit */long long int) 616969090)) : (var_1)));
            }
        }
    }
    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_3))));
        var_23 *= min((((/* implicit */unsigned long long int) var_7)), (arr_27 [(unsigned char)20]));
    }
    for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 2) /* same iter space */
    {
        arr_31 [i_10] = ((/* implicit */unsigned char) max((min((arr_26 [i_10 + 2] [i_10 + 2]), (((/* implicit */unsigned long long int) var_4)))), (min((((/* implicit */unsigned long long int) var_0)), (arr_26 [i_10 - 1] [i_10 - 1])))));
        arr_32 [i_10] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((var_5), (var_5))))))));
        arr_33 [i_10 + 1] [i_10] = ((_Bool) (-(var_2)));
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 3495347684U))));
    var_25 ^= ((/* implicit */unsigned long long int) var_8);
}
