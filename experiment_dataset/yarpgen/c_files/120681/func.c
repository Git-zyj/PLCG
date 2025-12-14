/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120681
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [4U] [i_0] = ((/* implicit */_Bool) var_9);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_2 - 2] [i_1 + 1] [i_1 - 1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_2 + 1] [i_1 + 1] [i_1 + 1] [(unsigned short)1])) < (-8611947643697423266LL)))))));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_0))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_18 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)38724)) << (((max((var_3), (((/* implicit */unsigned int) (signed char)92)))) - (3714595816U)))));
                        var_13 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49280)) ? (13855343329525253562ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32168)))))) && (((/* implicit */_Bool) (signed char)-1))))) | (((/* implicit */int) ((unsigned short) arr_0 [i_3]))));
                    }
                    arr_19 [i_4] [i_4] [i_4] = ((((_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)64155)));
                    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (211905894604077452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((((/* implicit */unsigned long long int) var_7)), (var_4)))))));
                    arr_20 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_4]))))) != (((((/* implicit */_Bool) arr_13 [i_4] [11] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_3] [i_0] [i_4]))))));
                    arr_21 [i_4] [i_4] = ((/* implicit */short) (~(((arr_1 [i_0] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) : (var_11)))) ? (((((/* implicit */_Bool) arr_12 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57499))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2)))))))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((arr_8 [i_0] [i_0] [i_0] [i_0]) - (3333350151U)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16255))) * (13855343329525253589ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518))) : (var_5))))))));
    }
    for (unsigned int i_6 = 4; i_6 < 18; i_6 += 2) 
    {
        arr_27 [i_6] = ((/* implicit */int) ((((/* implicit */int) var_2)) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16256)))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)-22109))))));
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            for (unsigned short i_8 = 3; i_8 < 18; i_8 += 3) 
            {
                {
                    arr_35 [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((var_6) & (((/* implicit */int) var_0))))))) > ((-(((((/* implicit */_Bool) (unsigned short)33369)) ? (((/* implicit */unsigned int) var_6)) : (2U)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_39 [i_8] = ((/* implicit */unsigned int) ((arr_23 [i_8 + 2] [i_7]) << (((((/* implicit */int) (unsigned short)65535)) - (65534)))));
                        var_15 += ((/* implicit */unsigned long long int) arr_38 [i_9] [i_9] [i_6] [i_9]);
                    }
                }
            } 
        } 
    }
    var_16 = (unsigned char)0;
}
