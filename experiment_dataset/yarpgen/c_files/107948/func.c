/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107948
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
    var_17 += ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) (~(15463441710364993582ULL)));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7)));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [20LL] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))) : (var_4)));
                            arr_16 [i_1] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) -8069110847776218258LL);
                        }
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2));
                arr_17 [(_Bool)1] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1 - 1]))));
            }
            arr_18 [i_1] [20ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3968))))) : (var_7)));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 4; i_5 < 21; i_5 += 3) 
            {
                var_19 ^= ((/* implicit */short) (!(var_13)));
                arr_21 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) + (15463441710364993582ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0 - 1] [i_1 + 2] [i_5 + 2])));
            }
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8191)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -58653646)) || (((/* implicit */_Bool) (short)8004)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 973650795292458169LL))))) : (((/* implicit */int) var_3))));
                        var_22 = ((/* implicit */short) (-(var_12)));
                        arr_33 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(var_14)));
                    }
                }
            } 
        } 
        arr_34 [3LL] [i_6] = ((/* implicit */_Bool) var_11);
    }
    var_23 -= ((/* implicit */unsigned long long int) var_7);
    var_24 = ((/* implicit */unsigned short) min((var_24), (var_6)));
}
