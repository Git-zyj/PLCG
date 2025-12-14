/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107428
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
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((((_Bool)1) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (unsigned char)93)) : (-1931207576))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53617))) / (511ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))))));
                var_17 = (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_6 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17306747338166497146ULL)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (short)-17469))))));
            }
            for (int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_7 [i_3] [i_1]);
                var_18 ^= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_3 [i_0] [i_1])) & (((/* implicit */int) (unsigned short)7680))))));
                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10U])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 2138023527))))) && (((/* implicit */_Bool) (short)31373))));
            }
            for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61353))) : (14185091625730515394ULL))) & (((/* implicit */unsigned long long int) ((arr_4 [i_4] [i_1]) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)162)))))));
                            var_21 = ((/* implicit */unsigned short) (signed char)-89);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) : (arr_8 [i_0] [i_0] [(unsigned char)9] [i_0])));
                            var_23 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)504)) ? (((/* implicit */int) arr_21 [i_4] [i_7])) : (((/* implicit */int) (unsigned short)36765)))) ^ ((~(((/* implicit */int) arr_2 [i_7] [i_7] [i_7]))))));
                            var_24 = ((/* implicit */short) arr_11 [i_4] [i_0] [i_4] [i_4 - 1]);
                            var_25 &= ((((((/* implicit */_Bool) arr_12 [i_7] [i_0])) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (unsigned short)60889)))) % (((((/* implicit */_Bool) (unsigned short)4646)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_7] [i_1])))));
                        }
                    } 
                } 
            }
            for (unsigned short i_9 = 2; i_9 < 17; i_9 += 3) /* same iter space */
            {
                var_26 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_21 [i_1] [(unsigned char)14])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1288891447)))))) : (5LL)));
                arr_28 [i_9] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [(unsigned char)0] [i_1] [i_9])) ? (2018589699454296839ULL) : (((/* implicit */unsigned long long int) arr_14 [(unsigned short)13] [(unsigned short)13] [i_9] [i_9 - 2]))))) ? (((((/* implicit */_Bool) (signed char)56)) ? (arr_13 [i_0] [i_1] [(short)5]) : (arr_23 [i_0] [(unsigned char)16] [i_0] [i_0] [10ULL] [i_9]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)93))))));
                var_27 &= ((/* implicit */unsigned char) (short)-32760);
            }
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25982))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            arr_29 [12ULL] [i_1] &= ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_1] [i_1]);
        }
        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 1) 
        {
            var_29 -= ((/* implicit */long long int) 8796093022207ULL);
            var_30 &= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_10] [i_0]))))) : (((((/* implicit */_Bool) (short)32760)) ? (arr_6 [6] [i_10] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25970)))))));
        }
        for (long long int i_11 = 3; i_11 < 17; i_11 += 3) 
        {
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (short)-15986)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */int) (unsigned char)162)) / (((/* implicit */int) (unsigned char)143))))));
            arr_34 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15997545075004421109ULL)) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [16ULL] [16ULL] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)145)))))));
            var_32 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_11 [i_11] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_26 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2302))))))));
        }
        for (unsigned int i_12 = 2; i_12 < 17; i_12 += 4) 
        {
            arr_38 [i_0] = ((/* implicit */_Bool) arr_32 [i_12] [i_0] [i_0]);
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_12]))))) ? ((-(((/* implicit */int) arr_35 [i_12] [i_12] [i_12])))) : (((/* implicit */int) arr_21 [i_0] [i_12])))))));
        }
        arr_39 [(unsigned short)12] [(signed char)0] |= ((/* implicit */unsigned short) (!((_Bool)1)));
    }
}
