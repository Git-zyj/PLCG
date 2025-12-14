/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120767
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
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) % (((/* implicit */int) var_0)))) << (((((/* implicit */int) var_11)) - (161)))))), (max((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) var_2)), (9U)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((arr_1 [i_0]) % (4294967286U))) : (((/* implicit */unsigned int) var_9))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) 4294967286U);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((short) min((4294967286U), (4294967292U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((signed char) var_5)))))) : (((var_4) ^ (arr_6 [i_2 - 2] [i_2] [i_2 - 2]))))))));
                    arr_11 [i_0] [i_1] [i_2 - 3] [i_1] = ((/* implicit */int) ((short) (+((~(((/* implicit */int) var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (((long long int) var_2))));
                                arr_18 [i_0] [i_1] [i_2] [i_1] [4U] = ((/* implicit */short) min(((~(((/* implicit */int) (short)0)))), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 7U))) || (((/* implicit */_Bool) ((3U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2853181337746784598LL)) || (((/* implicit */_Bool) 1075555637))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
    {
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) arr_4 [i_5] [i_5])));
        arr_25 [i_5] = ((/* implicit */signed char) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [(signed char)13] [(unsigned char)5]);
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        arr_34 [i_5] [i_6] [i_6] [i_7] [i_8] [i_6] = (+(((/* implicit */int) ((unsigned short) arr_9 [i_8] [i_7] [i_6]))));
                        arr_35 [i_5] [i_6] [i_7] [i_6] [i_5] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7]))) / (var_6)))) || (((/* implicit */_Bool) ((arr_1 [i_5]) % (((518544305U) << (2U))))))));
                    }
                } 
            } 
        } 
        arr_36 [i_5] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_21 [i_5])) - (88)))));
        arr_37 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (4294967289U))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((/* implicit */int) ((_Bool) 4294967293U))))))));
    }
    var_14 ^= ((/* implicit */short) (-(((/* implicit */int) (short)-16338))));
}
