/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117040
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
    var_14 &= ((/* implicit */int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)25520))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3145544832U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) -7605079388632560738LL)) ? (7605079388632560738LL) : (7605079388632560738LL))) : (max((((/* implicit */long long int) (short)-281)), (-7605079388632560739LL)))))));
    var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-28568)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2102458729U)) ? (17354563310314265608ULL) : (((/* implicit */unsigned long long int) 259866158)))))))) : (min((((((/* implicit */_Bool) 904681508U)) ? (((/* implicit */int) var_1)) : (1536062399))), (((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -906862931))))) != (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] = (((+(((/* implicit */int) arr_2 [i_0])))) < ((~(((/* implicit */int) (short)-26664)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (~((+(((-974095496) + (arr_5 [i_1])))))));
        var_18 *= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned short)60299)))), (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_17 [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(7605079388632560747LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(0U)))) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (arr_5 [i_4]) : (((/* implicit */int) arr_8 [i_2] [i_2])))) : ((~(((/* implicit */int) (signed char)77))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2] [i_2]))))) ? (((arr_16 [i_2] [5LL] [(unsigned char)10] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_2])) ? (((/* implicit */int) (short)-24881)) : (-449056701))))))));
                    arr_18 [i_2] [i_2] = ((/* implicit */signed char) ((max(((!(((/* implicit */_Bool) (signed char)11)))), ((!(((/* implicit */_Bool) (unsigned short)13405)))))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))) <= (2097120ULL)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_2] [i_2])) && (((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_4] [i_2]))))))) : (((/* implicit */int) max((((/* implicit */short) arr_13 [i_2] [i_2])), (arr_6 [i_2]))))));
                    arr_19 [i_2] [i_2] [i_2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_3] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [(signed char)3] [i_4])) ? (-49034966) : (((/* implicit */int) (short)-7237))))) : (min((-7605079388632560740LL), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_2]))))) : (arr_12 [i_2] [i_4]));
                }
            } 
        } 
        arr_20 [i_2] = ((/* implicit */int) min((17354563310314265608ULL), (((/* implicit */unsigned long long int) max(((!(arr_8 [i_2] [i_2]))), ((!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])))))))));
        arr_21 [(unsigned short)10] &= ((/* implicit */unsigned char) arr_6 [(_Bool)0]);
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_26 [i_6]), (((/* implicit */int) (unsigned short)10993))))), (min((min((2192508566U), (((/* implicit */unsigned int) (short)-7237)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -736463032019781414LL)) || (((/* implicit */_Bool) -906862937)))))))));
                var_20 = (!(((((/* implicit */_Bool) (unsigned char)177)) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))));
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)38))));
            }
        } 
    } 
}
