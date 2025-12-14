/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180880
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
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((long long int) (+((~(((/* implicit */int) (_Bool)1))))))))));
        var_13 += ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0])))) != (((((/* implicit */_Bool) -8585773617210641550LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43367))) : (-8500113763146566226LL))))))) : ((-(1984153022072502421LL)))));
        var_14 *= ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [i_0]));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(7010858871528947532LL)))) ? (((/* implicit */long long int) arr_4 [i_1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-4181776405610726228LL)))));
        var_16 = ((/* implicit */unsigned int) var_5);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), ((_Bool)1)));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) var_6);
            arr_10 [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)22166)) && (((/* implicit */_Bool) arr_6 [i_2])))) ? (arr_1 [i_2]) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) ((short) var_5));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43367))) : (3346705179U)));
            arr_14 [i_2] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_6 [i_2]))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7010858871528947521LL)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (_Bool)1))));
            var_21 = ((/* implicit */short) (((_Bool)1) ? (4973746880752105807LL) : (7010858871528947516LL)));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -14LL)) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) arr_16 [i_5] [i_5]))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7010858871528947512LL))))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (unsigned char i_8 = 3; i_8 < 11; i_8 += 2) 
            {
                {
                    var_25 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_4)))) : (((/* implicit */int) arr_22 [i_6] [i_6] [i_8 - 3]))))));
                    arr_26 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)55035)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned short)30461))))))), (((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) >= (arr_0 [i_6])))));
                    var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)24346))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)15)), (arr_23 [i_8] [i_7] [i_6]))))) : (((((/* implicit */_Bool) (short)-17438)) ? (arr_11 [i_6] [10]) : (((/* implicit */unsigned long long int) arr_1 [i_6])))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 360193083383804182LL)) && (((/* implicit */_Bool) arr_6 [i_6])))))) * (var_7))))));
                }
            } 
        } 
    } 
    var_27 *= ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)10500)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5853))) : (-7010858871528947530LL)))));
}
