/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183810
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] [0] = ((/* implicit */short) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-1)))) * (arr_0 [i_0] [(short)9])))));
        var_18 = ((/* implicit */int) min(((short)4420), ((short)-1)));
        var_19 ^= max((((/* implicit */long long int) min((arr_2 [i_0]), (((/* implicit */short) var_11))))), (((((/* implicit */long long int) ((var_7) / (((/* implicit */int) var_10))))) % (max((var_4), (((/* implicit */long long int) 16383U)))))));
        var_20 = (short)-1;
        arr_4 [i_0] = ((/* implicit */int) (short)1);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (short)-1))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_6 [i_1]))));
        arr_7 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_1]))));
        var_23 -= ((/* implicit */int) (_Bool)0);
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] = ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1])));
            arr_11 [i_2] [i_1] = ((/* implicit */unsigned int) var_4);
            arr_12 [i_1] [i_2] = ((/* implicit */unsigned short) arr_0 [i_1] [i_1]);
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            arr_15 [i_3] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)26))));
            /* LoopNest 3 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_24 [i_5] [i_3] [(unsigned char)10] [i_5] [i_3] [i_3] = ((/* implicit */_Bool) -882458331);
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [(_Bool)1])) ? (-4861661456357042577LL) : (((/* implicit */long long int) 4294950910U)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        {
                            arr_33 [i_7] [i_9] [(unsigned char)9] [i_7] [i_7] [i_3] [i_7] = ((/* implicit */int) ((arr_0 [i_1] [i_1]) ^ (4294950912U)));
                            arr_34 [i_9] [i_7] [i_1] [14ULL] [i_7] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) 1023829446)) > (((((/* implicit */_Bool) -1580865837)) ? (((/* implicit */long long int) 4294967295U)) : (var_4)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-1)))))));
                            arr_41 [i_1] [i_10 + 2] [i_1] [i_3] [i_3] [i_1] |= (+(((var_14) ^ (((/* implicit */int) var_0)))));
                            var_26 ^= ((/* implicit */short) ((var_3) < (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) 1023829455);
                var_28 = ((/* implicit */int) ((arr_31 [i_7] [i_3] [i_7] [(unsigned char)11]) ^ (arr_31 [i_7] [i_3] [i_3] [i_7])));
            }
        }
    }
    for (short i_12 = 1; i_12 < 15; i_12 += 3) 
    {
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) (-(1763699533U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (arr_42 [i_12 + 1]))) : (arr_42 [i_12])));
        arr_44 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned int) var_9)) : (min(((~(1763699533U))), (((/* implicit */unsigned int) ((((-1580865837) + (2147483647))) << (((((/* implicit */int) (unsigned char)58)) - (58))))))))));
        arr_45 [i_12 + 2] [i_12] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_12 + 2])) : (var_8))), (((/* implicit */int) arr_2 [i_12 + 2]))));
    }
    var_30 = ((/* implicit */unsigned short) -1580865837);
    var_31 &= ((/* implicit */_Bool) 4294950913U);
}
