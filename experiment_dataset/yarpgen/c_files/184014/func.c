/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184014
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [17U]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (unsigned char)171)))));
                    var_21 = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_22 |= ((/* implicit */signed char) (+(9307526929288582917ULL)));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 4; i_6 < 19; i_6 += 3) 
                        {
                            arr_23 [(short)3] [i_6] [i_5] = ((/* implicit */unsigned int) (+(arr_4 [i_6 - 3] [i_6 - 4])));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_10))));
                            arr_24 [8ULL] [i_6] [i_4] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-((-(arr_0 [i_0] [i_3])))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (9307526929288582907ULL)));
                            arr_28 [i_3] [i_4] [i_5] [i_7] &= ((/* implicit */signed char) (-(-5099557094691874389LL)));
                            arr_29 [(unsigned char)14] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */int) 9139217144420968699ULL);
                            var_25 = ((/* implicit */unsigned long long int) ((long long int) arr_8 [(signed char)10] [i_3] [i_4]));
                        }
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_3] [(signed char)9] [i_4] [i_5] [i_5])) ? (((/* implicit */int) arr_26 [i_0] [i_3] [i_5] [i_5] [i_4] [i_4] [9ULL])) : (((/* implicit */int) var_2))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_11 [i_5])) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_3] [(_Bool)1] [i_4] [i_5] [12ULL])) : (((/* implicit */int) arr_17 [1ULL] [i_0] [i_3] [i_3] [(signed char)2] [i_5]))));
                    }
                } 
            } 
            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3])) ^ (((/* implicit */int) var_5))));
        }
        for (signed char i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) ((unsigned long long int) var_7));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    {
                        arr_39 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))) >= (9307526929288582917ULL))) ? (((((/* implicit */int) arr_27 [14U] [15U] [i_10] [i_0] [i_9])) & (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_8] [12] [i_9] [i_0] [i_10])))))));
                        var_29 = ((/* implicit */unsigned long long int) var_9);
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [18] [i_8] [i_8] [i_9] [i_9] [i_10])))))));
                        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9307526929288582911ULL))));
                    }
                } 
            } 
            var_32 = ((/* implicit */_Bool) min((var_32), ((!(((/* implicit */_Bool) arr_34 [i_0]))))));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_8])) << (((/* implicit */int) arr_18 [14] [i_0] [i_0] [i_0] [i_8] [i_8]))));
        }
        for (signed char i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */int) 9307526929288582911ULL);
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_0] [i_11] [i_0] [i_11] [i_11])))))));
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [16] [i_11] [i_11])) - (((/* implicit */int) arr_19 [i_0] [(signed char)16] [i_11] [14U])))))));
        }
    }
}
