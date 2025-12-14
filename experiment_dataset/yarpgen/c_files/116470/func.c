/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116470
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
    var_11 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((20ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85)))))))));
    var_12 ^= ((/* implicit */unsigned long long int) (signed char)31);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) (unsigned char)248);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_14 = ((/* implicit */_Bool) 2240495957782936969ULL);
            arr_5 [13U] [i_0] [i_0] = ((/* implicit */unsigned char) (~(var_9)));
            var_15 *= (+(2240495957782936997ULL));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_12 [i_1 + 4] [i_1 + 4] [i_2 - 1] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_2 - 2] [(short)0] [i_0 + 1] [i_1 + 3])) + (2147483647))) << (((arr_11 [i_2 - 1] [(short)8] [i_0 - 1] [i_1 + 1]) - (2310250793U)))));
                        var_16 = ((/* implicit */short) (signed char)-18);
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((((long long int) (signed char)-68)), (((/* implicit */long long int) (signed char)30))))), (18446744073709551613ULL))))));
            arr_16 [i_0] [i_4] = ((/* implicit */short) var_1);
            var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)211)) << (((((/* implicit */int) arr_1 [i_0 - 2])) + (24813))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((_Bool) (signed char)9))) : (((/* implicit */int) (unsigned char)63))))));
            arr_17 [i_4] = ((/* implicit */unsigned char) ((unsigned int) min(((unsigned char)244), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4])) || (((/* implicit */_Bool) (unsigned char)138))))))));
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 15; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((-441670918) == (((/* implicit */int) (unsigned char)238)))) || (((/* implicit */_Bool) max(((short)-8), ((short)29202)))))) ? (max((((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_5 - 1] [i_6])), (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)118))))))))));
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 29U)) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_4])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))))) : (((/* implicit */long long int) 2908186593U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 + 1] [i_6] [i_5 + 2])) ? (((/* implicit */int) ((11353574168038486423ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32738)))))) : (((/* implicit */int) max((arr_19 [13U] [i_5] [i_6]), (((/* implicit */short) (signed char)28)))))))) : (((((/* implicit */_Bool) ((16206248115926614634ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [11U])))))) ? (((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7)))))));
                        var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 596775058U)), (18446744073709551613ULL)));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((5289266828752587326LL) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))))))));
    }
}
