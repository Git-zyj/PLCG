/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129386
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
    var_17 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) 2917312419U);
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (8219618882257055906ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned char)2])))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned int) arr_1 [i_1] [i_2])))));
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 3638428186U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (0ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))));
                }
            } 
        } 
    }
    var_22 += ((((/* implicit */_Bool) ((max((var_13), (((/* implicit */unsigned int) var_12)))) - (((/* implicit */unsigned int) var_12))))) ? (max(((~(var_13))), (min((var_13), (((/* implicit */unsigned int) var_2)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) var_5))))) ? (max((var_12), (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_23 = (((_Bool)1) && (((/* implicit */_Bool) arr_6 [i_3] [i_3] [(_Bool)1])));
        var_24 = ((/* implicit */unsigned short) ((((arr_4 [i_3] [i_3] [i_3]) + (9223372036854775807LL))) >> (((arr_6 [i_3] [i_3] [0U]) + (962294337)))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(unsigned short)10] [i_3])) ^ (((/* implicit */int) (unsigned short)32969))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (13ULL)))));
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59774)) ? (((/* implicit */unsigned long long int) arr_6 [2U] [i_4] [14U])) : (((((/* implicit */_Bool) max(((unsigned char)170), (((/* implicit */unsigned char) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) var_13)), (10ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) (unsigned short)5770)) : (((/* implicit */int) var_2)))))))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_12)) : (arr_3 [i_4])))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_16)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))), (((/* implicit */unsigned int) max(((unsigned short)59782), (((/* implicit */unsigned short) var_11)))))))) : (arr_4 [i_4] [(short)1] [i_4])));
        var_28 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) arr_11 [i_4])))));
    }
}
