/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136659
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_5))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (-(max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) ((signed char) 0)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((unsigned long long int) arr_0 [i_0])) << (((long long int) ((short) 0U)))));
                    var_15 = (+(((815442716U) / (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_7))))))));
                }
            } 
        } 
        var_16 |= ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [13U] [i_0])))))));
        var_17 = max((((/* implicit */unsigned long long int) 3023368954U)), (18446744073709551615ULL));
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_12 [5ULL] = ((/* implicit */unsigned char) ((int) ((((unsigned int) -5993800018672478169LL)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 31U)) && (((/* implicit */_Bool) 12935652158136913131ULL)))))))));
        var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((12935652158136913137ULL) < (((unsigned long long int) 12U)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17063963838202872622ULL)) ? (9185738994311933002LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24734)))))) ? (((((/* implicit */_Bool) var_1)) ? (3445552476895607646ULL) : (11317182338257555467ULL))) : (((/* implicit */unsigned long long int) 16U)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            {
                var_19 -= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((short) (signed char)21))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) -1)))))))) < (((/* implicit */int) arr_9 [i_5] [i_4]))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((int) 17063963838202872650ULL)))))));
                arr_19 [i_5] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_5])) ? (((/* implicit */int) (short)-25672)) : (((/* implicit */int) var_7))))) ? ((+(5511091915572638500ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1)))))));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    var_21 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_4] [i_4] [i_4]))))))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (arr_22 [i_6] [i_5] [i_4]))))), (((_Bool) var_10))));
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4]))) : (max((arr_16 [i_4]), (arr_16 [i_4]))))))));
                    arr_23 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((4294967284U) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_17 [i_5]))))));
                    arr_24 [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) 606739419U))), (((((/* implicit */_Bool) 18014398501093376ULL)) ? (arr_21 [i_5] [i_6] [i_5] [i_5]) : (arr_16 [i_6])))));
                }
            }
        } 
    } 
}
