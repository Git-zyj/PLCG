/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172165
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned int) var_6)), (arr_0 [i_0] [i_0 - 1])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (arr_2 [i_0 - 2] [i_0 - 2])));
                    var_17 = ((/* implicit */signed char) var_7);
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) 18446744073709551615ULL))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (13837997007568762341ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (5225950403774225564LL))))))))));
    }
    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (int i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                {
                    var_20 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3 - 2] [i_5 + 2]))) <= (((((/* implicit */_Bool) (~(arr_7 [i_4])))) ? (min((((/* implicit */unsigned long long int) var_5)), (13837997007568762341ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)39963), (((/* implicit */unsigned short) var_13))))) ? (arr_7 [i_3 - 2]) : ((-(((/* implicit */int) arr_14 [i_5 - 1] [i_3 - 2] [i_3 + 1])))))))));
                    var_22 = ((/* implicit */_Bool) ((signed char) ((arr_0 [i_3] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]))))));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_3 + 1] [i_5])))));
                    var_24 ^= min((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) 1731755721U)))))), (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) (_Bool)1)), (2071958715U))) : (((unsigned int) (signed char)-45)))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (short)-1);
    }
    var_26 = ((/* implicit */short) (~(((((/* implicit */int) (signed char)-25)) ^ (((/* implicit */int) (unsigned char)0))))));
    var_27 = ((/* implicit */unsigned short) min((max(((-(var_10))), (((/* implicit */int) var_4)))), ((~(((/* implicit */int) (unsigned char)12))))));
    var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((4185855372653869099LL) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))) : (min((min((((/* implicit */unsigned int) (signed char)-17)), (var_12))), (((/* implicit */unsigned int) ((signed char) var_2)))))));
}
