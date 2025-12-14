/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166424
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
    var_12 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) ((_Bool) ((signed char) var_6)));
        var_13 = ((var_10) ? (((/* implicit */int) ((short) max((var_3), (((/* implicit */unsigned long long int) -7998374801804895820LL)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) ((unsigned short) -147077705))))));
        arr_4 [i_0] = ((/* implicit */int) var_6);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) var_1);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((_Bool) 20LL)) ? (((((/* implicit */_Bool) var_4)) ? (8070450532247928832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16771))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1315026776)) ? (((/* implicit */int) (short)4064)) : (((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_14 [(_Bool)0] [(_Bool)0] = ((/* implicit */long long int) var_10);
            var_14 = var_5;
        }
        for (short i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
        {
            arr_17 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_1))))));
            arr_18 [i_1] = ((/* implicit */unsigned char) 14832063443904396305ULL);
        }
        /* vectorizable */
        for (short i_4 = 2; i_4 < 12; i_4 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) ((_Bool) var_9));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                var_16 = ((/* implicit */long long int) (_Bool)1);
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    arr_27 [i_1] [0] [i_1] [13] [i_1] [13] = var_1;
                    arr_28 [(signed char)9] [(signed char)9] [(signed char)9] [(short)7] = ((_Bool) var_8);
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))))));
                }
            }
            for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                arr_32 [i_1] = ((/* implicit */long long int) var_11);
                arr_33 [i_1] [(unsigned short)9] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7998374801804895835LL))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)23990)))))));
                    var_20 = (unsigned char)50;
                    var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)5943))))));
                }
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    var_22 = ((/* implicit */int) 3638964908U);
                    arr_39 [i_1] = (+(var_9));
                }
            }
        }
    }
}
