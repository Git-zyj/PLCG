/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159897
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
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)5)) * (((/* implicit */int) (unsigned char)4)))) != (((((67108863) / (((/* implicit */int) (unsigned char)250)))) * (((/* implicit */int) (short)-1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_15 &= ((/* implicit */_Bool) 804483858103528800ULL);
                    var_16 = ((/* implicit */unsigned int) 804483858103528811ULL);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 17642260215606022822ULL))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) 804483858103528800ULL);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) ((((804483858103528775ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))))) >> (((((/* implicit */int) (unsigned short)65535)) - (65478))))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                        }
                        arr_16 [i_0] [i_1] [7U] [i_3] = ((/* implicit */short) 9223372036854775799LL);
                        arr_17 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (short)4379);
                        var_20 = ((/* implicit */long long int) 17642260215606022816ULL);
                        var_21 = ((/* implicit */unsigned int) ((971842773934670509LL) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-64)) + (2147483647))) << (((4101705770U) - (4101705770U)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) ^ (193261526U))))))));
                    }
                }
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (804483858103528800ULL)));
                    var_23 = ((/* implicit */unsigned long long int) (signed char)-1);
                    var_24 = ((/* implicit */unsigned long long int) (unsigned char)83);
                }
                arr_20 [i_0] [7LL] [7LL] = ((/* implicit */unsigned char) ((((/* implicit */int) ((804483858103528799ULL) == (((/* implicit */unsigned long long int) 9223372036854775799LL))))) | (((/* implicit */int) (unsigned char)172))));
                var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)251)) ^ (((/* implicit */int) (unsigned short)43509))))) ^ (804483858103528805ULL)));
            }
        } 
    } 
    var_26 -= ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) 9223372036854775781LL)) & (14979671599974573628ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))))) < (((/* implicit */unsigned long long int) 9223372036854775807LL))));
    var_27 = ((/* implicit */_Bool) (unsigned char)117);
}
