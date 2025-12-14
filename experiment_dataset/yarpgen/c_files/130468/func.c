/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130468
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
    var_14 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) min((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0])))) : (((/* implicit */int) ((signed char) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    for (int i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        var_15 = ((/* implicit */_Bool) var_0);
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 2])))))) ? (((((/* implicit */_Bool) arr_7 [i_1 - 2])) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((/* implicit */int) (unsigned char)56)))) : (((/* implicit */int) arr_7 [i_1 - 1]))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != ((~(0ULL)))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_17 *= ((/* implicit */signed char) arr_16 [i_5]);
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
        {
            arr_22 [(short)6] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_6 + 1] [i_5])) ? (0ULL) : (((/* implicit */unsigned long long int) var_12))))))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((short) ((unsigned long long int) arr_23 [i_7] [11ULL])));
                            var_19 = ((/* implicit */long long int) arr_21 [i_6 - 1] [i_6 + 1] [i_6 - 1]);
                        }
                    } 
                } 
            } 
            var_20 += ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) ((unsigned int) arr_6 [i_5] [(unsigned char)17]))));
        }
        for (unsigned char i_10 = 1; i_10 < 17; i_10 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) arr_12 [i_5] [i_10 - 1] [(_Bool)1]);
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    {
                        arr_40 [i_12] [i_11] [i_10] [i_5] [(_Bool)1] = ((/* implicit */signed char) (-(((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)23)))))));
                        arr_41 [(unsigned short)4] [i_10] [i_11] [(short)9] [i_10] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_14 [i_10] [i_10] [i_10]))) && ((!((!(((/* implicit */_Bool) -427198089042608851LL))))))));
                        var_22 &= ((/* implicit */unsigned short) arr_6 [i_10 - 1] [i_10 - 1]);
                        var_23 = ((/* implicit */unsigned char) arr_34 [i_5] [i_5] [i_5] [i_10 - 1]);
                    }
                } 
            } 
            arr_42 [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)127))));
        }
        arr_43 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) arr_19 [i_5] [(unsigned char)3]);
    }
}
