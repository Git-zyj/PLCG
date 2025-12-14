/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186534
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)32768)) * (((/* implicit */int) (short)-1))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) ^ ((-(var_0)))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (short)32767)))))));
                            arr_18 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (short)32762))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_10))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) (_Bool)0)))))) : (var_3))))));
                        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-32762))));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (var_1)));
            arr_26 [i_0] [(unsigned short)18] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1)));
            var_21 ^= ((/* implicit */unsigned int) ((18266437409612074469ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520)))));
        }
        for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            arr_29 [12ULL] [i_0] = ((/* implicit */unsigned long long int) ((((((var_7) + (9223372036854775807LL))) >> (((180306664097477147ULL) - (180306664097477136ULL))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 180306664097477147ULL)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) var_6)))))));
            var_22 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32748))));
        }
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32736)) & (((/* implicit */int) var_12))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_2))));
                        var_25 += (unsigned short)16;
                        var_26 = (+(((/* implicit */int) var_9)));
                    }
                } 
            } 
            var_27 *= ((/* implicit */unsigned long long int) (unsigned short)65516);
        }
        var_28 += ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-2048))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (short)-32743))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_10))));
    }
    var_30 = var_11;
}
