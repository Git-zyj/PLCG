/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175567
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23431)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)23431))))) : ((~(11358651190677493855ULL)))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned short) (signed char)0)))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) var_9);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7088092883032057761ULL)) ? (7088092883032057761ULL) : (((/* implicit */unsigned long long int) var_3))));
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (0U)));
        arr_16 [i_3] = (+(((/* implicit */int) var_8)));
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(7088092883032057761ULL)))) ? (((/* implicit */int) ((unsigned char) var_12))) : ((-(((/* implicit */int) var_12))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) var_11)))))));
                var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) : (((/* implicit */int) (signed char)-1))));
            }
            arr_22 [10ULL] [10ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7088092883032057761ULL)) ? ((((_Bool)0) ? (1523097517869801933LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1)))))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_19 += ((/* implicit */unsigned int) (+((-9223372036854775807LL - 1LL))));
                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)85))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_31 [i_3] [i_4] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) 2024100137))));
                            arr_32 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) + (((/* implicit */int) var_9))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) var_7);
            }
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_35 [i_3] [i_3] [(signed char)7] [i_3] = ((/* implicit */signed char) ((int) var_11));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8)))))))));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_23 ^= ((/* implicit */unsigned long long int) (signed char)0);
                var_24 -= ((short) (_Bool)0);
                arr_39 [i_3] = ((/* implicit */unsigned char) (short)23431);
                arr_40 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4)));
            }
        }
    }
    var_25 *= ((/* implicit */_Bool) (signed char)-1);
}
