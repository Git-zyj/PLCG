/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100262
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((unsigned int) arr_0 [(signed char)16]))), (arr_3 [16U] [(short)11] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32759)) ^ (((/* implicit */int) (short)32766))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)-32754)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) arr_3 [i_3] [i_3] [i_3]);
                            arr_11 [18U] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))) : (((((/* implicit */_Bool) (short)32759)) ? (arr_10 [i_3] [(signed char)0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32760))))))));
                        }
                    } 
                } 
                arr_12 [(signed char)10] [i_0] = ((/* implicit */signed char) ((((min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) arr_2 [i_1] [i_0])))) + (2147483647))) >> (((((/* implicit */int) (short)-32748)) + (32763)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 2) 
    {
        var_17 += ((/* implicit */unsigned char) ((unsigned int) (((~(((/* implicit */int) arr_14 [13U])))) | (((((/* implicit */int) (signed char)0)) >> (((-4918780001230837452LL) + (4918780001230837476LL))))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    {
                        arr_24 [i_5] [(signed char)12] [i_6] [(unsigned short)1] = (-(((long long int) (!(((/* implicit */_Bool) arr_1 [i_4]))))));
                        arr_25 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 4U)))) ? ((~(((/* implicit */int) arr_23 [i_4 - 2] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 2] [2LL] [(short)9])))))));
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) arr_23 [i_5] [8LL])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) -3640767425637824979LL);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_11))));
                    arr_30 [(unsigned short)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [9ULL])) ? (var_15) : (max((min((((/* implicit */unsigned int) var_10)), (arr_8 [(signed char)5] [i_8] [i_9] [i_9]))), ((-(0U)))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_21 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32763))) : (var_14))), (((((/* implicit */_Bool) arr_14 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_10 [16ULL] [(unsigned char)24] [i_9])))))) ^ (((((unsigned long long int) arr_18 [i_8] [i_8])) << (((max((var_12), (arr_18 [i_8] [(unsigned char)3]))) - (1888360558700191752LL)))))));
                }
            } 
        } 
    }
}
