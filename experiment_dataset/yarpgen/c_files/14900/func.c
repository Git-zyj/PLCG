/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14900
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) max(((short)-26045), ((short)-32368)))), (var_8))));
        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(-1479233151)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_3 [9LL])), (var_18))))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((~(5936778458859155777ULL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */int) ((signed char) (unsigned char)4))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((signed char)-52), (var_11))))))));
                    var_22 |= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3674692492U)) ? (((/* implicit */int) (short)-32369)) : (((/* implicit */int) (signed char)-52))))), (max((arr_6 [i_0] [(short)0] [i_2] [i_2]), (arr_6 [6LL] [13ULL] [6LL] [i_2]))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_12 [i_0] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)35207)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)10] [(short)9]))) == (var_17))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 8105804509771178586ULL))))) : (((/* implicit */int) min(((short)-15043), ((short)-1511))))))));
                        arr_13 [i_0] [8ULL] [i_2] [i_3] &= ((/* implicit */unsigned short) ((short) arr_4 [14U] [i_1] [(signed char)7]));
                        var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned char) arr_10 [i_0]))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) arr_1 [(short)14] [i_0])))), (min((530738980), ((~(((/* implicit */int) (unsigned char)252))))))));
                        arr_14 [(short)5] [(short)10] [i_2] [i_1] [9ULL] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_2])))) && (((/* implicit */_Bool) var_5))));
                    }
                    var_24 = var_9;
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        for (short i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_19 [14LL] = ((/* implicit */unsigned char) ((var_12) ^ (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_3 [i_4])))), (((/* implicit */int) arr_5 [i_5 - 2] [i_4 + 3])))))));
                                var_25 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1758676287U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 *= ((/* implicit */unsigned long long int) (((-((-(((/* implicit */int) var_5)))))) / (min((530738980), (58053712)))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */short) (~(2536291006U)));
        var_27 = max((max(((-(12935162356018501600ULL))), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6] [2LL] [i_6])))) || (((/* implicit */_Bool) ((unsigned char) arr_21 [i_6])))))));
    }
    var_28 |= ((/* implicit */unsigned long long int) ((unsigned int) var_10));
}
