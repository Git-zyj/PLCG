/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139587
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6810)) ? (((/* implicit */int) (short)23)) : (((/* implicit */int) (short)-10))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((short) min(((+(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_1 [(unsigned short)8]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (short)23)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12)) >> (((((/* implicit */int) (short)-32)) + (60)))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) 560662078U))))) ? (max((1568102118987322149ULL), (((/* implicit */unsigned long long int) -4660094729775602387LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23)))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (1568102118987322155ULL)))) ? (((/* implicit */unsigned long long int) -4966922148855438152LL)) : (max((0ULL), (((/* implicit */unsigned long long int) (short)3)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 14178545949915917164ULL)))));
        var_13 = ((/* implicit */int) (unsigned short)26644);
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 11ULL))));
                        arr_18 [i_3] [i_1] [i_3] = (((!((!(((/* implicit */_Bool) (unsigned short)29378)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)0))))), ((-(var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_4)))) == (((((/* implicit */_Bool) 0ULL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                        arr_19 [(unsigned char)16] [i_2] [i_3] = ((/* implicit */_Bool) var_2);
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 153818438)), (((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (unsigned short i_6 = 3; i_6 < 15; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((((unsigned long long int) ((var_0) <= (((/* implicit */unsigned long long int) 0U))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4ULL)) ? (4966922148855438151LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6 + 2])) ? (arr_27 [i_6 - 3]) : (var_6))))));
                                var_18 *= ((/* implicit */_Bool) (+(((long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_22 [i_8])))))));
                                arr_33 [i_9] [i_5] [i_9] = ((/* implicit */long long int) var_1);
                                arr_34 [(unsigned char)5] [(_Bool)1] [i_7] [i_8] [i_9] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1))))) ? (((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9] [i_8] [i_7] [i_6]))) : (var_3))) : (((/* implicit */unsigned long long int) arr_28 [i_5] [i_6] [i_7] [(unsigned short)5])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
