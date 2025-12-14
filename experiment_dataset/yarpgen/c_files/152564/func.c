/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152564
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_15 = ((/* implicit */_Bool) (unsigned short)0);
            var_16 = ((/* implicit */unsigned long long int) (signed char)-123);
        }
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */long long int) 2036532778U)) & (8953644285456981459LL)));
                        var_18 = ((/* implicit */unsigned long long int) ((int) -1LL));
                        arr_14 [i_0] [i_0] [(short)14] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (_Bool)1));
                    }
                } 
            } 
        } 
        var_19 = (unsigned short)56036;
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        var_20 = ((long long int) (unsigned short)65535);
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (unsigned short)7692))));
            arr_23 [i_5] [7ULL] [i_6] = ((/* implicit */unsigned short) ((short) (-9223372036854775807LL - 1LL)));
            arr_24 [i_5] = ((/* implicit */long long int) ((signed char) (short)32767));
        }
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)46)) || ((_Bool)1)));
        arr_25 [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)57844)) + (((/* implicit */int) (signed char)107))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) (unsigned short)7692)) ? (665139802585591552LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57844)))))));
        arr_28 [i_7] [i_7] = ((/* implicit */long long int) (short)-18478);
    }
    var_24 ^= ((/* implicit */unsigned long long int) var_9);
    var_25 &= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)1280))) ? (((/* implicit */int) ((short) 12615756253045701879ULL))) : (((/* implicit */int) var_8))))), (var_11)));
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (var_5)))) ? (((var_8) ? (var_13) : (((/* implicit */unsigned long long int) ((0LL) << (((((/* implicit */int) (signed char)-91)) + (132)))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) 5830987820663849747ULL)) ? (4294967267U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
    var_27 = ((/* implicit */long long int) ((signed char) (unsigned char)255));
}
