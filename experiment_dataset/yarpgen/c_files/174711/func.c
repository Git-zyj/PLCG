/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174711
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] |= ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)248))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((arr_4 [i_1] [i_0]), (((/* implicit */long long int) ((1073217536U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48924)))))))))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_18)))) & (((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */unsigned long long int) var_18)))))) % (((arr_0 [i_0]) ? (var_17) : ((~(var_16))))))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((short) var_17))) : (((/* implicit */int) var_4))));
            arr_13 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_2] [i_3]))));
        }
        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            var_23 = arr_1 [i_2];
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) | (((unsigned int) arr_15 [i_2] [i_4]))))))));
            var_25 = ((/* implicit */unsigned short) var_5);
        }
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((signed char) (-(max((((/* implicit */unsigned long long int) arr_11 [i_5] [i_2])), (var_5)))))))));
            arr_20 [i_5] [i_5] = min((var_18), (((/* implicit */long long int) arr_15 [i_2] [i_5])));
            var_27 ^= (+(((/* implicit */int) ((unsigned short) 8000492397309715479LL))));
            /* LoopSeq 1 */
            for (signed char i_6 = 3; i_6 < 13; i_6 += 2) 
            {
                arr_24 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)4))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    var_28 *= ((/* implicit */short) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_14)))))));
                    var_29 = ((/* implicit */short) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) : (((unsigned int) var_9))))));
                    arr_27 [i_2] [i_5] [i_5] [i_2] [i_6] = ((/* implicit */short) arr_22 [i_6] [i_2]);
                    var_30 = ((/* implicit */long long int) var_16);
                }
                for (long long int i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    arr_30 [i_2] [i_5] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (max((((/* implicit */unsigned long long int) var_15)), (arr_23 [i_2] [i_5] [i_5] [i_8]))))))));
                    var_31 *= arr_8 [i_2] [i_8];
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_25 [i_6 + 1] [i_5] [i_8 - 2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6 + 3] [i_2 + 1]))) : (var_18)))) ? ((~(((/* implicit */int) arr_25 [i_6 + 3] [i_5] [i_8 - 2] [i_8])))) : (((/* implicit */int) ((unsigned short) var_8)))));
                    var_33 = ((/* implicit */unsigned short) var_11);
                }
                var_34 = ((/* implicit */unsigned int) var_3);
                arr_31 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_10);
                var_35 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_12 [i_2] [i_5] [i_6])))) + (((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((arr_19 [6LL]) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (arr_23 [i_2] [i_2 + 1] [8U] [i_2])))));
            }
        }
        for (long long int i_9 = 3; i_9 < 12; i_9 += 1) 
        {
            arr_34 [i_2] [i_9] [i_9] = ((/* implicit */unsigned short) var_18);
            arr_35 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [(unsigned short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_17)))) : (((unsigned long long int) (_Bool)1))));
            arr_36 [i_9] [i_9] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_2]), (((/* implicit */unsigned short) arr_33 [i_2])))))) + (((((/* implicit */unsigned long long int) arr_32 [i_9])) & (var_16)))))) ? (((/* implicit */int) arr_15 [i_2] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 + 1] [(_Bool)1])))))));
        }
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((long long int) var_5)))));
        var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_11))))))) ? ((~(((/* implicit */int) (short)-32753)))) : (((/* implicit */int) ((((var_7) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2] [i_2 + 1]))))))));
    }
}
