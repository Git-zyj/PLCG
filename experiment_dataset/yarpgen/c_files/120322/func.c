/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120322
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13748))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_19 |= ((/* implicit */short) ((((((/* implicit */_Bool) -258253258)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) & (((((/* implicit */_Bool) 1152921504606846975LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_3]))))));
                        var_20 ^= ((/* implicit */long long int) ((max(((~(((/* implicit */int) (unsigned short)51788)))), (arr_3 [i_1]))) / (((/* implicit */int) arr_11 [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)51788)) * (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((short) arr_1 [i_1] [i_2]))) : (((((/* implicit */int) (signed char)101)) & (((/* implicit */int) (short)-27415))))));
                            var_22 -= ((/* implicit */int) var_5);
                            var_23 -= ((/* implicit */_Bool) var_13);
                        }
                        for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            var_24 |= ((/* implicit */unsigned short) (short)0);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (short)27415)) >> (((((/* implicit */int) var_5)) + (21009)))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (~(arr_17 [i_4] [i_4] [i_6 + 1] [i_6 - 1] [i_4] [i_4] [i_0]))))));
                            var_27 = var_6;
                        }
                        var_28 = ((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */int) ((10948834967086797530ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) (unsigned short)13748)));
                        arr_23 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (short)27411);
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */int) (short)27422)) > (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_4])))))));
                        arr_24 [i_0] [i_0] [i_2] [i_4] = ((signed char) ((short) arr_13 [i_4] [i_0] [i_0] [i_0]));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned short)51788))));
                        var_31 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) 3159359623872780941LL)))))));
                        var_32 = (i_7 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_19 [i_7] [i_1] [i_1] [i_1] [i_7] [i_7])) ^ (((/* implicit */int) (_Bool)1)))) << (((0) * (((/* implicit */int) arr_16 [i_7] [i_2] [i_1] [i_1] [i_0]))))))) : (((/* implicit */signed char) ((((((((/* implicit */int) arr_19 [i_7] [i_1] [i_1] [i_1] [i_7] [i_7])) ^ (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((0) * (((/* implicit */int) arr_16 [i_7] [i_2] [i_1] [i_1] [i_0])))))));
                        arr_27 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */_Bool) (signed char)0);
                    }
                }
            } 
        } 
        var_33 = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
    }
    var_34 = ((/* implicit */unsigned long long int) max(((-((-(-1LL))))), (((long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (13472340166827668560ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13747))))))));
    var_35 |= ((/* implicit */long long int) var_12);
}
