/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131311
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */long long int) 8725724278030336ULL);
                    var_14 ^= ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 24; i_4 += 3) 
            {
                {
                    arr_12 [i_0] [i_0] [i_3] [i_3] = var_0;
                    arr_13 [i_3] [i_0] [i_3] [i_4 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51515))));
                    var_15 &= ((/* implicit */unsigned int) (signed char)-86);
                    arr_14 [i_3] = ((/* implicit */unsigned short) var_5);
                    arr_15 [i_4] [i_3] [i_3] [i_0] = (signed char)109;
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned short) (signed char)46);
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (unsigned short)14022))));
                                arr_31 [i_5] [i_6] [i_6] [i_8] [i_6] [i_6] [i_5] |= ((/* implicit */unsigned short) 856908222U);
                            }
                        } 
                    } 
                    arr_32 [(_Bool)1] [i_5] = ((/* implicit */signed char) var_8);
                    var_18 += (unsigned short)51502;
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) (signed char)-86);
                                arr_39 [i_5] [i_10] = (unsigned short)14034;
                                var_20 = ((/* implicit */unsigned int) (unsigned short)14006);
                            }
                        } 
                    } 
                    arr_40 [i_5] = ((/* implicit */_Bool) (signed char)-1);
                }
            } 
        } 
        arr_41 [i_5] [i_5] = ((/* implicit */int) (unsigned short)51502);
    }
    var_21 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            arr_47 [i_12] [i_12] = ((/* implicit */unsigned short) var_7);
            /* LoopNest 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        {
                            arr_56 [i_12] [i_13] [i_13] [i_15] [i_16] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_57 [i_12] [i_13] [14LL] [i_13] [i_16] [i_15] [14LL] = ((/* implicit */unsigned char) var_5);
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 0LL))));
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967279U)))))));
                            var_25 = ((/* implicit */unsigned long long int) var_4);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned char) var_0);
        }
        var_27 = ((/* implicit */long long int) (unsigned short)15465);
        arr_58 [i_12] &= ((/* implicit */_Bool) var_6);
    }
    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
    {
        arr_61 [i_17] = ((/* implicit */signed char) (-(var_5)));
        arr_62 [i_17] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)33))))));
        arr_63 [i_17] = ((/* implicit */long long int) 2635586263U);
    }
}
