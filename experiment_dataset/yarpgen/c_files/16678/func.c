/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16678
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
    var_17 = ((/* implicit */unsigned short) ((long long int) (((!(((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) -5914524387117981157LL)) ? (5914524387117981156LL) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_5))))))));
    var_18 = ((/* implicit */unsigned char) -5914524387117981168LL);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) var_15);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_0 [i_1])))));
            var_21 &= (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_0] [13LL] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_7)))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)-10693)), (arr_7 [i_0]))))))));
            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((((/* implicit */_Bool) 2969625468U)) ? (var_11) : (var_6))) <= (arr_3 [i_0])))) : ((-(((/* implicit */int) ((short) var_6)))))));
        }
        for (int i_2 = 4; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_2]);
            var_24 ^= 7118232225607227203LL;
            arr_11 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)2471), (((/* implicit */short) (unsigned char)137))))) ? (((((/* implicit */_Bool) 268435440)) ? (arr_9 [i_0]) : (arr_9 [i_0]))) : (((/* implicit */unsigned long long int) var_11)))))));
            var_25 = min((((/* implicit */long long int) (unsigned char)137)), (7118232225607227203LL));
        }
        for (int i_3 = 4; i_3 < 12; i_3 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (-2)))) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) min((((/* implicit */short) arr_6 [i_0] [i_3] [i_3])), (max((var_12), (((/* implicit */short) var_3)))))))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    {
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)195))));
                        var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (-4368539241773952120LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-23008)))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_13)))))))));
                        arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) (signed char)66);
                    }
                } 
            } 
            var_29 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3])) && (((/* implicit */_Bool) arr_12 [i_3 - 4] [i_3]))))), (((((/* implicit */_Bool) 3715327748U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 - 1] [i_3]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        arr_24 [i_7] [i_3] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) arr_9 [i_7]);
                        var_30 *= ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)7]))))));
                        var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) 63U)) ? (((/* implicit */int) max(((short)1142), ((short)-23001)))) : (((/* implicit */int) min((arr_21 [i_0] [i_3 - 1] [i_6] [i_6 + 1]), (arr_21 [i_0] [i_3 + 1] [i_3] [i_6 + 1]))))))));
                    }
                } 
            } 
        }
    }
}
