/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109727
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))) == (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (short)32767))))))));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) 20ULL);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        arr_17 [i_5] [2LL] [i_5] [i_5] [i_5] [i_5] = 20ULL;
                        var_16 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0])) && (((/* implicit */_Bool) arr_12 [i_0])))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((signed char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10)))))));
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) (signed char)-8)), (9ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_19 [i_6])))))))) : (var_14)));
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            var_19 *= ((/* implicit */unsigned char) max(((signed char)-32), ((signed char)96)));
            var_20 = ((/* implicit */unsigned short) (+(((((arr_20 [i_6] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551589ULL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (short)20217)) && (((/* implicit */_Bool) 5966069163650024398ULL)))))))));
        }
        var_21 &= ((/* implicit */signed char) arr_22 [i_6]);
    }
    var_22 = ((/* implicit */unsigned long long int) var_0);
    var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_1))))) ? (max((((/* implicit */unsigned long long int) var_11)), (6701690643758925736ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_24 = ((/* implicit */unsigned long long int) max((min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) ((short) var_7))))), (((/* implicit */int) var_9))));
    var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)48670)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_3)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */short) (signed char)5))))))))));
}
