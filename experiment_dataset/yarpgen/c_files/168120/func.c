/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168120
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
    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_2) | (((/* implicit */unsigned int) min((0), (((/* implicit */int) (_Bool)1)))))))) ^ ((-((+(14014619526597247203ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) max((9223372036854775797LL), (((/* implicit */long long int) (short)32740))))) && (((/* implicit */_Bool) ((((-5741911974849381600LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)56203)) - (56203))))))))), ((+(((/* implicit */int) (signed char)0))))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)8191)), (8388607LL))))));
                                var_15 = (((-(min((18385458044192394120ULL), (((/* implicit */unsigned long long int) 2147483647)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((18446744073709551593ULL), (((/* implicit */unsigned long long int) (signed char)-7)))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)69))))))))));
                                arr_12 [i_4] [i_4] [i_2] [4ULL] [i_0] = ((/* implicit */unsigned short) (((((-(min((16384), (((/* implicit */int) (unsigned char)255)))))) + (2147483647))) << (((max((min((17179869183ULL), (((/* implicit */unsigned long long int) (unsigned short)36427)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (-4695788496047497106LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))) - (36427ULL)))));
                                var_16 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) 0)), (8589934591LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */int) (unsigned char)243)) & (((((/* implicit */int) (unsigned short)56203)) ^ (((/* implicit */int) (_Bool)1))))))));
                            var_18 = ((/* implicit */signed char) (+(((unsigned int) (unsigned short)65528))));
                        }
                        for (long long int i_7 = 2; i_7 < 19; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-18))));
                            var_20 = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)56194))))));
                            var_21 = ((/* implicit */int) (((-(70368744177663LL))) % (((-1LL) % (274869518336LL)))));
                            var_22 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56190))) == (-8388630LL)));
                        }
                        var_23 = ((/* implicit */short) (((~(18446744073709551613ULL))) != (((/* implicit */unsigned long long int) 0))));
                        var_24 = ((/* implicit */unsigned short) ((((unsigned long long int) (_Bool)1)) << (((/* implicit */int) (signed char)0))));
                        var_25 = ((/* implicit */unsigned short) ((((864691128455135232LL) / (4396972769280LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -12LL)) && (((/* implicit */_Bool) (signed char)0))))))));
                    }
                    arr_20 [i_0] [i_0] = (((+(((/* implicit */int) (unsigned short)56203)))) - (((((/* implicit */int) (unsigned char)251)) | (((/* implicit */int) (short)16384)))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) 4294967287U))));
                }
            } 
        } 
    } 
    var_27 += ((/* implicit */long long int) max((min(((-(0ULL))), (((/* implicit */unsigned long long int) max(((signed char)-111), ((signed char)118)))))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)32)))), ((-(((/* implicit */int) (unsigned short)65528)))))))));
}
