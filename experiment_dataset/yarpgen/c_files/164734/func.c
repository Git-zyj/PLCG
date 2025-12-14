/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164734
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((long long int) var_9)), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)72)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (var_0)))) : (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_14)) : (var_9))), (((/* implicit */unsigned long long int) var_3))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) : (var_11)))) == (((unsigned long long int) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((int) arr_2 [i_0]));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048560U)) ? (((/* implicit */unsigned int) 2147483647)) : (4294967286U)))) ? (arr_5 [i_0]) : (arr_5 [i_0])));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_0]))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) != (arr_6 [i_1] [i_2] [i_3])))) >> (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) 4294967295U)) : (arr_5 [i_3]))) - (4294967290LL))))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) (short)-26418))) > (arr_9 [i_0] [i_3]))))));
                        var_19 ^= ((/* implicit */unsigned short) ((signed char) 1048549U));
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            arr_17 [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_4] [i_0] [i_0] [i_4])) : (((/* implicit */int) ((unsigned short) var_9)))));
            arr_18 [i_0] [i_0] = ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_4] [i_4] [i_0] [8ULL] [i_4]))) ^ (var_10)));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    for (long long int i_7 = 2; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) (unsigned short)6036))))));
                            arr_26 [i_0] [i_0] [11ULL] [i_5] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_9 [i_0] [10U]));
                            var_21 = ((/* implicit */short) arr_22 [i_6 + 1] [i_5] [i_4] [i_0]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                arr_29 [i_0] [i_4] [i_4] [(unsigned short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_8])))))) ? (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_4])))))) : (4012079122577350001ULL)));
                arr_30 [i_0] [19ULL] [i_8] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (short)-25871))) >> (((/* implicit */int) ((arr_6 [i_8] [i_4] [i_0]) > (arr_25 [i_0] [i_0] [i_8] [i_4] [i_0] [i_8] [i_4]))))));
            }
        }
        for (unsigned int i_9 = 3; i_9 < 20; i_9 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) (unsigned short)65535);
            arr_33 [i_0] [i_9] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
        }
    }
}
