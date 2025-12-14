/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136954
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] [i_0] &= ((long long int) ((int) ((_Bool) (_Bool)1)));
            arr_8 [i_1] [i_0] = ((/* implicit */int) ((unsigned short) ((unsigned int) (short)24588)));
            var_14 = ((/* implicit */_Bool) min((var_14), (((_Bool) (short)24590))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) /* same iter space */
                {
                    arr_15 [i_1] [7LL] [7ULL] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (short)-24588)) != (((/* implicit */int) ((((/* implicit */_Bool) (short)3072)) || (((/* implicit */_Bool) (short)-3062))))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((_Bool) (_Bool)1)))) ? (((int) 15028941784875561557ULL)) : (((/* implicit */int) (short)-3062))));
                    arr_16 [i_3 + 1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24591)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)3072))))) >= (((/* implicit */int) (short)32767)))))) : (0U)));
                    var_16 |= ((/* implicit */_Bool) 68652367872LL);
                }
                for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */int) ((unsigned int) ((_Bool) (short)32762)));
                    arr_19 [i_4] = ((/* implicit */_Bool) ((unsigned char) 15697504752578580033ULL));
                }
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (unsigned char)149)) >= (-147724638))));
                    arr_23 [i_0] [i_1] [i_2] [i_5] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((unsigned long long int) (short)-24600)) : (288230376151711743ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-3062)))) : (((unsigned int) ((unsigned short) 2749239321130971606ULL))));
                }
                arr_24 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) 3411459720U));
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) 15U)) - (3224692546587732364ULL))));
                            var_20 &= ((/* implicit */int) (_Bool)1);
                            arr_32 [i_6] [i_1] [(unsigned short)12] [i_6] [i_1] = ((((_Bool) (short)-24576)) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (short)24588)) : (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) (short)-24588)))));
                            var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24594))) : (15222051527121819264ULL)));
                        }
                    } 
                } 
            } 
        }
        arr_33 [i_0] = ((/* implicit */long long int) ((short) 3224692546587732361ULL));
    }
    var_22 = ((/* implicit */_Bool) 3411459714U);
    var_23 = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (5U) : (4294967294U)))));
    var_24 = ((/* implicit */unsigned long long int) ((((unsigned int) var_9)) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)24607))) > (((/* implicit */int) ((short) 34036326U)))))))));
}
