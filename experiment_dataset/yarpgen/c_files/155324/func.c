/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155324
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_7))))) : ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_12 [i_3] [i_3] [i_2] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)88)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26559)))))) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) + (var_14))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_12), (var_14))), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((-(4294967290U)))));
                            }
                            for (int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                            {
                                var_18 = ((/* implicit */signed char) max(((+(((/* implicit */int) var_11)))), (var_13)));
                                var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) || (var_3))))) : (var_12)))));
                            }
                            for (int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */long long int) (_Bool)1);
                                arr_17 [i_0] [i_0] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_4 [i_0]))))));
                                var_21 = ((/* implicit */signed char) var_15);
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 1) 
                            {
                                var_22 = var_13;
                                var_23 = min((((/* implicit */long long int) (+((+(-2001010539)))))), (max((8566156373397242785LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_10)))))));
                                var_24 = ((/* implicit */unsigned int) (((((+(((/* implicit */int) var_8)))) < (-1855320355))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) : (((var_13) + (((/* implicit */int) (signed char)-113)))))) : (((/* implicit */int) ((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)31)), (var_4))))))))));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)4095)) <= (((/* implicit */int) var_11))))))))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    for (signed char i_9 = 1; i_9 < 13; i_9 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) max((max((max((((/* implicit */int) var_0)), (-1939254260))), (var_13))), (((/* implicit */int) max((((unsigned short) var_9)), (var_2))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (max((arr_6 [i_8 + 2] [i_9 + 1] [i_9 - 1] [i_9]), (((/* implicit */int) var_6)))) : (((var_3) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_8 + 4] [12U] [i_9 + 3] [i_9 + 1])))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_21 [2] [i_9 + 1])) ? (((var_9) ? (var_14) : (var_14))) : (((((/* implicit */_Bool) (unsigned short)26559)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) max((-1), (((/* implicit */int) var_11)))))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_16 [i_0] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */int) (_Bool)1)), (var_13))) : (1935307305)))) : (-3621028570392768403LL)));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) (~(max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
}
